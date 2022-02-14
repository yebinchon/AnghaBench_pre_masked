
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int BIO ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_10 (unsigned char*) ;
 int FUNC_11 (char const*,int const*,int const*) ;
 int FUNC_12 (int *,unsigned char**) ;
 int FUNC_13 (int *,unsigned char**) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (size_t) ;
 int FUNC_16 (int ,char*,unsigned char*,int) ;
 int FUNC_17 (int ,char*,unsigned char*,int) ;
 int FUNC_18 (int ,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_19(const char *VAR_1, EVP_PKEY *VAR_2)
{
 EC_KEY *VAR_3;
 BIO *VAR_4;
 size_t VAR_5;
 char *VAR_6;
 int VAR_7;
 unsigned char *VAR_8 = ((void*)0);
 int VAR_9;
 const EC_GROUP *VAR_10;
 const EC_POINT *VAR_11;

 VAR_4 = FUNC_2(FUNC_4());
 if (!VAR_4)
  return;

 FUNC_9(VAR_4, VAR_2, 0, ((void*)0));
 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_15(VAR_5 + 1);
 if (VAR_6) {
  VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_5);
  if (VAR_7 > 0) {
   VAR_6[VAR_7] = '\0';
   FUNC_18(VAR_0, "%s: %s", VAR_1, VAR_6);
  }
  FUNC_14(VAR_6);
 }
 FUNC_1(VAR_4);

 VAR_3 = FUNC_8(VAR_2);
 if (!VAR_3)
  return;

 VAR_10 = FUNC_6(VAR_3);
 VAR_11 = FUNC_7(VAR_3);
 if (VAR_10 && VAR_11)
  FUNC_11(VAR_1, VAR_10, VAR_11);

 VAR_9 = FUNC_12(VAR_3, &VAR_8);
 if (VAR_9 > 0)
  FUNC_17(VAR_0, "DPP: ECPrivateKey", VAR_8, VAR_9);
 FUNC_10(VAR_8);
 if (VAR_9 <= 0) {
  VAR_8 = ((void*)0);
  VAR_9 = FUNC_13(VAR_3, &VAR_8);
  if (VAR_9 > 0)
   FUNC_16(VAR_0, "DPP: EC_PUBKEY", VAR_8, VAR_9);
  FUNC_10(VAR_8);
 }

 FUNC_5(VAR_3);
}
