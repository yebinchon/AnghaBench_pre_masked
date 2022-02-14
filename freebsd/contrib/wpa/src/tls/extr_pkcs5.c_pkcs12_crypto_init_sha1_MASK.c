
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkcs5_params {scalar_t__ alg; int iter_count; int salt_len; int salt; } ;
struct crypto_cipher {int dummy; } ;
typedef int key ;
typedef int iv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char const) ;
 struct crypto_cipher* FUNC_1 (int ,int *,int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int *,size_t,int ,int ,int ,int ,int,int *) ;
 int FUNC_6 (int ,char*,int *,int) ;

__attribute__((used)) static struct crypto_cipher *
FUNC_7(struct pkcs5_params *VAR_5, const char *VAR_6)
{
 unsigned int VAR_7;
 u8 *VAR_8;
 size_t VAR_9;
 u8 VAR_10[24];
 u8 VAR_11[8];

 if (VAR_5->alg != VAR_4)
  return ((void*)0);

 VAR_9 = VAR_6 ? FUNC_4(VAR_6) : 0;
 VAR_8 = FUNC_3(2 * (VAR_9 + 1));
 if (!VAR_8)
  return ((void*)0);
 if (VAR_9) {
  for (VAR_7 = 0; VAR_7 <= VAR_9; VAR_7++)
   FUNC_0(&VAR_8[2 * VAR_7], VAR_6[VAR_7]);
  VAR_9 = 2 * (VAR_9 + 1);
 }

 if (FUNC_5(VAR_8, VAR_9, VAR_5->salt, VAR_5->salt_len,
      VAR_2, VAR_5->iter_count,
      sizeof(VAR_10), VAR_10) < 0 ||
     FUNC_5(VAR_8, VAR_9, VAR_5->salt, VAR_5->salt_len,
      VAR_3, VAR_5->iter_count,
      sizeof(VAR_11), VAR_11) < 0) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }

 FUNC_2(VAR_8);

 FUNC_6(VAR_1, "PKCS #12: DES key", VAR_10, sizeof(VAR_10));
 FUNC_6(VAR_1, "PKCS #12: DES IV", VAR_11, sizeof(VAR_11));

 return FUNC_1(VAR_0, VAR_11, VAR_10, sizeof(VAR_10));
}
