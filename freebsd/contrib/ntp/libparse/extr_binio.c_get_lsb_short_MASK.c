
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
long
FUNC_0(
 unsigned char **VAR_0
 )
{
  long VAR_1;

  VAR_1 = *((*VAR_0)++);
  VAR_1 |= *((*VAR_0)++) << 8;

  return (VAR_1 & 0x8000) ? (~0xFFFF | VAR_1) : VAR_1;
}
