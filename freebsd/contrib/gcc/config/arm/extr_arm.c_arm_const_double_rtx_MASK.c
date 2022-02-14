
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int * VAR_1 ;

int
FUNC_4 (rtx VAR_2)
{
  REAL_VALUE_TYPE VAR_3;
  int VAR_4;

  if (!VAR_0)
    FUNC_3 ();

  FUNC_1 (VAR_3, VAR_2);
  if (FUNC_2 (VAR_3))
    return 0;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (FUNC_0 (VAR_3, VAR_1[VAR_4]))
      return 1;

  return 0;
}
