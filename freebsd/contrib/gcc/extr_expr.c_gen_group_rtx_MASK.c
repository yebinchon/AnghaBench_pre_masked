
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int,int ) ;

rtx
FUNC_11 (rtx VAR_2)
{
  int VAR_3, VAR_4;
  rtx *VAR_5;

  FUNC_6 (FUNC_0 (VAR_2) == VAR_0);

  VAR_4 = FUNC_4 (VAR_2, 0);
  VAR_5 = FUNC_5 (sizeof (rtx) * VAR_4);


  VAR_3 = FUNC_2 (FUNC_3 (VAR_2, 0, 0), 0) ? 0 : 1;

  if (VAR_3)
    VAR_5[0] = 0;

  for (; VAR_3 < VAR_4; VAR_3++)
    {
      enum machine_mode VAR_6 = FUNC_1 (FUNC_2 (FUNC_3 (VAR_2, 0, VAR_3), 0));
      rtx VAR_7 = FUNC_2 (FUNC_3 (VAR_2, 0, VAR_3), 1);

      VAR_5[VAR_3] = FUNC_9 (VAR_1, FUNC_7 (VAR_6), VAR_7);
    }

  return FUNC_10 (FUNC_1 (VAR_2), FUNC_8 (VAR_4, VAR_5));
}
