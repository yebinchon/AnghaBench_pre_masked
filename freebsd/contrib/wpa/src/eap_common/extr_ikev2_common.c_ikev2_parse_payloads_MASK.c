
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct ikev2_payloads {long const* sa; unsigned int sa_len; long const* ke; unsigned int ke_len; long const* idi; unsigned int idi_len; long const* idr; unsigned int idr_len; long const* cert; unsigned int cert_len; long const* auth; unsigned int auth_len; long const* nonce; unsigned int nonce_len; long const* encrypted; unsigned int encrypted_len; long const* notification; unsigned int notification_len; long encr_next_payload; } ;
struct ikev2_payload_hdr {long next_payload; int flags; int payload_length; } ;





 int VAR_0 ;





 long VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct ikev2_payloads*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(struct ikev2_payloads *VAR_4,
    u8 VAR_5, const u8 *VAR_6, const u8 *VAR_7)
{
 const struct ikev2_payload_hdr *VAR_8;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 while (VAR_5 != VAR_1) {
  unsigned int VAR_9, VAR_10, VAR_11;
  const u8 *VAR_12;
  FUNC_2(VAR_2, "IKEV2: Processing payload %u",
      VAR_5);
  if (VAR_7 < VAR_6)
   return -1;
  VAR_11 = VAR_7 - VAR_6;
  if (VAR_11 < sizeof(*VAR_8)) {
   FUNC_2(VAR_3, "IKEV2:   Too short message for "
       "payload header (left=%ld)",
       (long) (VAR_7 - VAR_6));
   return -1;
  }
  VAR_8 = (const struct ikev2_payload_hdr *) VAR_6;
  VAR_9 = FUNC_0(VAR_8->payload_length);
  if (VAR_9 < sizeof(*VAR_8) || VAR_9 > VAR_11) {
   FUNC_2(VAR_3, "IKEV2:   Invalid payload header "
       "length %d", VAR_9);
   return -1;
  }

  FUNC_2(VAR_2, "IKEV2:   Next Payload: %u  Flags: 0x%x"
      "  Payload Length: %u",
      VAR_8->next_payload, VAR_8->flags, VAR_9);

  VAR_12 = (const u8 *) (VAR_8 + 1);
  VAR_10 = VAR_9 - sizeof(*VAR_8);

  switch (VAR_5) {
  case 128:
   FUNC_2(VAR_2, "IKEV2:   Payload: Security "
       "Association");
   VAR_4->sa = VAR_12;
   VAR_4->sa_len = VAR_10;
   break;
  case 131:
   FUNC_2(VAR_2, "IKEV2:   Payload: Key "
       "Exchange");
   VAR_4->ke = VAR_12;
   VAR_4->ke_len = VAR_10;
   break;
  case 133:
   FUNC_2(VAR_2, "IKEV2:   Payload: IDi");
   VAR_4->idi = VAR_12;
   VAR_4->idi_len = VAR_10;
   break;
  case 132:
   FUNC_2(VAR_2, "IKEV2:   Payload: IDr");
   VAR_4->idr = VAR_12;
   VAR_4->idr_len = VAR_10;
   break;
  case 135:
   FUNC_2(VAR_2, "IKEV2:   Payload: Certificate");
   VAR_4->cert = VAR_12;
   VAR_4->cert_len = VAR_10;
   break;
  case 136:
   FUNC_2(VAR_2, "IKEV2:   Payload: "
       "Authentication");
   VAR_4->auth = VAR_12;
   VAR_4->auth_len = VAR_10;
   break;
  case 130:
   FUNC_2(VAR_2, "IKEV2:   Payload: Nonce");
   VAR_4->nonce = VAR_12;
   VAR_4->nonce_len = VAR_10;
   break;
  case 134:
   FUNC_2(VAR_2, "IKEV2:   Payload: Encrypted");
   VAR_4->encrypted = VAR_12;
   VAR_4->encrypted_len = VAR_10;
   break;
  case 129:
   FUNC_2(VAR_2, "IKEV2:   Payload: "
       "Notification");
   VAR_4->notification = VAR_12;
   VAR_4->notification_len = VAR_10;
   break;
  default:
   if (VAR_8->flags & VAR_0) {
    FUNC_2(VAR_3, "IKEV2:   Unsupported "
        "critical payload %u - reject the "
        "entire message", VAR_5);
    return -1;
   } else {
    FUNC_2(VAR_2, "IKEV2:   Skipped "
        "unsupported payload %u",
        VAR_5);
   }
  }

  if (VAR_5 == 134 &&
      VAR_6 + VAR_9 == VAR_7) {





   VAR_4->encr_next_payload = VAR_8->next_payload;
   VAR_5 = VAR_1;
  } else
   VAR_5 = VAR_8->next_payload;

  VAR_6 += VAR_9;
 }

 if (VAR_6 != VAR_7) {
  FUNC_2(VAR_3, "IKEV2: Unexpected extra data after "
      "payloads");
  return -1;
 }

 return 0;
}
