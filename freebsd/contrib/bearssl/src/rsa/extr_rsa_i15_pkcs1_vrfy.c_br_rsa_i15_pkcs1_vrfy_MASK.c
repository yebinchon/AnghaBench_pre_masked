
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int br_rsa_public_key ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,size_t,int const*) ;
 int FUNC_1 (unsigned char*,size_t,unsigned char const*,size_t,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;

uint32_t
FUNC_3(const unsigned char *VAR_1, size_t VAR_2,
 const unsigned char *VAR_3, size_t VAR_4,
 const br_rsa_public_key *VAR_5, unsigned char *VAR_6)
{
 unsigned char VAR_7[VAR_0 >> 3];

 if (VAR_2 > (sizeof VAR_7)) {
  return 0;
 }
 FUNC_2(VAR_7, VAR_1, VAR_2);
 if (!FUNC_0(VAR_7, VAR_2, VAR_5)) {
  return 0;
 }
 return FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4, VAR_6);
}
