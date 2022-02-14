
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rsa_key {int * e; int * n; } ;


 void* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (struct crypto_rsa_key*) ;
 struct crypto_rsa_key* FUNC_3 (int) ;

struct crypto_rsa_key *
FUNC_4(const u8 *VAR_0, size_t VAR_1,
       const u8 *VAR_2, size_t VAR_3)
{
 struct crypto_rsa_key *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->n = FUNC_0();
 VAR_4->e = FUNC_0();
 if (VAR_4->n == ((void*)0) || VAR_4->e == ((void*)0) ||
     FUNC_1(VAR_4->n, VAR_0, VAR_1) < 0 ||
     FUNC_1(VAR_4->e, VAR_2, VAR_3) < 0) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
