
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;



long
FUNC_0(
 unsigned char **VAR_0
 )
{
  long VAR_1;

  VAR_1 = *((*VAR_0)++);
  VAR_1 |= *((*VAR_0)++) << 8;
  VAR_1 |= *((*VAR_0)++) << 16;
  VAR_1 |= (u_long)*((*VAR_0)++) << 24;

  return VAR_1;
}
