
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * rtx ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;
struct TYPE_2__ {int n_operands; scalar_t__* operand_type; int ** operand; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_5 (int *,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 int FUNC_9 () ;
 TYPE_1__ VAR_11 ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int * FUNC_13 (int *) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_14 (rtx VAR_13, rtx VAR_14, rtx VAR_15, int VAR_16)
{
  rtx VAR_17, VAR_18;



  if (VAR_8
      && FUNC_2 (VAR_14) == 0
      && FUNC_10 (VAR_13) >= 0
      && FUNC_10 (VAR_15) >= 0)
    {
      int VAR_19 = FUNC_7 (VAR_13);
      enum attr_type VAR_20 = FUNC_8 (VAR_15);





      if (VAR_19 != 0
   && (VAR_20 == VAR_6 || VAR_20 == VAR_7))
 {
   rtx VAR_21;
   int VAR_22;


   FUNC_6 (VAR_13);
   VAR_21 = VAR_11.operand[VAR_19];




   FUNC_6 (VAR_15);
   FUNC_9 ();
   for (VAR_22 = 0; VAR_22 < VAR_11.n_operands; VAR_22++)
     {

       if (VAR_11.operand_type[VAR_22] == VAR_2)
  continue;

       if (FUNC_12 (VAR_11.operand[VAR_22],
        VAR_21))
  return 2;
     }
 }
    }


  if (FUNC_2 (VAR_14) == VAR_3
      || FUNC_2 (VAR_14) == VAR_4)
    return 0;


  if (FUNC_2 (VAR_14) == 0
      && FUNC_1 (VAR_13) == VAR_0)
    return 1;

  if ((VAR_17 = FUNC_13 (VAR_13)) != ((void*)0)
      && FUNC_1 (FUNC_4 (VAR_17)) == VAR_1
      && (VAR_18 = FUNC_13 (VAR_15)) != ((void*)0)
      && FUNC_1 (FUNC_3 (VAR_18)) == VAR_1)
    {
      rtx VAR_23 = FUNC_5 (FUNC_4 (VAR_17), 0);





      if ((FUNC_1 (VAR_23) == VAR_5 && FUNC_0 (VAR_23))
   || FUNC_11 (VAR_12, VAR_23)
   || FUNC_11 (VAR_9, VAR_23)
   || FUNC_11 (VAR_10, VAR_23))
 return 1;
    }

  return VAR_16;
}
