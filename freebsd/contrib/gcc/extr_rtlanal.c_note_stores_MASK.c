
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 void FUNC_9 (scalar_t__,scalar_t__,void*) ;
 void FUNC_10 (scalar_t__,scalar_t__,void*) ;

void
FUNC_11 (rtx VAR_8, void (*VAR_9) (rtx, rtx, void *), void *VAR_10)
{
  int VAR_11;

  if (FUNC_1 (VAR_8) == VAR_1)
    VAR_8 = FUNC_0 (VAR_8);

  if (FUNC_1 (VAR_8) == VAR_4 || FUNC_1 (VAR_8) == VAR_0)
    {
      rtx VAR_12 = FUNC_4 (VAR_8);

      while ((FUNC_1 (VAR_12) == VAR_6
       && (!FUNC_3 (FUNC_5 (VAR_12))
    || FUNC_2 (FUNC_5 (VAR_12)) >= VAR_2))
      || FUNC_1 (VAR_12) == VAR_7
      || FUNC_1 (VAR_12) == VAR_5)
 VAR_12 = FUNC_6 (VAR_12, 0);



      if (FUNC_1 (VAR_12) == VAR_3)
 {
   for (VAR_11 = FUNC_8 (VAR_12, 0) - 1; VAR_11 >= 0; VAR_11--)
     if (FUNC_6 (FUNC_7 (VAR_12, 0, VAR_11), 0) != 0)
       (*VAR_9) (FUNC_6 (FUNC_7 (VAR_12, 0, VAR_11), 0), VAR_8, VAR_10);
 }
      else
 (*VAR_9) (VAR_12, VAR_8, VAR_10);
    }

  else if (FUNC_1 (VAR_8) == VAR_3)
    for (VAR_11 = FUNC_8 (VAR_8, 0) - 1; VAR_11 >= 0; VAR_11--)
      FUNC_11 (FUNC_7 (VAR_8, 0, VAR_11), VAR_9, VAR_10);
}
