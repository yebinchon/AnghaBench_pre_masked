
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (int) ;

long
FUNC_1 (void)
{
  long VAR_0;
  int VAR_1;

  VAR_0 = 0;
  for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
    VAR_0 = (VAR_0 << 4) + FUNC_0 (VAR_1 == 0);
  return VAR_0;
}
