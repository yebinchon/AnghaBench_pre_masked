
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_rsa_public_key ;
typedef int br_prng_class ;
typedef int br_hash_class ;


 scalar_t__ FUNC_0 (void*,size_t,int const*) ;
 size_t FUNC_1 (int const**,int const*,void const*,size_t,int const*,void*,size_t,void const*,size_t) ;

size_t
FUNC_2(
 const br_prng_class **VAR_0, const br_hash_class *VAR_1,
 const void *VAR_2, size_t VAR_3,
 const br_rsa_public_key *VAR_4,
 void *VAR_5, size_t VAR_6,
 const void *VAR_7, size_t VAR_8)
{
 size_t VAR_9;

 VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
  VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9 == 0) {
  return 0;
 }
 return VAR_9 & -(size_t)FUNC_0(VAR_5, VAR_9, VAR_4);
}
