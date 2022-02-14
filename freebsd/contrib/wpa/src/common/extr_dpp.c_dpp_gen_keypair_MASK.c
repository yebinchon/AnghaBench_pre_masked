
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_curve_params {int name; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (char*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (int ,char*,...) ;

__attribute__((used)) static EVP_PKEY * FUNC_13(const struct dpp_curve_params *VAR_6)
{
 EVP_PKEY_CTX *VAR_7 = ((void*)0);
 EC_KEY *VAR_8 = ((void*)0);
 EVP_PKEY *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 int VAR_11;

 FUNC_12(VAR_0, "DPP: Generating a keypair");

 VAR_11 = FUNC_10(VAR_6->name);
 if (VAR_11 == VAR_3) {
  FUNC_12(VAR_2, "DPP: Unsupported curve %s", VAR_6->name);
  return ((void*)0);
 }

 VAR_8 = FUNC_1(VAR_11);
 if (!VAR_8) {
  FUNC_12(VAR_1,
      "DPP: Failed to generate EC_KEY parameters");
  goto fail;
 }
 FUNC_2(VAR_8, VAR_4);
 VAR_9 = FUNC_8();
 if (!VAR_9 || FUNC_9(VAR_9, VAR_8) != 1) {
  FUNC_12(VAR_1,
      "DPP: Failed to generate EVP_PKEY parameters");
  goto fail;
 }

 VAR_7 = FUNC_4(VAR_9, ((void*)0));
 if (!VAR_7 ||
     FUNC_7(VAR_7) != 1 ||
     FUNC_6(VAR_7, &VAR_10) != 1) {
  FUNC_12(VAR_1, "DPP: Failed to generate EC key");
  VAR_10 = ((void*)0);
  goto fail;
 }

 if (VAR_5)
  FUNC_11("Own generated key", VAR_10);

fail:
 FUNC_0(VAR_8);
 FUNC_5(VAR_9);
 FUNC_3(VAR_7);
 return VAR_10;
}
