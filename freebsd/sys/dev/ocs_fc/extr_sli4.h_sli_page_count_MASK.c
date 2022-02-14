
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(size_t VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = VAR_1 - 1;
 uint32_t VAR_3 = 0;

 switch (VAR_1) {
 case 4096:
  VAR_3 = 12;
  break;
 case 8192:
  VAR_3 = 13;
  break;
 case 16384:
  VAR_3 = 14;
  break;
 case 32768:
  VAR_3 = 15;
  break;
 case 65536:
  VAR_3 = 16;
  break;
 default:
  return 0;
 }

 return (VAR_0 + VAR_2) >> VAR_3;
}
