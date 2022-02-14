
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int*,unsigned char const*,size_t,int const*,int,int*,size_t) ;

uint32_t
FUNC_1(uint32_t *VAR_0, const unsigned char *VAR_1, size_t VAR_2,
 const uint32_t *VAR_3, uint32_t VAR_4, uint64_t *VAR_5, size_t VAR_6)
{
 size_t VAR_7;

 VAR_7 = (VAR_3[0] + 63) >> 5;
 if (VAR_6 < VAR_7) {
  return 0;
 }
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
  (uint32_t *)VAR_5, VAR_6 << 1);
}
