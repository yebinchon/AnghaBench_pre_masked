
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int EVP_PKEY ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int const*,size_t,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int const*,int *) ;
 int FUNC_11 (int const*,int *,int *) ;
 int * FUNC_12 (int const*) ;
 int FUNC_13 (int const*,int *,int *,int *,int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int * FUNC_17 () ;
 int FUNC_18 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_19 (char*,int const*,int *) ;
 int FUNC_20 (int ,char*,...) ;

__attribute__((used)) static EVP_PKEY * FUNC_21(const EC_GROUP *VAR_2,
          const u8 *VAR_3, const u8 *VAR_4,
          size_t VAR_5)
{
 EC_KEY *VAR_6 = ((void*)0);
 BN_CTX *VAR_7;
 EC_POINT *VAR_8 = ((void*)0);
 BIGNUM *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 EVP_PKEY *VAR_11 = ((void*)0);

 VAR_7 = FUNC_1();
 if (!VAR_7) {
  FUNC_20(VAR_0, "DPP: Out of memory");
  return ((void*)0);
 }

 VAR_8 = FUNC_12(VAR_2);
 VAR_9 = FUNC_2(VAR_3, VAR_5, ((void*)0));
 VAR_10 = FUNC_2(VAR_4, VAR_5, ((void*)0));
 if (!VAR_8 || !VAR_9 || !VAR_10) {
  FUNC_20(VAR_0, "DPP: Out of memory");
  goto fail;
 }

 if (!FUNC_13(VAR_2, VAR_8, VAR_9, VAR_10, VAR_7)) {
  FUNC_20(VAR_0,
      "DPP: OpenSSL: EC_POINT_set_affine_coordinates_GFp failed: %s",
      FUNC_14(FUNC_15(), ((void*)0)));
  goto fail;
 }

 if (!FUNC_11(VAR_2, VAR_8, VAR_7) ||
     FUNC_10(VAR_2, VAR_8)) {
  FUNC_20(VAR_0, "DPP: Invalid point");
  goto fail;
 }
 FUNC_19("DPP: dpp_set_pubkey_point_group", VAR_2, VAR_8);

 VAR_6 = FUNC_5();
 if (!VAR_6 ||
     FUNC_7(VAR_6, VAR_2) != 1 ||
     FUNC_8(VAR_6, VAR_8) != 1) {
  FUNC_20(VAR_0,
      "DPP: Failed to set EC_KEY: %s",
      FUNC_14(FUNC_15(), ((void*)0)));
  goto fail;
 }
 FUNC_6(VAR_6, VAR_1);

 VAR_11 = FUNC_17();
 if (!VAR_11 || FUNC_18(VAR_11, VAR_6) != 1) {
  FUNC_20(VAR_0, "DPP: Could not create EVP_PKEY");
  goto fail;
 }

out:
 FUNC_3(VAR_9);
 FUNC_3(VAR_10);
 FUNC_4(VAR_6);
 FUNC_9(VAR_8);
 FUNC_0(VAR_7);
 return VAR_11;
fail:
 FUNC_16(VAR_11);
 VAR_11 = ((void*)0);
 goto out;
}
