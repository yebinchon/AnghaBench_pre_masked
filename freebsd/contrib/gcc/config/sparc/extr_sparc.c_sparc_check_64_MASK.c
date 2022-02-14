
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;



 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__) ;

int
FUNC_13 (rtx VAR_6, rtx VAR_7)
{




  int VAR_8 = 0;
  rtx VAR_9 = VAR_6;

  FUNC_7 (FUNC_0 (VAR_6) == VAR_1);

  if (FUNC_1 (VAR_6) == VAR_0)
    VAR_9 = FUNC_8 (VAR_3, FUNC_4 (VAR_6) + VAR_4);

  if (VAR_5
      && FUNC_5 (FUNC_4 (VAR_9)) == 1)
    VAR_8 = 1;

  if (VAR_7 == 0)
    {
      if (VAR_8)
 VAR_7 = FUNC_9 ();
      else
 return 0;
    }

  while ((VAR_7 = FUNC_3 (VAR_7)))
    {
      switch (FUNC_0 (VAR_7))
 {
 case 129:
 case 128:
   break;
 case 131:
 case 132:
 default:
   if (! VAR_8)
     return 0;
   break;
 case 130:
   {
     rtx VAR_10 = FUNC_2 (VAR_7);
     if (FUNC_0 (VAR_10) != VAR_2)
       return 0;
     if (FUNC_11 (VAR_6, FUNC_6 (VAR_10)))
       return FUNC_12 (VAR_7);
     if (VAR_9 && FUNC_11 (VAR_9, FUNC_6 (VAR_10)))
       return FUNC_12 (VAR_7);
     if (FUNC_10 (FUNC_6 (VAR_10), VAR_9))
       return 0;
   }
 }
    }
  return 0;
}
