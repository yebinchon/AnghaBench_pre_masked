
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,unsigned int*) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,int const*,size_t const) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int VAR_0 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(const EVP_MD *VAR_1, size_t VAR_2,
     const u8 *VAR_3[], const size_t *VAR_4, u8 *VAR_5)
{
 EVP_MD_CTX *VAR_6;
 size_t VAR_7;
 unsigned int VAR_8;

 if (FUNC_7())
  return -1;

 VAR_6 = FUNC_6();
 if (!VAR_6)
  return -1;
 if (!FUNC_3(VAR_6, VAR_1, ((void*)0))) {
  FUNC_8(VAR_0, "OpenSSL: EVP_DigestInit_ex failed: %s",
      FUNC_0(FUNC_1(), ((void*)0)));
  FUNC_5(VAR_6);
  return -1;
 }
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (!FUNC_4(VAR_6, VAR_3[VAR_7], VAR_4[VAR_7])) {
   FUNC_8(VAR_0, "OpenSSL: EVP_DigestUpdate "
       "failed: %s",
       FUNC_0(FUNC_1(), ((void*)0)));
   FUNC_5(VAR_6);
   return -1;
  }
 }
 if (!FUNC_2(VAR_6, VAR_5, &VAR_8)) {
  FUNC_8(VAR_0, "OpenSSL: EVP_DigestFinal failed: %s",
      FUNC_0(FUNC_1(), ((void*)0)));
  FUNC_5(VAR_6);
  return -1;
 }
 FUNC_5(VAR_6);

 return 0;
}
