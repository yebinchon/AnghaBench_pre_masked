
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int ** VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_2 (void)
{
  int VAR_6, VAR_7;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
      VAR_3[VAR_6][VAR_7] = FUNC_0(VAR_6, (enum machine_mode)VAR_7);

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
      VAR_4[VAR_6] = FUNC_1 (VAR_6, 1, 0);






      if (VAR_4[VAR_6] == VAR_2)
 VAR_4[VAR_6] = VAR_6 == 0 ? VAR_5 : VAR_4[VAR_6-1];
    }
}
