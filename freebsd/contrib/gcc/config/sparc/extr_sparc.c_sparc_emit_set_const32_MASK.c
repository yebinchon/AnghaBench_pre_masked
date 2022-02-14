
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (int ,int) ;

void
FUNC_13 (rtx VAR_4, rtx VAR_5)
{
  enum machine_mode VAR_6 = FUNC_2 (VAR_4);
  rtx VAR_7;

  if (VAR_3 || VAR_2)
    VAR_7 = VAR_4;
  else
    VAR_7 = FUNC_7 (VAR_6);

  if (FUNC_1 (VAR_5) == VAR_0)
    {
      FUNC_6 (!FUNC_12 (VAR_5, VAR_6)
    && !FUNC_4 (VAR_5, VAR_6));




      FUNC_5 (FUNC_11 (VAR_1, VAR_7,
         FUNC_0 (FUNC_3 (VAR_5)
           & ~(HOST_WIDE_INT)0x3ff)));

      FUNC_5 (FUNC_11 (VAR_1,
         VAR_4,
         FUNC_9 (VAR_6, VAR_7,
        FUNC_0 (FUNC_3 (VAR_5) & 0x3ff))));
    }
  else
    {

      FUNC_5 (FUNC_11 (VAR_1, VAR_7,
         FUNC_8 (VAR_6, VAR_5)));
      FUNC_5 (FUNC_11 (VAR_1,
         VAR_4, FUNC_10 (VAR_6, VAR_7, VAR_5)));
    }
}
