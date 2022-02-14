
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int n_bitlen; } ;
typedef TYPE_1__ br_rsa_private_key ;
typedef int br_prng_class ;
typedef int br_hash_class ;


 int FUNC_0 (unsigned char*,TYPE_1__ const*) ;
 int FUNC_1 (int const**,int const*,int const*,unsigned char const*,size_t,int ,unsigned char*) ;

uint32_t
FUNC_2(const br_prng_class **VAR_0,
 const br_hash_class *VAR_1, const br_hash_class *VAR_2,
 const unsigned char *VAR_3, size_t VAR_4,
 const br_rsa_private_key *VAR_5, unsigned char *VAR_6)
{
 if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
  VAR_4, VAR_5->n_bitlen, VAR_6))
 {
  return 0;
 }
 return FUNC_0(VAR_6, VAR_5);
}
