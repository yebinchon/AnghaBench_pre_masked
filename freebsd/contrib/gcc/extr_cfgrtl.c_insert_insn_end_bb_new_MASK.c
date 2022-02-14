
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef int basic_block ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int ) ;
 TYPE_1__* FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

rtx
FUNC_21 (rtx VAR_5, basic_block VAR_6)
{
  rtx VAR_7 = FUNC_0 (VAR_6);
  rtx VAR_8;
  rtx VAR_9 = VAR_5;

  while (FUNC_7 (VAR_9) != VAR_3)
    VAR_9 = FUNC_7 (VAR_9);





  if (FUNC_5 (VAR_7)
      || (FUNC_8 (VAR_7)
          && (!FUNC_20 (VAR_6)
              || FUNC_19 (VAR_6)->flags & VAR_2)))
    {






      if (FUNC_3 (FUNC_10 (VAR_7)) == VAR_1
          || FUNC_3 (FUNC_10 (VAR_7)) == VAR_0)
        VAR_7 = FUNC_17 (VAR_7);
      VAR_8 = FUNC_13 (VAR_5, VAR_7);
    }



  else if (FUNC_2 (VAR_7)
           && (!FUNC_20 (VAR_6)
               || FUNC_19 (VAR_6)->flags & VAR_2))
    {
      VAR_7 = FUNC_14 (VAR_7, FUNC_1 (VAR_6));
      while (FUNC_6 (VAR_7)
             || FUNC_9 (VAR_7))
        VAR_7 = FUNC_7 (VAR_7);

      VAR_8 = FUNC_13 (VAR_5, VAR_7);
    }
  else
    VAR_8 = FUNC_12 (VAR_5, VAR_7);

  return VAR_8;
}
