
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (void const*,size_t,int) ;

__attribute__((used)) static uint32_t
FUNC_1(const void *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
 const unsigned char *VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_3 = VAR_0;
 VAR_3 += VAR_1 & ~3;
 VAR_5 = 0;
 switch (VAR_1 & 3) {
 case 3:
  VAR_5 |= ((uint32_t)(*VAR_3++)) << 16;

 case 2:
  VAR_5 |= ((uint32_t)(*VAR_3++)) << 8;

 case 1:
  VAR_5 |= *VAR_3;

 default:
  break;
 }
 VAR_4 ^= VAR_5;

 return (VAR_4);
}
