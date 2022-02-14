
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int** VAR_2 ;
 int * VAR_3 ;

int
FUNC_2 (rtx VAR_4, enum reg_class VAR_5, int VAR_6,
    enum machine_mode VAR_7)
{
  int VAR_8 = FUNC_0 (VAR_4);

  if (VAR_5 == VAR_1)
    return 0;

  if (VAR_8 < VAR_0
      && FUNC_1 (VAR_3[(int) VAR_5],
       VAR_8 + VAR_6))
    {
      int VAR_9;
      VAR_8 += VAR_6;
      for (VAR_9 = VAR_2[VAR_8][VAR_7] - 1;
    VAR_9 > 0; VAR_9--)
 if (! FUNC_1 (VAR_3[(int) VAR_5],
     VAR_8 + VAR_9))
   break;
      return VAR_9 == 0;
    }

  return 0;
}
