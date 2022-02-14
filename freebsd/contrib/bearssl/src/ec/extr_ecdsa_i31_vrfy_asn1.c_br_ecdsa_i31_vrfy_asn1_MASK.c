
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int br_ec_public_key ;
typedef int br_ec_impl ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (int const*,void const*,size_t,int const*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,void const*,size_t) ;

uint32_t
FUNC_3(const br_ec_impl *VAR_1,
 const void *VAR_2, size_t VAR_3,
 const br_ec_public_key *VAR_4,
 const void *VAR_5, size_t VAR_6)
{




 unsigned char VAR_7[(VAR_0 << 2) + 24];

 if (VAR_6 > ((sizeof VAR_7) >> 1)) {
  return 0;
 }
 FUNC_2(VAR_7, VAR_5, VAR_6);
 VAR_6 = FUNC_0(VAR_7, VAR_6);
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7, VAR_6);
}
