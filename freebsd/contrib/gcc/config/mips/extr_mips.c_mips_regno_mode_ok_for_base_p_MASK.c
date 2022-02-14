
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;

int
FUNC_3 (int VAR_6, enum machine_mode VAR_7, int VAR_8)
{
  if (VAR_6 >= VAR_1)
    {
      if (!VAR_8)
 return 1;
      VAR_6 = VAR_5[VAR_6];
    }




  if (VAR_6 == VAR_0 || VAR_6 == VAR_2)
    return 1;
  if (VAR_4 && VAR_6 == VAR_3)
    return !VAR_8 || FUNC_0 (VAR_7) == 4 || FUNC_0 (VAR_7) == 8;

  return VAR_4 ? FUNC_2 (VAR_6) : FUNC_1 (VAR_6);
}
