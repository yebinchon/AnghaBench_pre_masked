
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0)
{
 unsigned VAR_1 = 0;

 while (VAR_0 >>= 1)
  VAR_1++;

 return (1 << VAR_1);
}
