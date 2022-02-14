
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
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_2, rtx VAR_3, rtx VAR_4, rtx VAR_5)
{
  enum machine_mode VAR_6 = FUNC_1 (VAR_2);
  rtx VAR_7, VAR_8, VAR_9;

  if (VAR_5 == FUNC_0 (VAR_6))
    {
      VAR_4 = FUNC_3 (VAR_6, VAR_4);
      VAR_9 = FUNC_5 (VAR_6, VAR_3, VAR_4);
      FUNC_2 (FUNC_8 (VAR_0, VAR_2, VAR_9));
    }
  else if (VAR_4 == FUNC_0 (VAR_6))
    {
      VAR_5 = FUNC_3 (VAR_6, VAR_5);
      VAR_9 = FUNC_7 (VAR_6, VAR_3);
      VAR_9 = FUNC_5 (VAR_6, VAR_9, VAR_5);
      FUNC_2 (FUNC_8 (VAR_0, VAR_2, VAR_9));
    }
  else
    {
      VAR_4 = FUNC_3 (VAR_6, VAR_4);
      VAR_5 = FUNC_3 (VAR_6, VAR_5);

      VAR_7 = FUNC_4 (VAR_6);
      if (VAR_1)
 VAR_8 = FUNC_4 (VAR_6);
      else
 VAR_8 = VAR_2;

      VAR_9 = FUNC_5 (VAR_6, VAR_4, VAR_3);
      FUNC_2 (FUNC_8 (VAR_0, VAR_7, VAR_9));

      VAR_9 = FUNC_7 (VAR_6, VAR_3);
      VAR_9 = FUNC_5 (VAR_6, VAR_9, VAR_5);
      FUNC_2 (FUNC_8 (VAR_0, VAR_8, VAR_9));

      VAR_9 = FUNC_6 (VAR_6, VAR_8, VAR_7);
      FUNC_2 (FUNC_8 (VAR_0, VAR_2, VAR_9));
    }
}
