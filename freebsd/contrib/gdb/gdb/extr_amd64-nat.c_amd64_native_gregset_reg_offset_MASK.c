
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (int VAR_6)
{
  int *VAR_7 = VAR_4;
  int VAR_8 = VAR_3;

  FUNC_0 (VAR_6 >= 0);

  if (FUNC_1 (VAR_5) == 32)
    {
      VAR_7 = VAR_2;
      VAR_8 = VAR_1;
    }

  if (VAR_8 > VAR_0)
    VAR_8 = VAR_0;

  if (VAR_6 < VAR_8 && VAR_6 < VAR_0)
    return VAR_7[VAR_6];

  return -1;
}
