
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

int
FUNC_0 (int VAR_1, bool VAR_2, bool VAR_3)
{

  int VAR_4 = VAR_1;

  if (!VAR_4)
    VAR_4 = 1;
  if (VAR_0 || VAR_2)
    VAR_4 = 1;


  if (VAR_3)
    VAR_4 *= 2;
  return VAR_4;
}
