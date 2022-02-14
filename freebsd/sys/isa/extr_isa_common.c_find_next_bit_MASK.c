
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int
FUNC_0(uint32_t VAR_0, int VAR_1)
{
 VAR_1++;
 while (VAR_1 < 32 && !(VAR_0 & (1 << VAR_1)))
  VAR_1++;
 if (VAR_1 != 32)
  return (VAR_1);
 return (-1);
}
