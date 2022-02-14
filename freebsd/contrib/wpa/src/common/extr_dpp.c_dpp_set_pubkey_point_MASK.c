
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (int const*,int const*,int const*,size_t) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static EVP_PKEY * FUNC_5(EVP_PKEY *VAR_1,
           const u8 *VAR_2, size_t VAR_3)
{
 EC_KEY *VAR_4;
 const EC_GROUP *VAR_5;
 EVP_PKEY *VAR_6 = ((void*)0);

 if (VAR_3 & 1)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4) {
  FUNC_4(VAR_0,
      "DPP: Could not get EC_KEY from group_key");
  return ((void*)0);
 }

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_2 + VAR_3 / 2,
        VAR_3 / 2);
 else
  FUNC_4(VAR_0, "DPP: Could not get EC group");

 FUNC_0(VAR_4);
 return VAR_6;
}
