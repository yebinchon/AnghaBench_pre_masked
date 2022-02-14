
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix86_address {scalar_t__ base; scalar_t__ index; scalar_t__ disp; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__,struct ix86_address*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_8 ;

int
FUNC_5 (rtx VAR_9)
{
  struct ix86_address VAR_10;
  rtx VAR_11, VAR_12, VAR_13;
  int VAR_14;
  int VAR_15;

  if (FUNC_0 (VAR_9) == VAR_2
      || FUNC_0 (VAR_9) == VAR_0
      || FUNC_0 (VAR_9) == VAR_3
      || FUNC_0 (VAR_9) == VAR_1)
    return 0;

  VAR_15 = FUNC_3 (VAR_9, &VAR_10);
  FUNC_2 (VAR_15);

  if (VAR_10.base && FUNC_0 (VAR_10.base) == VAR_4)
    VAR_10.base = FUNC_1 (VAR_10.base);
  if (VAR_10.index && FUNC_0 (VAR_10.index) == VAR_4)
    VAR_10.index = FUNC_1 (VAR_10.index);

  VAR_11 = VAR_10.base;
  VAR_12 = VAR_10.index;
  VAR_13 = VAR_10.disp;
  VAR_14 = 0;






  if (VAR_11 && !VAR_12 && !VAR_13)
    {


      if (VAR_9 == VAR_8
   || VAR_9 == VAR_5
   || VAR_9 == VAR_6
   || VAR_9 == VAR_7)
 VAR_14 = 1;
    }


  else if (VAR_13 && !VAR_11 && !VAR_12)
    VAR_14 = 4;

  else
    {

      if (VAR_13)
 {
   if (VAR_11 && FUNC_4 (VAR_13))
     VAR_14 = 1;
   else
     VAR_14 = 4;
 }

      else if (VAR_11 == VAR_7)
        VAR_14 = 1;


      if (VAR_12

   || VAR_11 == VAR_8
   || VAR_11 == VAR_5
   || VAR_11 == VAR_6)
 VAR_14 += 1;
    }

  return VAR_14;
}
