
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,int) ;
 scalar_t__** VAR_1 ;

rtx
FUNC_3 (rtx VAR_2, enum machine_mode VAR_3)
{
  int VAR_4;

  if (FUNC_0 (VAR_2) == VAR_3)
    return VAR_2;

  VAR_4 = FUNC_1 (VAR_2);

  if (VAR_0)
    VAR_4 += (int) VAR_1[VAR_4][FUNC_0 (VAR_2)]
      - (int) VAR_1[VAR_4][VAR_3];

  return FUNC_2 (VAR_3, VAR_4);
}
