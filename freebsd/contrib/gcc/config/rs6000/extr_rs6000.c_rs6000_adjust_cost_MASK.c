
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

 int VAR_20 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_23, rtx VAR_24, rtx VAR_25, int VAR_26)
{
  if (! FUNC_8 (VAR_23))
    return 0;

  if (FUNC_5 (VAR_24) != 0)
    return 0;

  if (FUNC_5 (VAR_24) == 0)
    {




      if (VAR_22
   && FUNC_0 (FUNC_4 (VAR_23)) == VAR_11
   && FUNC_0 (FUNC_4 (VAR_25)) == VAR_11
   && FUNC_0 (FUNC_6 (FUNC_4 (VAR_23), 1)) == VAR_10
   && FUNC_0 (FUNC_6 (FUNC_4 (VAR_25), 0)) == VAR_10
   && (FUNC_2 (FUNC_1 (FUNC_6 (FUNC_4 (VAR_23), 1)))
       > FUNC_2 (FUNC_1 (FUNC_6 (FUNC_4 (VAR_25), 0)))))
 return VAR_26 + 14;

      switch (FUNC_7 (VAR_23))
 {
 case 128:





   return VAR_12 ? 5 : 4;
 case 129:


   if ((VAR_21 == VAR_2
        || VAR_21 == VAR_3
        || VAR_21 == VAR_4
        || VAR_21 == VAR_5
        || VAR_21 == VAR_6
        || VAR_21 == VAR_9
        || VAR_21 == VAR_7
        || VAR_21 == VAR_8
        || VAR_21 == VAR_0
        || VAR_21 == VAR_1)
       && FUNC_8 (VAR_25)
       && (FUNC_3 (VAR_25) >= 0)
       && (FUNC_7 (VAR_25) == VAR_13
    || FUNC_7 (VAR_25) == VAR_14
    || FUNC_7 (VAR_25) == VAR_16
    || FUNC_7 (VAR_25) == VAR_19
    || FUNC_7 (VAR_25) == VAR_20
    || FUNC_7 (VAR_25) == VAR_18
    || FUNC_7 (VAR_25) == VAR_15
    || FUNC_7 (VAR_25) == VAR_17))
     return VAR_26 + 2;
 default:
   break;
 }

    }

  return VAR_26;
}
