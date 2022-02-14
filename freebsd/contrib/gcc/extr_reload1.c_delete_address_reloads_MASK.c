
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static void
FUNC_12 (rtx VAR_2, rtx VAR_3)
{
  rtx VAR_4 = FUNC_11 (VAR_2);
  rtx VAR_5, VAR_6, VAR_7, VAR_8;
  if (VAR_4)
    {
      rtx VAR_9 = FUNC_5 (VAR_4);
      if (FUNC_2 (VAR_9))
 FUNC_8 (VAR_2, FUNC_7 (VAR_9, 0), VAR_3);
    }


  VAR_7 = FUNC_4 (VAR_2);
  VAR_8 = FUNC_3 (VAR_2);
  if (! VAR_7 || ! VAR_8)
    return;
  VAR_4 = FUNC_11 (VAR_8);
  VAR_5 = FUNC_11 (VAR_7);
  if (! VAR_4 || ! VAR_5
      || FUNC_0 (FUNC_6 (VAR_4)) != VAR_1 || FUNC_0 (FUNC_6 (VAR_5)) != VAR_1
      || FUNC_0 (FUNC_7 (FUNC_6 (VAR_4), 1)) != VAR_0
      || FUNC_0 (FUNC_7 (FUNC_6 (VAR_5), 1)) != VAR_0)
    return;
  VAR_6 = FUNC_5 (VAR_4);
  if (! FUNC_10 (VAR_6, FUNC_5 (VAR_5))
      || ! FUNC_10 (VAR_6, FUNC_7 (FUNC_6 (VAR_4), 0))
      || ! FUNC_10 (VAR_6, FUNC_7 (FUNC_6 (VAR_5), 0))
      || (FUNC_1 (FUNC_7 (FUNC_6 (VAR_4), 1))
   != -FUNC_1 (FUNC_7 (FUNC_6 (VAR_5), 1))))
    return;
  FUNC_9 (VAR_7);
  FUNC_9 (VAR_8);
}
