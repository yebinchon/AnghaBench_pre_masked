
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_9__ {scalar_t__ test_bb; scalar_t__ then_bb; scalar_t__ else_bb; scalar_t__ num_multiple_test_blocks; scalar_t__ last_test_bb; int num_then_insns; int num_else_insns; scalar_t__ and_and_p; scalar_t__ num_or_or_blocks; scalar_t__ num_and_and_blocks; } ;
typedef TYPE_1__ ce_if_block_t ;
typedef scalar_t__ basic_block ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 void* FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_15 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__,char*,int,char*) ;
 scalar_t__ FUNC_18 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__,int) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_25 (ce_if_block_t * VAR_10,
                                 int VAR_11)
{
  basic_block VAR_12 = VAR_10->test_bb;
  basic_block VAR_13 = VAR_10->then_bb;
  basic_block VAR_14 = VAR_10->else_bb;
  rtx VAR_15;
  rtx VAR_16;
  rtx VAR_17;
  rtx VAR_18 = VAR_3;
  rtx VAR_19 = VAR_3;
  int VAR_20;
  int VAR_21;
  rtx VAR_22;
  rtx VAR_23;
  rtx VAR_24;
  rtx VAR_25;
  int VAR_26;
  enum rtx_code VAR_27;




  if (!VAR_11 && VAR_10->num_multiple_test_blocks)
    {
      if (VAR_14 || ! VAR_10->and_and_p)
 return VAR_0;

      VAR_10->test_bb = VAR_12 = VAR_10->last_test_bb;
      VAR_10->num_multiple_test_blocks = 0;
      VAR_10->num_and_and_blocks = 0;
      VAR_10->num_or_or_blocks = 0;
    }



  VAR_15 = FUNC_12 (FUNC_0 (VAR_12));
  if (! VAR_15)
    return VAR_0;



  if (! FUNC_23 (FUNC_0 (VAR_12)))
    return VAR_0;




  VAR_16 = FUNC_16 (VAR_13);
  VAR_17 = FUNC_21 (VAR_13, VAR_6);
  VAR_26 = VAR_10->num_then_insns = FUNC_14 (VAR_13);
  VAR_20 = VAR_1;

  if (VAR_14)
    {
      VAR_20 *= 2;
      VAR_18 = FUNC_16 (VAR_14);
      VAR_19 = FUNC_21 (VAR_14, VAR_6);
      VAR_26 += VAR_10->num_else_insns = FUNC_14 (VAR_14);
    }

  if (VAR_26 > VAR_20)
    return VAR_0;




  VAR_22 = VAR_15;

  VAR_27 = FUNC_24 (VAR_22, FUNC_0 (VAR_12));
  if (VAR_27 != VAR_7)
    VAR_23 = FUNC_20 (VAR_27, FUNC_2 (VAR_22),
     FUNC_8 (VAR_22, 0), FUNC_8 (VAR_22, 1));
  else
    VAR_23 = VAR_3;
  VAR_24 = FUNC_15 (FUNC_0 (VAR_12), VAR_4, VAR_3);
  if (VAR_24)
    {
      VAR_24 = FUNC_8 (VAR_24, 0);
      VAR_25 = FUNC_1 (VAR_5 - FUNC_7 (VAR_24));
    }
  else
    VAR_25 = VAR_3;



  if (VAR_10->num_multiple_test_blocks > 0)
    {
      basic_block VAR_28 = VAR_12;
      basic_block VAR_29 = VAR_10->last_test_bb;

      if (! VAR_23)
 goto fail;

      do
 {
   rtx VAR_30, VAR_31;
   rtx VAR_32, VAR_33;
   enum rtx_code VAR_34;

   VAR_28 = FUNC_10 (VAR_28);
   VAR_30 = FUNC_16 (VAR_28);
   VAR_31 = FUNC_21 (VAR_28, VAR_6);
   if (VAR_30
       && ! FUNC_13 (VAR_10, VAR_30, VAR_31, VAR_23,
         VAR_25, VAR_0))
     goto fail;



   if (! FUNC_23 (FUNC_0 (VAR_28)))
     goto fail;


   VAR_32 = FUNC_12 (FUNC_0 (VAR_28));
   if (! VAR_32)
     goto fail;

   VAR_34 = FUNC_24 (VAR_32, FUNC_0 (VAR_28));
   if (VAR_34 == VAR_7)
     goto fail;

   VAR_33 = FUNC_20 (VAR_34, FUNC_2 (VAR_32), FUNC_8 (VAR_32, 0), FUNC_8 (VAR_32, 1));
   if (VAR_10->and_and_p)
     {
       VAR_32 = FUNC_18 (FUNC_2 (VAR_32), VAR_22, VAR_32);
       VAR_33 = FUNC_19 (FUNC_2 (VAR_32), VAR_23, VAR_33);
     }
   else
     {
       VAR_32 = FUNC_19 (FUNC_2 (VAR_32), VAR_22, VAR_32);
       VAR_33 = FUNC_18 (FUNC_2 (VAR_32), VAR_23, VAR_33);
     }
   VAR_22 = VAR_32;
   VAR_23 = VAR_33;
 }
      while (VAR_28 != VAR_29);
    }



  VAR_21 = (VAR_14 == VAR_2);




  if (VAR_17
      && (! VAR_23
   || ! FUNC_13 (VAR_10, VAR_16, VAR_17,
     VAR_23, VAR_25,
     VAR_21)))
    goto fail;

  if (VAR_14 && VAR_19
      && ! FUNC_13 (VAR_10, VAR_18, VAR_19,
        VAR_22, VAR_24, VAR_6))
    goto fail;



  if (! FUNC_9 ())
    {




      return VAR_0;
    }







  if (VAR_9)
    FUNC_17 (VAR_9, "%d insn%s converted to conditional execution.\n",
      VAR_26, (VAR_26 == 1) ? " was" : "s were");


  FUNC_22 (VAR_10);
  VAR_8 = VAR_6;
  return VAR_6;

 fail:





  FUNC_11 (0);
  return VAR_0;
}
