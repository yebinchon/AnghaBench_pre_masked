
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int n_bitlen; } ;
typedef TYPE_1__ br_rsa_private_key ;


 int FUNC_0 (unsigned char*,TYPE_1__ const*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t,int ,unsigned char*) ;

uint32_t
FUNC_2(const unsigned char *VAR_0,
 const unsigned char *VAR_1, size_t VAR_2,
 const br_rsa_private_key *VAR_3, unsigned char *VAR_4)
{
 if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->n_bitlen, VAR_4)) {
  return 0;
 }
 return FUNC_0(VAR_4, VAR_3);
}
