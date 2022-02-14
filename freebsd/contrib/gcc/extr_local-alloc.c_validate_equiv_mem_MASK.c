
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,int ,int *) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_14 (rtx VAR_5, rtx VAR_6, rtx VAR_7)
{
  rtx VAR_8;
  rtx VAR_9;

  VAR_2 = VAR_7;
  VAR_3 = 0;



  if (FUNC_13 (VAR_7))
    return 0;

  for (VAR_8 = VAR_5; VAR_8 && ! VAR_3; VAR_8 = FUNC_4 (VAR_8))
    {
      if (! FUNC_2 (VAR_8))
 continue;

      if (FUNC_10 (VAR_8, VAR_0, VAR_6))
 return 1;

      if (FUNC_0 (VAR_8) && ! FUNC_3 (VAR_7)
   && ! FUNC_1 (VAR_8))
 return 0;

      FUNC_11 (FUNC_5 (VAR_8), VAR_4, ((void*)0));






      for (VAR_9 = FUNC_6 (VAR_8); VAR_9; VAR_9 = FUNC_9 (VAR_9, 1))
 if ((FUNC_7 (VAR_9) == VAR_1
      || FUNC_7 (VAR_9) == VAR_0)
     && FUNC_8 (FUNC_9 (VAR_9, 0))
     && FUNC_12 (FUNC_9 (VAR_9, 0), VAR_7))
   return 0;
    }

  return 0;
}
