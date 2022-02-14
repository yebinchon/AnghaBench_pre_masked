
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int,scalar_t__,int,int ) ;

void
FUNC_7 (rtx VAR_1[])
{
  enum machine_mode VAR_2, VAR_3;
  rtx VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

  VAR_4 = VAR_1[0];
  VAR_5 = VAR_1[1];
  VAR_6 = VAR_1[2];
  VAR_7 = VAR_1[3];

  VAR_2 = FUNC_1 (VAR_4);
  VAR_3 = FUNC_1 (VAR_7);

  VAR_4 = FUNC_6 (VAR_3, VAR_4, VAR_2, 0);
  VAR_8 = FUNC_3 (VAR_3, VAR_4, VAR_7);
  FUNC_2 (FUNC_5 (VAR_0, VAR_4, VAR_8));

  if (VAR_5 != FUNC_0 (VAR_3))
    {
      VAR_8 = FUNC_4 (VAR_3, VAR_4, VAR_5);
      FUNC_2 (FUNC_5 (VAR_0, VAR_4, VAR_8));
    }
}
