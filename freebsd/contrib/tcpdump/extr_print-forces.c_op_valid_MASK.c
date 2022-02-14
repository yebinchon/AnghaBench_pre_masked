
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static inline int FUNC_0(uint16_t VAR_0, uint16_t VAR_1)
{
 int VAR_2 = 1 << (VAR_0 - 1);

 if (VAR_0 == 0)
  return 0;
 if (VAR_2 & VAR_1)
  return 1;

 if (VAR_0 >= 0x8000)
  return 1;
 return 0;
}
