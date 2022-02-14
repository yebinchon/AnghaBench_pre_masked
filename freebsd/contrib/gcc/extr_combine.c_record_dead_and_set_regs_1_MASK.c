
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13 (rtx VAR_5, rtx VAR_6, void *VAR_7)
{
  rtx VAR_8 = (rtx) VAR_7;

  if (FUNC_0 (VAR_5) == VAR_3)
    VAR_5 = FUNC_8 (VAR_5);

  if (!VAR_8)
    {
      if (FUNC_5 (VAR_5))
 FUNC_11 (VAR_5, VAR_1, VAR_1);
      return;
    }

  if (FUNC_5 (VAR_5))
    {



      if (FUNC_0 (VAR_6) == VAR_2 && VAR_5 == FUNC_6 (VAR_6))
 FUNC_11 (VAR_5, VAR_8, FUNC_7 (VAR_6));
      else if (FUNC_0 (VAR_6) == VAR_2
        && FUNC_0 (FUNC_6 (VAR_6)) == VAR_3
        && FUNC_8 (FUNC_6 (VAR_6)) == VAR_5
        && FUNC_2 (FUNC_1 (VAR_5)) <= VAR_0
        && FUNC_12 (FUNC_6 (VAR_6)))
 FUNC_11 (VAR_5, VAR_8,
         FUNC_9 (FUNC_1 (VAR_5),
             FUNC_7 (VAR_6)));
      else
 FUNC_11 (VAR_5, VAR_8, VAR_1);
    }
  else if (FUNC_4 (VAR_5)

    && ! FUNC_10 (VAR_5, FUNC_1 (VAR_5)))
    VAR_4 = FUNC_3 (VAR_8);
}
