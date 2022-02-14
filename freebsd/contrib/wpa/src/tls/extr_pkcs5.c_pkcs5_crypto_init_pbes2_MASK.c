
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkcs5_params {scalar_t__ enc_alg; int iv_len; int salt_len; int iv; int iter_count; int salt; } ;
struct crypto_cipher {int dummy; } ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct crypto_cipher* FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int ,int,int ,int *,int) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*,char const*,int ) ;
 int FUNC_5 (int ,char*,int *,int) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static struct crypto_cipher *
FUNC_7(struct pkcs5_params *VAR_3, const char *VAR_4)
{
 u8 VAR_5[24];

 if (VAR_3->enc_alg != VAR_2 ||
     VAR_3->iv_len != 8)
  return ((void*)0);

 FUNC_4(VAR_1, "PKCS #5: PBES2 password for PBKDF2",
         VAR_4, FUNC_1(VAR_4));
 FUNC_3(VAR_1, "PKCS #5: PBES2 salt for PBKDF2",
      VAR_3->salt, VAR_3->salt_len);
 FUNC_6(VAR_1, "PKCS #5: PBES2 PBKDF2 iterations: %u",
     VAR_3->iter_count);
 if (FUNC_2(VAR_4, VAR_3->salt, VAR_3->salt_len,
   VAR_3->iter_count, VAR_5, sizeof(VAR_5)) < 0)
  return ((void*)0);
 FUNC_5(VAR_1, "PKCS #5: DES EDE3 key", VAR_5, sizeof(VAR_5));
 FUNC_3(VAR_1, "PKCS #5: DES IV", VAR_3->iv, VAR_3->iv_len);

 return FUNC_0(VAR_0, VAR_3->iv,
      VAR_5, sizeof(VAR_5));
}
