
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,unsigned char const*,unsigned int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;

int
FUNC_5(const unsigned char* VAR_0, unsigned int VAR_1, unsigned char* VAR_2,
 const EVP_MD* VAR_3)
{
 EVP_MD_CTX* VAR_4;
 VAR_4 = FUNC_3();
 if(!VAR_4)
  return 0;
 if(!FUNC_1(VAR_4, VAR_3, ((void*)0)) ||
  !FUNC_2(VAR_4, VAR_0, VAR_1) ||
  !FUNC_0(VAR_4, VAR_2, ((void*)0))) {
  FUNC_4(VAR_4);
  return 0;
 }
 FUNC_4(VAR_4);
 return 1;
}
