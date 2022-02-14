
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct ikev2_responder_data {scalar_t__ state; int last_msg; int i_sign_msg; int r_spi; int i_spi; scalar_t__ error_type; } ;
struct ikev2_payloads {int dummy; } ;
struct ikev2_hdr {int flags; int next_payload; int r_spi; int i_spi; int exchange_type; int version; int length; int message_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ikev2_payloads*,int ,int const*,int const*) ;
 scalar_t__ FUNC_2 (struct ikev2_responder_data*,struct ikev2_hdr const*,struct ikev2_payloads*) ;
 scalar_t__ FUNC_3 (struct ikev2_responder_data*,struct ikev2_hdr const*,struct ikev2_payloads*) ;
 scalar_t__ FUNC_4 (struct ikev2_responder_data*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf const*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct wpabuf const*) ;
 int * FUNC_11 (struct wpabuf const*) ;
 int FUNC_12 (struct wpabuf const*) ;

int FUNC_13(struct ikev2_responder_data *VAR_12,
       const struct wpabuf *VAR_13)
{
 const struct ikev2_hdr *VAR_14;
 u32 VAR_15, VAR_16;
 const u8 *VAR_17, *VAR_18;
 struct ikev2_payloads VAR_19;

 FUNC_7(VAR_8, "IKEV2: Received message (len %lu)",
     (unsigned long) FUNC_12(VAR_13));

 if (FUNC_12(VAR_13) < sizeof(*VAR_14)) {
  FUNC_7(VAR_7, "IKEV2: Too short frame to include HDR");
  return -1;
 }

 VAR_12->error_type = 0;
 VAR_14 = (const struct ikev2_hdr *) FUNC_10(VAR_13);
 VAR_18 = FUNC_11(VAR_13) + FUNC_12(VAR_13);
 VAR_16 = FUNC_0(VAR_14->message_id);
 VAR_15 = FUNC_0(VAR_14->length);

 FUNC_6(VAR_6, "IKEV2:   IKE_SA Initiator's SPI",
      VAR_14->i_spi, VAR_2);
 FUNC_6(VAR_6, "IKEV2:   IKE_SA Responder's SPI",
      VAR_14->r_spi, VAR_2);
 FUNC_7(VAR_6, "IKEV2:   Next Payload: %u  Version: 0x%x  "
     "Exchange Type: %u",
     VAR_14->next_payload, VAR_14->version, VAR_14->exchange_type);
 FUNC_7(VAR_6, "IKEV2:   Message ID: %u  Length: %u",
     VAR_16, VAR_15);

 if (VAR_14->version != VAR_3) {
  FUNC_7(VAR_7, "IKEV2: Unsupported HDR version 0x%x "
      "(expected 0x%x)", VAR_14->version, VAR_3);
  return -1;
 }

 if (VAR_15 != FUNC_12(VAR_13)) {
  FUNC_7(VAR_7, "IKEV2: Invalid length (HDR: %lu != "
      "RX: %lu)", (unsigned long) VAR_15,
      (unsigned long) FUNC_12(VAR_13));
  return -1;
 }

 if (FUNC_4(VAR_12, VAR_14->exchange_type, VAR_16) < 0)
  return -1;

 if ((VAR_14->flags & (VAR_0 | VAR_1)) !=
     VAR_0) {
  FUNC_7(VAR_7, "IKEV2: Unexpected Flags value 0x%x",
      VAR_14->flags);
  return -1;
 }

 if (VAR_12->state != VAR_11) {
  if (FUNC_5(VAR_12->i_spi, VAR_14->i_spi, VAR_2) != 0) {
   FUNC_7(VAR_7, "IKEV2: Unexpected IKE_SA "
       "Initiator's SPI");
   return -1;
  }
  if (FUNC_5(VAR_12->r_spi, VAR_14->r_spi, VAR_2) != 0) {
   FUNC_7(VAR_7, "IKEV2: Unexpected IKE_SA "
       "Responder's SPI");
   return -1;
  }
 }

 VAR_17 = (const u8 *) (VAR_14 + 1);
 if (FUNC_1(&VAR_19, VAR_14->next_payload, VAR_17, VAR_18) < 0)
  return -1;

 if (VAR_12->state == VAR_11) {
  VAR_12->last_msg = VAR_5;
  if (FUNC_3(VAR_12, VAR_14, &VAR_19) < 0) {
   if (VAR_12->state == VAR_9)
    return 0;
   return -1;
  }
  FUNC_9(VAR_12->i_sign_msg);
  VAR_12->i_sign_msg = FUNC_8(VAR_13);
 }

 if (VAR_12->state == VAR_10) {
  VAR_12->last_msg = VAR_4;
  if (FUNC_2(VAR_12, VAR_14, &VAR_19) < 0) {
   if (VAR_12->state == VAR_9)
    return 0;
   return -1;
  }
 }

 return 0;
}
