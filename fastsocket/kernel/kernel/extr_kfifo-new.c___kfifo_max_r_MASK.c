
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0, size_t VAR_1)
{
 unsigned int VAR_2 = (1 << (VAR_1 << 3)) - 1;

 if (VAR_0 > VAR_2)
  return VAR_2;
 return VAR_0;
}
