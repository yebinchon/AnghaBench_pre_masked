
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (unsigned VAR_0)
{
  int VAR_1 = (VAR_0 & 0x20000000) ? 0x3e000000 : 0x40000000;
  return (VAR_0 & 0x7ffff) == 0 && ((VAR_0 & 0x7e000000) ^ VAR_1) == 0;
}
