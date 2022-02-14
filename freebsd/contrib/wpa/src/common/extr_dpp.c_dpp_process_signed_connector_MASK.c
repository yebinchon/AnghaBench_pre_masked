
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dpp_signed_connector_info {unsigned char* payload; size_t payload_len; } ;
struct dpp_curve_params {int jwk_crv; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int ECDSA_SIG ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,size_t,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,unsigned char*,int) ;
 int FUNC_12 (int *,int *,int const*,int *,int *) ;
 int FUNC_13 (int *,char const*,int) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int VAR_3 ;
 int FUNC_17 (unsigned char*) ;
 scalar_t__ VAR_4 ;
 void* FUNC_18 (unsigned char const*,int,size_t*) ;
 scalar_t__ FUNC_19 (int *,struct wpabuf*) ;
 struct dpp_curve_params* FUNC_20 (int) ;
 struct wpabuf* FUNC_21 (struct dpp_curve_params const*,unsigned char*,size_t,int const**) ;
 int FUNC_22 (int *,unsigned char**) ;
 int FUNC_23 (unsigned char*) ;
 int FUNC_24 (struct dpp_signed_connector_info*,int ,int) ;
 char* FUNC_25 (char const*,char) ;
 int FUNC_26 (char const*) ;
 int FUNC_27 (int ,char*,unsigned char*,int) ;
 int FUNC_28 (int ,char*,unsigned char*,size_t) ;
 int FUNC_29 (int ,char*,...) ;
 int FUNC_30 (struct wpabuf*) ;
 scalar_t__ FUNC_31 (struct wpabuf*) ;

__attribute__((used)) static enum dpp_status_error
FUNC_32(struct dpp_signed_connector_info *VAR_5,
        EVP_PKEY *VAR_6, const char *VAR_7)
{
 enum dpp_status_error VAR_8 = 255;
 const char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 struct wpabuf *VAR_13 = ((void*)0);
 unsigned char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 size_t VAR_16 = 0, VAR_17 = 0;
 const EVP_MD *VAR_18 = ((void*)0);
 unsigned char *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21;
 EVP_MD_CTX *VAR_22 = ((void*)0);
 ECDSA_SIG *VAR_23 = ((void*)0);
 BIGNUM *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);
 const struct dpp_curve_params *VAR_26;
 EC_KEY *VAR_27;
 const EC_GROUP *VAR_28;
 int VAR_29;

 VAR_27 = FUNC_16(VAR_6);
 if (!VAR_27)
  goto fail;
 VAR_28 = FUNC_7(VAR_27);
 if (!VAR_28)
  goto fail;
 VAR_29 = FUNC_5(VAR_28);
 VAR_26 = FUNC_20(VAR_29);
 if (!VAR_26)
  goto fail;
 FUNC_29(VAR_3, "DPP: C-sign-key group: %s", VAR_26->jwk_crv);
 FUNC_24(VAR_5, 0, sizeof(*VAR_5));

 VAR_11 = VAR_9 = VAR_7;
 VAR_10 = FUNC_25(VAR_9, '.');
 if (!VAR_10) {
  FUNC_29(VAR_3, "DPP: Missing dot(1) in signedConnector");
  VAR_8 = VAR_0;
  goto fail;
 }
 VAR_14 = FUNC_18((const unsigned char *) VAR_9,
         VAR_10 - VAR_9, &VAR_16);
 if (!VAR_14) {
  FUNC_29(VAR_3,
      "DPP: Failed to base64url decode signedConnector JWS Protected Header");
  VAR_8 = VAR_0;
  goto fail;
 }
 FUNC_28(VAR_3,
     "DPP: signedConnector - JWS Protected Header",
     VAR_14, VAR_16);
 VAR_13 = FUNC_21(VAR_26, VAR_14, VAR_16, &VAR_18);
 if (!VAR_13) {
  VAR_8 = VAR_0;
  goto fail;
 }
 if (FUNC_31(VAR_13) != VAR_4) {
  FUNC_29(VAR_3,
      "DPP: Unexpected signedConnector JWS Protected Header kid length: %u (expected %u)",
      (unsigned int) FUNC_31(VAR_13), VAR_4);
  VAR_8 = VAR_0;
  goto fail;
 }

 VAR_9 = VAR_10 + 1;
 VAR_10 = FUNC_25(VAR_9, '.');
 if (!VAR_10) {
  FUNC_29(VAR_3,
      "DPP: Missing dot(2) in signedConnector");
  VAR_8 = VAR_0;
  goto fail;
 }
 VAR_12 = VAR_10 - 1;
 VAR_5->payload = FUNC_18((const unsigned char *) VAR_9,
       VAR_10 - VAR_9, &VAR_5->payload_len);
 if (!VAR_5->payload) {
  FUNC_29(VAR_3,
      "DPP: Failed to base64url decode signedConnector JWS Payload");
  VAR_8 = VAR_0;
  goto fail;
 }
 FUNC_28(VAR_3,
     "DPP: signedConnector - JWS Payload",
     VAR_5->payload, VAR_5->payload_len);
 VAR_9 = VAR_10 + 1;
 VAR_15 = FUNC_18((const unsigned char *) VAR_9,
          FUNC_26(VAR_9), &VAR_17);
 if (!VAR_15) {
  FUNC_29(VAR_3,
      "DPP: Failed to base64url decode signedConnector signature");
  VAR_8 = VAR_0;
  goto fail;
  }
 FUNC_27(VAR_3, "DPP: signedConnector - signature",
      VAR_15, VAR_17);

 if (FUNC_19(VAR_6, VAR_13) < 0) {
  VAR_8 = VAR_1;
  goto fail;
 }

 if (VAR_17 & 0x01) {
  FUNC_29(VAR_3,
      "DPP: Unexpected signedConnector signature length (%d)",
      (int) VAR_17);
  VAR_8 = VAR_0;
  goto fail;
 }



 VAR_24 = FUNC_0(VAR_15, VAR_17 / 2, ((void*)0));
 VAR_25 = FUNC_0(VAR_15 + VAR_17 / 2, VAR_17 / 2, ((void*)0));
 VAR_23 = FUNC_3();
 if (!VAR_24 || !VAR_25 || !VAR_23 || FUNC_4(VAR_23, VAR_24, VAR_25) != 1)
  goto fail;
 VAR_24 = ((void*)0);
 VAR_25 = ((void*)0);

 VAR_20 = FUNC_22(VAR_23, &VAR_19);
 if (VAR_20 <= 0) {
  FUNC_29(VAR_3, "DPP: Could not DER encode signature");
  goto fail;
 }
 FUNC_27(VAR_3, "DPP: DER encoded signature", VAR_19, VAR_20);
 VAR_22 = FUNC_14();
 if (!VAR_22)
  goto fail;

 FUNC_8();
 if (FUNC_12(VAR_22, ((void*)0), VAR_18, ((void*)0), VAR_6) != 1) {
  FUNC_29(VAR_3, "DPP: EVP_DigestVerifyInit failed: %s",
      FUNC_9(FUNC_10(), ((void*)0)));
  goto fail;
 }
 if (FUNC_13(VAR_22, VAR_11,
       VAR_12 - VAR_11 + 1) != 1) {
  FUNC_29(VAR_3, "DPP: EVP_DigestVerifyUpdate failed: %s",
      FUNC_9(FUNC_10(), ((void*)0)));
  goto fail;
 }
 VAR_21 = FUNC_11(VAR_22, VAR_19, VAR_20);
 if (VAR_21 != 1) {
  FUNC_29(VAR_3,
      "DPP: EVP_DigestVerifyFinal failed (res=%d): %s",
      VAR_21, FUNC_9(FUNC_10(), ((void*)0)));
  VAR_8 = VAR_0;
  goto fail;
 }

 VAR_8 = VAR_2;
fail:
 FUNC_6(VAR_27);
 FUNC_15(VAR_22);
 FUNC_23(VAR_14);
 FUNC_30(VAR_13);
 FUNC_23(VAR_15);
 FUNC_2(VAR_23);
 FUNC_1(VAR_24);
 FUNC_1(VAR_25);
 FUNC_17(VAR_19);
 return VAR_8;
}
