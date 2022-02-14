
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef int (* insn_operand_predicate_fn ) (scalar_t__,int) ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {int preferred_stack_boundary; scalar_t__ nonlocal_goto_save_area; } ;
struct TYPE_5__ {TYPE_1__* operand; } ;
struct TYPE_4__ {int mode; int (* predicate ) (scalar_t__,int) ;} ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (scalar_t__) ;
 TYPE_3__* VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_7 (int,scalar_t__,int) ;
 scalar_t__ FUNC_8 (int,scalar_t__) ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,scalar_t__,int ,int ,scalar_t__,int,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (scalar_t__,int ,scalar_t__,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_17 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_19 (int ,int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 () ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int FUNC_24 () ;
 TYPE_2__* VAR_27 ;
 int FUNC_25 (scalar_t__,int) ;
 int FUNC_26 (scalar_t__,int) ;
 int FUNC_27 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_29 (scalar_t__,int) ;
 int VAR_31 ;
 int FUNC_30 () ;
 scalar_t__ VAR_32 ;

rtx
FUNC_31 (rtx VAR_33, rtx VAR_34, int VAR_35)
{



  if (VAR_33 == VAR_22)
    return VAR_32;


  VAR_23 = 1;


  if (FUNC_2 (VAR_33) != VAR_19 && FUNC_2 (VAR_33) != VAR_13)
    VAR_33 = FUNC_7 (VAR_13, VAR_33, 1);




  VAR_21->preferred_stack_boundary = VAR_12;
  if ((VAR_12 < VAR_0))
    VAR_33
      = FUNC_19 (FUNC_26 (VAR_33,
          VAR_0 / VAR_1 - 1),
         VAR_9);
  if ((VAR_12 < VAR_0) || VAR_35 % VAR_12 != 0)

    VAR_33 = FUNC_28 (VAR_33);

  FUNC_9 ();



  FUNC_20 (!(VAR_29
  % (VAR_12 / VAR_1)));



  if (VAR_26 && ! VAR_14)
    FUNC_27 (VAR_15 + VAR_16, VAR_33);


  if (VAR_34 == 0 || !FUNC_5 (VAR_34)
      || FUNC_4 (VAR_34) < VAR_4
      || FUNC_2 (VAR_34) != VAR_13)
    VAR_34 = FUNC_23 (VAR_13);

  FUNC_25 (VAR_34, VAR_35);
    {

      FUNC_14 (VAR_34, VAR_32);



      if (VAR_25)
 {
   rtx VAR_36;
   rtx VAR_37 = FUNC_22 ();





   VAR_36 = FUNC_16 (VAR_13, VAR_31,
        VAR_28, VAR_30,
        VAR_9, 1, VAR_11);

   FUNC_11 (VAR_36, VAR_33, VAR_5, VAR_9, VAR_13, 1,
       VAR_37);





     FUNC_15 ("stack limits not supported on this target");
   FUNC_10 ();
   FUNC_13 (VAR_37);
 }

      FUNC_6 (VAR_33);




    }

  if ((VAR_12 < VAR_0))
    {



      VAR_34 = FUNC_16 (VAR_13, VAR_20, VAR_34,
        FUNC_0 (VAR_0 / VAR_1 - 1),
        VAR_9, 1, VAR_10);
      VAR_34 = FUNC_17 (0, VAR_18, VAR_13, VAR_34,
         FUNC_0 (VAR_0 / VAR_1),
         VAR_9, 1);
      VAR_34 = FUNC_18 (VAR_13, VAR_34,
       FUNC_0 (VAR_0 / VAR_1),
       VAR_9, 1);
    }


  if (VAR_21->nonlocal_goto_save_area != 0)
    FUNC_30 ();

  return VAR_34;
}
