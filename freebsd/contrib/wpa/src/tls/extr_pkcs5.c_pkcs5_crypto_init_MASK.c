
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkcs5_params {scalar_t__ alg; size_t salt_len; unsigned int iter_count; int * salt; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct crypto_cipher* FUNC_0 (int ,int *,int *,int) ;
 scalar_t__ FUNC_1 (int,int const**,size_t*,int *) ;
 size_t FUNC_2 (char const*) ;
 struct crypto_cipher* FUNC_3 (struct pkcs5_params*,char const*) ;
 struct crypto_cipher* FUNC_4 (struct pkcs5_params*,char const*) ;
 int FUNC_5 (int ,char*,int *,int) ;

__attribute__((used)) static struct crypto_cipher * FUNC_6(struct pkcs5_params *VAR_6,
      const char *VAR_7)
{
 unsigned int VAR_8;
 u8 VAR_9[VAR_1];
 const u8 *VAR_10[2];
 size_t VAR_11[2];

 if (VAR_6->alg == VAR_4)
  return FUNC_4(VAR_6, VAR_7);

 if (VAR_6->alg == VAR_5)
  return FUNC_3(VAR_6, VAR_7);

 if (VAR_6->alg != VAR_3)
  return ((void*)0);

 VAR_10[0] = (const u8 *) VAR_7;
 VAR_11[0] = FUNC_2(VAR_7);
 VAR_10[1] = VAR_6->salt;
 VAR_11[1] = VAR_6->salt_len;
 if (FUNC_1(2, VAR_10, VAR_11, VAR_9) < 0)
  return ((void*)0);
 VAR_10[0] = VAR_9;
 VAR_11[0] = VAR_1;
 for (VAR_8 = 1; VAR_8 < VAR_6->iter_count; VAR_8++) {
  if (FUNC_1(1, VAR_10, VAR_11, VAR_9) < 0)
   return ((void*)0);
 }

 FUNC_5(VAR_2, "PKCS #5: DES key", VAR_9, 8);
 FUNC_5(VAR_2, "PKCS #5: DES IV", VAR_9 + 8, 8);

 return FUNC_0(VAR_0, VAR_9 + 8, VAR_9, 8);
}
