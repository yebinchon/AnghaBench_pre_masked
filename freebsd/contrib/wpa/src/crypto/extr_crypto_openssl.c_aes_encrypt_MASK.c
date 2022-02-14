
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int*,int const*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int ) ;

int FUNC_4(void *VAR_1, const u8 *VAR_2, u8 *VAR_3)
{
 EVP_CIPHER_CTX *VAR_4 = VAR_1;
 int VAR_5 = 16;
 if (FUNC_2(VAR_4, VAR_3, &VAR_5, VAR_2, 16) != 1) {
  FUNC_3(VAR_0, "OpenSSL: EVP_EncryptUpdate failed: %s",
      FUNC_0(FUNC_1(), ((void*)0)));
  return -1;
 }
 return 0;
}
