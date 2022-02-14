
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int br_rsa_public_key ;
typedef int br_hash_class ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,size_t,int const*) ;
 int FUNC_1 (int const*,int const*,void const*,size_t,int const*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;

uint32_t
FUNC_3(const unsigned char *VAR_1, size_t VAR_2,
 const br_hash_class *VAR_3, const br_hash_class *VAR_4,
 const void *VAR_5, size_t VAR_6, const br_rsa_public_key *VAR_7)
{
 unsigned char VAR_8[VAR_0 >> 3];

 if (VAR_2 > (sizeof VAR_8)) {
  return 0;
 }
 FUNC_2(VAR_8, VAR_1, VAR_2);
 if (!FUNC_0(VAR_8, VAR_2, VAR_7)) {
  return 0;
 }
 return FUNC_1(VAR_3, VAR_4,
  VAR_5, VAR_6, VAR_7, VAR_8);
}
