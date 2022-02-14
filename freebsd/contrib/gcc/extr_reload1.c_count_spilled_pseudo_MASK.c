
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int** VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (int VAR_5, int VAR_6, int VAR_7)
{
  int VAR_8 = VAR_1[VAR_7];
  int VAR_9 = VAR_0[VAR_8][FUNC_0 (VAR_7)];

  if (FUNC_1 (&VAR_4, VAR_7)
      || VAR_5 + VAR_6 <= VAR_8 || VAR_8 + VAR_9 <= VAR_5)
    return;

  FUNC_3 (&VAR_4, VAR_7);

  VAR_2[VAR_8] -= FUNC_2 (VAR_7);
  while (VAR_9-- > 0)
    VAR_3[VAR_8 + VAR_9] -= FUNC_2 (VAR_7);
}
