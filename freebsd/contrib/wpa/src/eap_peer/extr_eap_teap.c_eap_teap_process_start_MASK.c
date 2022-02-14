
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct eap_teap_data {int received_version; int teap_version; int provisioning; scalar_t__ provisioning_allowed; scalar_t__ current_pac; scalar_t__ resuming; int server_outer_tlvs; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*) ;
 size_t FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (struct eap_sm*,struct eap_teap_data*) ;
 int FUNC_3 (struct eap_teap_data*,int const*,size_t) ;
 scalar_t__ FUNC_4 (struct eap_sm*,struct eap_teap_data*,scalar_t__) ;
 int FUNC_5 (int ,char*,int const*,size_t) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int const*,size_t) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct eap_sm *VAR_7,
      struct eap_teap_data *VAR_8, u8 VAR_9,
      const u8 *VAR_10, size_t VAR_11)
{
 const u8 *VAR_12 = ((void*)0);
 size_t VAR_13 = 0;





 VAR_8->received_version = VAR_9 & VAR_1;
 FUNC_6(VAR_2, "EAP-TEAP: Start (server ver=%u, own ver=%u)",
     VAR_8->received_version, VAR_8->teap_version);
 if (VAR_8->received_version < 1) {

  FUNC_6(VAR_3,
      "EAP-TEAP: Server used unknown TEAP version %u",
      VAR_8->received_version);
  return -1;
 }
 if (VAR_8->received_version < VAR_8->teap_version)
  VAR_8->teap_version = VAR_8->received_version;
 FUNC_6(VAR_2, "EAP-TEAP: Using TEAP version %d",
     VAR_8->teap_version);
 FUNC_5(VAR_4, "EAP-TEAP: Start message payload", VAR_10, VAR_11);


 if (VAR_9 & VAR_0) {
  const u8 *VAR_14, *VAR_15;
  u32 VAR_16;

  if (VAR_11 < 4) {
   FUNC_6(VAR_3,
       "EAP-TEAP: Not enough room for the Outer TLV Length field");
   return -1;
  }

  VAR_16 = FUNC_1(VAR_10);
  VAR_10 += 4;
  VAR_11 -= 4;

  if (VAR_16 > VAR_11) {
   FUNC_6(VAR_3,
       "EAP-TEAP: Truncated Outer TLVs field (Outer TLV Length: %u; remaining buffer: %u)",
       VAR_16, (unsigned int) VAR_11);
   return -1;
  }

  VAR_14 = VAR_10 + VAR_11 - VAR_16;
  VAR_15 = VAR_14 + VAR_16;
  FUNC_5(VAR_4, "EAP-TEAP: Start message Outer TLVs",
       VAR_14, VAR_16);
  FUNC_8(VAR_8->server_outer_tlvs);
  VAR_8->server_outer_tlvs = FUNC_7(VAR_14,
           VAR_16);
  if (!VAR_8->server_outer_tlvs)
   return -1;
  VAR_11 -= VAR_16;
  if (VAR_11 > 0) {
   FUNC_5(VAR_3,
        "EAP-TEAP: Unexpected TLS Data in Start message",
        VAR_10, VAR_11);
   return -1;
  }

  while (VAR_14 < VAR_15) {
   u16 VAR_17, VAR_18;

   if (VAR_15 - VAR_14 < 4) {
    FUNC_6(VAR_3,
        "EAP-TEAP: Truncated Outer TLV header");
    return -1;
   }
   VAR_17 = FUNC_0(VAR_14);
   VAR_14 += 2;
   VAR_18 = FUNC_0(VAR_14);
   VAR_14 += 2;


   VAR_17 &= VAR_6;
   FUNC_6(VAR_2,
       "EAP-TEAP: Outer TLV: Type=%u Length=%u",
       VAR_17, VAR_18);
   if (VAR_15 - VAR_14 < VAR_18) {
    FUNC_6(VAR_3,
        "EAP-TEAP: Truncated Outer TLV (Type %u)",
        VAR_17);
    return -1;
   }
   if (VAR_17 == VAR_5) {
    FUNC_5(VAR_2, "EAP-TEAP: Authority-ID",
         VAR_14, VAR_18);
    if (VAR_12) {
     FUNC_6(VAR_3,
         "EAP-TEAP: Multiple Authority-ID TLVs in TEAP/Start");
     return -1;
    }
    VAR_12 = VAR_14;
    VAR_13 = VAR_18;
   } else {
    FUNC_6(VAR_2,
        "EAP-TEAP: Ignore unknown Outer TLV (Type %u)",
        VAR_17);
   }
   VAR_14 += VAR_18;
  }
 } else if (VAR_11 > 0) {
  FUNC_5(VAR_3,
       "EAP-TEAP: Unexpected TLS Data in Start message",
       VAR_10, VAR_11);
  return -1;
 }

 FUNC_3(VAR_8, VAR_12, VAR_13);

 if (VAR_8->resuming && VAR_8->current_pac) {
  FUNC_6(VAR_2,
      "EAP-TEAP: Trying to resume session - do not add PAC-Opaque to TLS ClientHello");
  if (FUNC_2(VAR_7, VAR_8) < 0)
   return -1;
 } else if (VAR_8->current_pac) {




  if (FUNC_4(VAR_7, VAR_8, VAR_8->current_pac) < 0)
   return -1;
 } else if (VAR_8->provisioning_allowed) {
  FUNC_6(VAR_2,
      "EAP-TEAP: No PAC found - starting provisioning");
  if (FUNC_2(VAR_7, VAR_8) < 0)
   return -1;
  VAR_8->provisioning = 1;
 }

 return 0;
}
