
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct os_time {scalar_t__ sec; } ;
struct eap_fast_data {int* identity; size_t identity_len; int send_new_pac; scalar_t__ pac_key_refresh_time; int pac_opaque_encr; } ;
typedef scalar_t__ os_time_t ;


 int VAR_0 ;
 int VAR_1 ;




 size_t VAR_2 ;
 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int ,int,size_t,int const*,int*) ;
 int FUNC_3 (int*,int const*,int const*,int*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (struct os_time*) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (int*,int*,size_t) ;
 int FUNC_8 (int ,char*,int const*,size_t) ;
 int FUNC_9 (int ,char*,int*,size_t) ;
 int FUNC_10 (int ,char*,int*,int) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int FUNC_12(void *VAR_3, const u8 *VAR_4, size_t VAR_5,
          const u8 *VAR_6,
          const u8 *VAR_7,
          u8 *VAR_8)
{
 struct eap_fast_data *VAR_9 = VAR_3;
 const u8 *VAR_10;
 size_t VAR_11;
 u8 *VAR_12, *VAR_13, *VAR_14, *VAR_15 = ((void*)0);
 os_time_t VAR_16 = 0;
 struct os_time VAR_17;
 u8 *VAR_18 = ((void*)0);
 size_t VAR_19 = 0;

 FUNC_11(VAR_1, "EAP-FAST: SessionTicket callback");
 FUNC_8(VAR_1, "EAP-FAST: SessionTicket (PAC-Opaque)",
      VAR_4, VAR_5);

 if (VAR_5 < 4 || FUNC_0(VAR_4) != VAR_2) {
  FUNC_11(VAR_1, "EAP-FAST: Ignore invalid "
      "SessionTicket");
  return 0;
 }

 VAR_11 = FUNC_0(VAR_4 + 2);
 VAR_10 = VAR_4 + 4;
 if (VAR_11 < 8 || VAR_11 % 8 ||
     VAR_11 > VAR_5 - 4) {
  FUNC_11(VAR_1, "EAP-FAST: Ignore invalid PAC-Opaque "
      "(len=%lu left=%lu)",
      (unsigned long) VAR_11,
      (unsigned long) VAR_5);
  return 0;
 }
 FUNC_8(VAR_1, "EAP-FAST: Received PAC-Opaque",
      VAR_10, VAR_11);

 VAR_12 = FUNC_6(VAR_11 - 8);
 if (VAR_12 == ((void*)0)) {
  FUNC_11(VAR_1, "EAP-FAST: Failed to allocate memory "
      "for decrypting PAC-Opaque");
  return 0;
 }

 if (FUNC_2(VAR_9->pac_opaque_encr, sizeof(VAR_9->pac_opaque_encr),
         (VAR_11 - 8) / 8, VAR_10, VAR_12) < 0) {
  FUNC_11(VAR_1, "EAP-FAST: Failed to decrypt "
      "PAC-Opaque");
  FUNC_4(VAR_12);






  return 0;
 }

 VAR_14 = VAR_12 + VAR_11 - 8;
 FUNC_10(VAR_1, "EAP-FAST: Decrypted PAC-Opaque",
   VAR_12, VAR_14 - VAR_12);

 VAR_13 = VAR_12;
 while (VAR_14 - VAR_13 > 1) {
  u8 VAR_20, VAR_21;

  VAR_20 = *VAR_13++;
  VAR_21 = *VAR_13++;
  if (VAR_21 > VAR_14 - VAR_13)
   break;

  switch (VAR_20) {
  case 128:
   goto done;
  case 130:
   if (VAR_21 != VAR_0) {
    FUNC_11(VAR_1,
        "EAP-FAST: Invalid PAC-Key length %d",
        VAR_21);
    FUNC_4(VAR_12);
    return -1;
   }
   VAR_15 = VAR_13;
   FUNC_10(VAR_1, "EAP-FAST: PAC-Key from "
     "decrypted PAC-Opaque",
     VAR_15, VAR_0);
   break;
  case 129:
   if (VAR_21 != 4) {
    FUNC_11(VAR_1, "EAP-FAST: Invalid "
        "PAC-Key lifetime length %d",
        VAR_21);
    FUNC_4(VAR_12);
    return -1;
   }
   VAR_16 = FUNC_1(VAR_13);
   break;
  case 131:
   VAR_18 = VAR_13;
   VAR_19 = VAR_21;
   break;
  }

  VAR_13 += VAR_21;
 }
done:

 if (VAR_15 == ((void*)0)) {
  FUNC_11(VAR_1, "EAP-FAST: No PAC-Key included in "
      "PAC-Opaque");
  FUNC_4(VAR_12);
  return -1;
 }

 if (VAR_18) {
  FUNC_9(VAR_1, "EAP-FAST: Identity from "
      "PAC-Opaque", VAR_18, VAR_19);
  FUNC_4(VAR_9->identity);
  VAR_9->identity = FUNC_6(VAR_19);
  if (VAR_9->identity) {
   FUNC_7(VAR_9->identity, VAR_18, VAR_19);
   VAR_9->identity_len = VAR_19;
  }
 }

 if (FUNC_5(&VAR_17) < 0 || VAR_16 <= 0 || VAR_17.sec > VAR_16) {
  FUNC_11(VAR_1, "EAP-FAST: PAC-Key not valid anymore "
      "(lifetime=%ld now=%ld)", VAR_16, VAR_17.sec);
  VAR_9->send_new_pac = 2;
 } else if (VAR_16 - VAR_17.sec < VAR_9->pac_key_refresh_time) {
  FUNC_11(VAR_1, "EAP-FAST: PAC-Key soft timeout; send "
      "an update if authentication succeeds");
  VAR_9->send_new_pac = 1;
 }

 FUNC_3(VAR_15, VAR_7, VAR_6,
          VAR_8);

 FUNC_4(VAR_12);

 return 1;
}
