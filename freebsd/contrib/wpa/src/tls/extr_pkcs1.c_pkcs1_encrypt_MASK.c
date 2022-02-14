
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rsa_key {int dummy; } ;


 int FUNC_0 (int *,size_t,int *,size_t*,struct crypto_rsa_key*,int) ;
 size_t FUNC_1 (struct crypto_rsa_key*) ;
 scalar_t__ FUNC_2 (int,size_t,int const*,size_t,int *,size_t*) ;

int FUNC_3(int VAR_0, struct crypto_rsa_key *VAR_1,
    int VAR_2, const u8 *VAR_3, size_t VAR_4,
    u8 *VAR_5, size_t *VAR_6)
{
 size_t VAR_7;

 VAR_7 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_0, VAR_7, VAR_3, VAR_4,
         VAR_5, VAR_6) < 0)
  return -1;

 return FUNC_0(VAR_5, VAR_7, VAR_5, VAR_6, VAR_1, VAR_2);
}
