
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0)
{
 if (VAR_0 >= (1 << 20))
  return 100;
 else if (VAR_0 >= (1 << 16))
  return 1000;
 else if (VAR_0 >= (1 << 10))
  return 10000;
 else
  return 100000;
}
