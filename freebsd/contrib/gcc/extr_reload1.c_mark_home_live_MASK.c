
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

void
FUNC_1 (int VAR_3)
{
  int VAR_4, VAR_5;

  VAR_4 = VAR_1[VAR_3];
  if (VAR_4 < 0)
    return;
  VAR_5 = VAR_4 + VAR_0[VAR_4][FUNC_0 (VAR_3)];
  while (VAR_4 < VAR_5)
    VAR_2[VAR_4++] = 1;
}
