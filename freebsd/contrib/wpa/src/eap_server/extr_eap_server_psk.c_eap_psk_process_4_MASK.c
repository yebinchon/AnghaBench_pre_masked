
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_psk_hdr_4 {int dummy; } ;
struct eap_psk_data {scalar_t__ state; int tek; } ;
typedef int nonce ;





 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int,int ,int,scalar_t__*,size_t,scalar_t__ const*) ;
 scalar_t__* FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__* FUNC_4 (scalar_t__ const*,size_t) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 int FUNC_6 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_9(struct eap_sm *VAR_9,
         struct eap_psk_data *VAR_10,
         struct wpabuf *VAR_11)
{
 const struct eap_psk_hdr_4 *VAR_12;
 u8 *VAR_13, VAR_14[16];
 size_t VAR_15;
 const u8 *VAR_16, *VAR_17;

 if (VAR_10->state != VAR_7)
  return;

 FUNC_7(VAR_3, "EAP-PSK: Received PSK-4");

 VAR_16 = FUNC_1(VAR_1, VAR_0, VAR_11, &VAR_15);
 if (VAR_16 == ((void*)0) || VAR_15 < sizeof(*VAR_12)) {
  FUNC_7(VAR_4, "EAP-PSK: Invalid frame");
  return;
 }
 VAR_12 = (const struct eap_psk_hdr_4 *) VAR_16;
 VAR_16 = (const u8 *) (VAR_12 + 1);
 VAR_15 -= sizeof(*VAR_12);

 FUNC_6(VAR_5, "EAP-PSK: Encrypted PCHANNEL", VAR_16, VAR_15);

 if (VAR_15 < 4 + 16 + 1) {
  FUNC_7(VAR_4, "EAP-PSK: Too short PCHANNEL data in "
      "PSK-4 (len=%lu, expected 21)",
      (unsigned long) VAR_15);
  return;
 }

 if (VAR_16[0] == 0 && VAR_16[1] == 0 && VAR_16[2] == 0 && VAR_16[3] == 0) {
  FUNC_7(VAR_3, "EAP-PSK: Nonce did not increase");
  return;
 }

 FUNC_5(VAR_14, 0, 12);
 FUNC_3(VAR_14 + 12, VAR_16, 4);
 VAR_16 += 4;
 VAR_15 -= 4;
 VAR_17 = VAR_16;
 VAR_16 += 16;
 VAR_15 -= 16;

 VAR_13 = FUNC_4(VAR_16, VAR_15);
 if (VAR_13 == ((void*)0))
  return;

 if (FUNC_0(VAR_10->tek, VAR_14, sizeof(VAR_14),
    FUNC_8(VAR_11), 22, VAR_13, VAR_15,
    VAR_17)) {
  FUNC_7(VAR_6, "EAP-PSK: PCHANNEL decryption failed");
  FUNC_2(VAR_13);
  VAR_10->state = VAR_2;
  return;
 }
 FUNC_6(VAR_3, "EAP-PSK: Decrypted PCHANNEL message",
      VAR_13, VAR_15);


 switch (VAR_13[0] >> 6) {
 case 130:
  FUNC_7(VAR_3, "EAP-PSK: R flag - CONT - unsupported");
  VAR_10->state = VAR_2;
  break;
 case 128:
  FUNC_7(VAR_3, "EAP-PSK: R flag - DONE_SUCCESS");
  VAR_10->state = VAR_8;
  break;
 case 129:
  FUNC_7(VAR_3, "EAP-PSK: R flag - DONE_FAILURE");
  VAR_10->state = VAR_2;
  break;
 }
 FUNC_2(VAR_13);
}
