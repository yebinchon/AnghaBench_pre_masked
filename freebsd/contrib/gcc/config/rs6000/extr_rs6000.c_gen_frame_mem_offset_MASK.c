
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static rtx
FUNC_6 (enum machine_mode VAR_5, rtx VAR_6, int VAR_7)
{
  rtx VAR_8, VAR_9;

  VAR_8 = FUNC_0 (VAR_7);

  if ((VAR_4 && FUNC_1 (VAR_5))
      || (VAR_3 && VAR_5 == VAR_0))
    {
      VAR_9 = FUNC_5 (VAR_2, VAR_1);
      FUNC_2 (VAR_9, VAR_8);
    }
  else
    VAR_9 = VAR_8;

  return FUNC_3 (VAR_5, FUNC_4 (VAR_2, VAR_6, VAR_9));
}
