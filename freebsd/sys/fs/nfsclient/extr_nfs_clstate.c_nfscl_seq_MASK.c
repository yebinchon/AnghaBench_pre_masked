
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;



__attribute__((used)) static int
FUNC_0(uint32_t VAR_0, uint32_t VAR_1)
{

 if (VAR_1 > VAR_0 && (VAR_1 - VAR_0) >= 0x7fffffff)

  return (0);
 if (VAR_0 > VAR_1 && (VAR_0 - VAR_1) >= 0x7fffffff)

  return (1);
 if (VAR_0 <= VAR_1)
  return (1);
 return (0);
}
