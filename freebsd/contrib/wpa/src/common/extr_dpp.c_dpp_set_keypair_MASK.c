
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dpp_curve_params {int dummy; } ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int VAR_0 ;
 int * FUNC_8 (int *,int const**,size_t) ;
 struct dpp_curve_params* FUNC_9 (int) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static EVP_PKEY * FUNC_11(const struct dpp_curve_params **VAR_1,
      const u8 *VAR_2, size_t VAR_3)
{
 EVP_PKEY *VAR_4;
 EC_KEY *VAR_5;
 const EC_GROUP *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_7();
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = FUNC_8(((void*)0), &VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_10(VAR_0,
      "DPP: OpenSSL: d2i_ECPrivateKey() failed: %s",
      FUNC_3(FUNC_4(), ((void*)0)));
  FUNC_6(VAR_4);
  return ((void*)0);
 }
 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6) {
  FUNC_1(VAR_5);
  FUNC_6(VAR_4);
  return ((void*)0);
 }
 VAR_7 = FUNC_0(VAR_6);
 *VAR_1 = FUNC_9(VAR_7);
 if (!*VAR_1) {
  FUNC_10(VAR_0,
      "DPP: Unsupported curve (nid=%d) in pre-assigned key",
      VAR_7);
  FUNC_1(VAR_5);
  FUNC_6(VAR_4);
  return ((void*)0);
 }

 if (FUNC_5(VAR_4, VAR_5) != 1) {
  FUNC_1(VAR_5);
  FUNC_6(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
