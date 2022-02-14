
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int** VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5 (int VAR_6)
{
  int VAR_7 = FUNC_2 (VAR_6);
  int VAR_8 = VAR_2[VAR_6];
  int VAR_9;

  if (FUNC_1 (&VAR_1, VAR_6)
      || FUNC_1 (&VAR_5, VAR_6))
    return;

  FUNC_3 (&VAR_1, VAR_6);

  FUNC_4 (VAR_8 >= 0);

  VAR_3[VAR_8] += VAR_7;

  VAR_9 = VAR_0[VAR_8][FUNC_0 (VAR_6)];
  while (VAR_9-- > 0)
    VAR_4[VAR_8 + VAR_9] += VAR_7;
}
