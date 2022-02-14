
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,unsigned int) ;
 int VAR_4 ;

rtx
FUNC_10 (rtx VAR_5, int VAR_6)
{
  unsigned int VAR_7;
  enum machine_mode VAR_8;

  VAR_8 = FUNC_2 (VAR_5);
  if (VAR_8 == VAR_3)
    VAR_8 = VAR_0;

  if (VAR_1 ? !VAR_6 : VAR_6)
    VAR_7 = VAR_2;
  else
    VAR_7 = 0;

  if (FUNC_5 (VAR_5))
    {
      if (FUNC_1 (FUNC_4 (VAR_5)))
 return FUNC_7 (VAR_4, VAR_6 ? FUNC_4 (VAR_5) + 1 : FUNC_4 (VAR_5));
      if (FUNC_0 (FUNC_4 (VAR_5)))
 return FUNC_7 (VAR_4, VAR_6 ? FUNC_4 (VAR_5) : FUNC_4 (VAR_5) + 1);
    }

  if (FUNC_3 (VAR_5))
    return FUNC_8 (FUNC_6 (VAR_5, VAR_4, VAR_7));

  return FUNC_9 (VAR_4, VAR_5, VAR_8, VAR_7);
}
