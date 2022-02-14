
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int n_bitlen; } ;
typedef TYPE_1__ br_rsa_private_key ;
typedef int br_hash_class ;


 int FUNC_0 (void*,TYPE_1__ const*) ;
 int FUNC_1 (int const*,void const*,size_t,void*,size_t*) ;

uint32_t
FUNC_2(const br_hash_class *VAR_0,
 const void *VAR_1, size_t VAR_2,
 const br_rsa_private_key *VAR_3, void *VAR_4, size_t *VAR_5)
{
 uint32_t VAR_6;

 if (*VAR_5 != ((VAR_3->n_bitlen + 7) >> 3)) {
  return 0;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_3);
 VAR_6 &= FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
 return VAR_6;
}
