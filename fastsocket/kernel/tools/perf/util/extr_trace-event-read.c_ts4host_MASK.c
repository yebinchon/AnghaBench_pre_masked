
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1)
{
 if (VAR_0)
  return VAR_1 & ((1 << 27) - 1);
 else
  return VAR_1 >> 5;
}
