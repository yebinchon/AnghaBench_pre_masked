
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct ttls_avp {int avp_length; int avp_code; } ;
struct eap_ttls_avp {int* eap; size_t eap_len; int* user_name; size_t user_name_len; int* user_password; size_t user_password_len; int* chap_challenge; size_t chap_challenge_len; int* chap_password; size_t chap_password_len; int* mschap_challenge; size_t mschap_challenge_len; int* mschap_response; size_t mschap_response_len; int* mschap2_response; size_t mschap2_response_len; } ;
typedef int be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,size_t) ;
 int* FUNC_3 (int*,size_t) ;
 int FUNC_4 (struct eap_ttls_avp*,int ,int) ;
 int* FUNC_5 (int*,size_t) ;
 int FUNC_6 (int ,char*,int*,size_t) ;
 int FUNC_7 (int ,char*,int*,size_t) ;
 int FUNC_8 (int ,char*,int*,size_t) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct wpabuf*) ;
 int* FUNC_11 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_12(struct wpabuf *VAR_13, struct eap_ttls_avp *VAR_14)
{
 struct ttls_avp *VAR_15;
 u8 *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_11(VAR_13);
 VAR_17 = FUNC_10(VAR_13);
 FUNC_4(VAR_14, 0, sizeof(*VAR_14));

 while (VAR_17 > 0) {
  u32 VAR_18, VAR_19, VAR_20 = 0;
  u8 VAR_21, *VAR_22;
  size_t VAR_23, VAR_24;
  VAR_15 = (struct ttls_avp *) VAR_16;
  VAR_18 = FUNC_0(VAR_15->avp_code);
  VAR_19 = FUNC_0(VAR_15->avp_length);
  VAR_21 = (VAR_19 >> 24) & 0xff;
  VAR_19 &= 0xffffff;
  FUNC_9(VAR_2, "EAP-TTLS: AVP: code=%d flags=0x%02x "
      "length=%d", (int) VAR_18, VAR_21,
      (int) VAR_19);
  if ((int) VAR_19 > VAR_17) {
   FUNC_9(VAR_3, "EAP-TTLS: AVP overflow "
       "(len=%d, left=%d) - dropped",
       (int) VAR_19, VAR_17);
   goto fail;
  }
  if (VAR_19 < sizeof(*VAR_15)) {
   FUNC_9(VAR_3, "EAP-TTLS: Invalid AVP length "
       "%d", VAR_19);
   goto fail;
  }
  VAR_22 = (u8 *) (VAR_15 + 1);
  VAR_24 = VAR_19 - sizeof(*VAR_15);
  if (VAR_21 & VAR_1) {
   if (VAR_24 < 4) {
    FUNC_9(VAR_3, "EAP-TTLS: vendor AVP "
        "underflow");
    goto fail;
   }
   VAR_20 = FUNC_0(* (be32 *) VAR_22);
   FUNC_9(VAR_2, "EAP-TTLS: AVP vendor_id %d",
       (int) VAR_20);
   VAR_22 += 4;
   VAR_24 -= 4;
  }

  FUNC_6(VAR_2, "EAP-TTLS: AVP data", VAR_22, VAR_24);

  if (VAR_20 == 0 && VAR_18 == VAR_6) {
   FUNC_9(VAR_2, "EAP-TTLS: AVP - EAP Message");
   if (VAR_14->eap == ((void*)0)) {
    VAR_14->eap = FUNC_3(VAR_22, VAR_24);
    if (VAR_14->eap == ((void*)0)) {
     FUNC_9(VAR_3, "EAP-TTLS: "
         "failed to allocate memory "
         "for Phase 2 EAP data");
     goto fail;
    }
    VAR_14->eap_len = VAR_24;
   } else {
    u8 *VAR_25 = FUNC_5(VAR_14->eap,
       VAR_14->eap_len + VAR_24);
    if (VAR_25 == ((void*)0)) {
     FUNC_9(VAR_3, "EAP-TTLS: "
         "failed to allocate memory "
         "for Phase 2 EAP data");
     goto fail;
    }
    FUNC_2(VAR_25 + VAR_14->eap_len, VAR_22, VAR_24);
    VAR_14->eap = VAR_25;
    VAR_14->eap_len += VAR_24;
   }
  } else if (VAR_20 == 0 &&
      VAR_18 == VAR_10) {
   FUNC_7(VAR_2, "EAP-TTLS: User-Name",
       VAR_22, VAR_24);
   VAR_14->user_name = VAR_22;
   VAR_14->user_name_len = VAR_24;
  } else if (VAR_20 == 0 &&
      VAR_18 == VAR_11) {
   u8 *VAR_26 = VAR_22;
   size_t VAR_27 = VAR_24;
   while (VAR_27 > 0 &&
          VAR_26[VAR_27 - 1] == '\0') {
    VAR_27--;
   }
   FUNC_8(VAR_2, "EAP-TTLS: "
           "User-Password (PAP)",
           VAR_26, VAR_27);
   VAR_14->user_password = VAR_26;
   VAR_14->user_password_len = VAR_27;
  } else if (VAR_20 == 0 &&
      VAR_18 == VAR_4) {
   FUNC_6(VAR_2,
        "EAP-TTLS: CHAP-Challenge (CHAP)",
        VAR_22, VAR_24);
   VAR_14->chap_challenge = VAR_22;
   VAR_14->chap_challenge_len = VAR_24;
  } else if (VAR_20 == 0 &&
      VAR_18 == VAR_5) {
   FUNC_6(VAR_2,
        "EAP-TTLS: CHAP-Password (CHAP)",
        VAR_22, VAR_24);
   VAR_14->chap_password = VAR_22;
   VAR_14->chap_password_len = VAR_24;
  } else if (VAR_20 == VAR_12 &&
      VAR_18 == VAR_8) {
   FUNC_6(VAR_2,
        "EAP-TTLS: MS-CHAP-Challenge",
        VAR_22, VAR_24);
   VAR_14->mschap_challenge = VAR_22;
   VAR_14->mschap_challenge_len = VAR_24;
  } else if (VAR_20 == VAR_12 &&
      VAR_18 == VAR_9) {
   FUNC_6(VAR_2,
        "EAP-TTLS: MS-CHAP-Response (MSCHAP)",
        VAR_22, VAR_24);
   VAR_14->mschap_response = VAR_22;
   VAR_14->mschap_response_len = VAR_24;
  } else if (VAR_20 == VAR_12 &&
      VAR_18 == VAR_7) {
   FUNC_6(VAR_2,
        "EAP-TTLS: MS-CHAP2-Response (MSCHAPV2)",
        VAR_22, VAR_24);
   VAR_14->mschap2_response = VAR_22;
   VAR_14->mschap2_response_len = VAR_24;
  } else if (VAR_21 & VAR_0) {
   FUNC_9(VAR_3, "EAP-TTLS: Unsupported "
       "mandatory AVP code %d vendor_id %d - "
       "dropped", (int) VAR_18, (int) VAR_20);
   goto fail;
  } else {
   FUNC_9(VAR_2, "EAP-TTLS: Ignoring unsupported "
       "AVP code %d vendor_id %d",
       (int) VAR_18, (int) VAR_20);
  }

  VAR_23 = (4 - (VAR_19 & 3)) & 3;
  VAR_16 += VAR_19 + VAR_23;
  VAR_17 -= VAR_19 + VAR_23;
 }

 return 0;

fail:
 FUNC_1(VAR_14->eap);
 VAR_14->eap = ((void*)0);
 return -1;
}
