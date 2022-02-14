
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int*) ;
 int FUNC_4 (int *,int ,int *,int const*,int const*) ;
 int FUNC_5 (int *,int *,int*,int *,size_t) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

int FUNC_8(const u8 *VAR_0, const u8 *VAR_1, u8 *VAR_2, size_t VAR_3)
{
 EVP_CIPHER_CTX *VAR_4;
 int VAR_5, VAR_6;
 u8 VAR_7[16];
 int VAR_8 = -1;

 if (FUNC_7())
  return -1;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return -1;
 VAR_5 = VAR_3;
 VAR_6 = sizeof(VAR_7);
 if (FUNC_4(VAR_4, FUNC_6(), ((void*)0), VAR_0, VAR_1) == 1 &&
     FUNC_2(VAR_4, 0) == 1 &&
     FUNC_5(VAR_4, VAR_2, &VAR_5, VAR_2, VAR_3) == 1 &&
     VAR_5 == (int) VAR_3 &&
     FUNC_3(VAR_4, VAR_7, &VAR_6) == 1 && VAR_6 == 0)
  VAR_8 = 0;
 FUNC_0(VAR_4);

 return VAR_8;

}
