
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct ikev2_payloads {int dummy; } ;
struct ikev2_initiator_data {int state; int r_sign_msg; int r_spi; int i_spi; } ;
struct ikev2_hdr {int flags; int next_payload; int r_spi; int i_spi; int exchange_type; int version; int length; int message_id; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ikev2_payloads*,int ,int const*,int const*) ;
 int FUNC_2 (struct ikev2_initiator_data*,struct ikev2_hdr const*,struct ikev2_payloads*) ;
 int FUNC_3 (struct ikev2_initiator_data*,struct ikev2_hdr const*,struct ikev2_payloads*) ;
 scalar_t__ FUNC_4 (struct ikev2_initiator_data*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf const*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct wpabuf const*) ;
 int * FUNC_11 (struct wpabuf const*) ;
 int FUNC_12 (struct wpabuf const*) ;

int FUNC_13(struct ikev2_initiator_data *VAR_7,
       const struct wpabuf *VAR_8)
{
 const struct ikev2_hdr *VAR_9;
 u32 VAR_10, VAR_11;
 const u8 *VAR_12, *VAR_13;
 struct ikev2_payloads VAR_14;

 FUNC_7(VAR_6, "IKEV2: Received message (len %lu)",
     (unsigned long) FUNC_12(VAR_8));

 if (FUNC_12(VAR_8) < sizeof(*VAR_9)) {
  FUNC_7(VAR_5, "IKEV2: Too short frame to include HDR");
  return -1;
 }

 VAR_9 = (const struct ikev2_hdr *) FUNC_10(VAR_8);
 VAR_13 = FUNC_11(VAR_8) + FUNC_12(VAR_8);
 VAR_11 = FUNC_0(VAR_9->message_id);
 VAR_10 = FUNC_0(VAR_9->length);

 FUNC_6(VAR_4, "IKEV2:   IKE_SA Initiator's SPI",
      VAR_9->i_spi, VAR_2);
 FUNC_6(VAR_4, "IKEV2:   IKE_SA Initiator's SPI",
      VAR_9->r_spi, VAR_2);
 FUNC_7(VAR_4, "IKEV2:   Next Payload: %u  Version: 0x%x  "
     "Exchange Type: %u",
     VAR_9->next_payload, VAR_9->version, VAR_9->exchange_type);
 FUNC_7(VAR_4, "IKEV2:   Message ID: %u  Length: %u",
     VAR_11, VAR_10);

 if (VAR_9->version != VAR_3) {
  FUNC_7(VAR_5, "IKEV2: Unsupported HDR version 0x%x "
      "(expected 0x%x)", VAR_9->version, VAR_3);
  return -1;
 }

 if (VAR_10 != FUNC_12(VAR_8)) {
  FUNC_7(VAR_5, "IKEV2: Invalid length (HDR: %lu != "
      "RX: %lu)", (unsigned long) VAR_10,
      (unsigned long) FUNC_12(VAR_8));
  return -1;
 }

 if (FUNC_4(VAR_7, VAR_9->exchange_type, VAR_11) < 0)
  return -1;

 if ((VAR_9->flags & (VAR_0 | VAR_1)) !=
     VAR_1) {
  FUNC_7(VAR_5, "IKEV2: Unexpected Flags value 0x%x",
      VAR_9->flags);
  return -1;
 }

 if (VAR_7->state != 128) {
  if (FUNC_5(VAR_7->i_spi, VAR_9->i_spi, VAR_2) != 0) {
   FUNC_7(VAR_5, "IKEV2: Unexpected IKE_SA "
       "Initiator's SPI");
   return -1;
  }
  if (FUNC_5(VAR_7->r_spi, VAR_9->r_spi, VAR_2) != 0) {
   FUNC_7(VAR_5, "IKEV2: Unexpected IKE_SA "
       "Responder's SPI");
   return -1;
  }
 }

 VAR_12 = (const u8 *) (VAR_9 + 1);
 if (FUNC_1(&VAR_14, VAR_9->next_payload, VAR_12, VAR_13) < 0)
  return -1;

 switch (VAR_7->state) {
 case 128:
  if (FUNC_3(VAR_7, VAR_9, &VAR_14) < 0)
   return -1;
  FUNC_9(VAR_7->r_sign_msg);
  VAR_7->r_sign_msg = FUNC_8(VAR_8);
  break;
 case 129:
  if (FUNC_2(VAR_7, VAR_9, &VAR_14) < 0)
   return -1;
  break;
 case 131:
 case 130:
  break;
 }

 return 0;
}
