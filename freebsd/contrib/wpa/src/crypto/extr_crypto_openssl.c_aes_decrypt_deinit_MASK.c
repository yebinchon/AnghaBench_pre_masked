
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5(void *VAR_1)
{
 EVP_CIPHER_CTX *VAR_2 = VAR_1;
 u8 VAR_3[16];
 int VAR_4 = sizeof(VAR_3);
 if (FUNC_3(VAR_2, VAR_3, &VAR_4) != 1) {
  FUNC_4(VAR_0, "OpenSSL: EVP_DecryptFinal_ex failed: "
      "%s", FUNC_0(FUNC_1(), ((void*)0)));
 }
 if (VAR_4 != 0) {
  FUNC_4(VAR_0, "OpenSSL: Unexpected padding length %d "
      "in AES decrypt", VAR_4);
 }
 FUNC_2(VAR_2);
}
