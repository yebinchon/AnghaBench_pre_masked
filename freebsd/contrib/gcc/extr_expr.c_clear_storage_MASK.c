
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum block_op_methods { ____Placeholder_block_op_methods } block_op_methods ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *) ;
 unsigned int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,unsigned int) ;
 int * FUNC_10 (int *,int *,int) ;
 int * VAR_4 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int *,int *,int *,unsigned int) ;
 int FUNC_14 (int *,int *,int) ;

rtx
FUNC_15 (rtx VAR_5, rtx VAR_6, enum block_op_methods VAR_7)
{
  enum machine_mode VAR_8 = FUNC_4 (VAR_5);
  unsigned int VAR_9;

  FUNC_12 (VAR_7 == VAR_1 || VAR_7 == VAR_2);



  if (VAR_8 != VAR_0
      && FUNC_3 (VAR_6) == VAR_3
      && FUNC_7 (VAR_6) == (HOST_WIDE_INT) FUNC_6 (VAR_8))
    {
      rtx VAR_10 = FUNC_2 (VAR_8);
      if (VAR_10 != ((void*)0))
 {
   FUNC_11 (VAR_5, VAR_10);
   return ((void*)0);
 }

      if (FUNC_1 (VAR_8))
 {
   VAR_10 = FUNC_2 (FUNC_5 (VAR_8));
   if (VAR_10 != ((void*)0))
     {
       FUNC_14 (VAR_5, VAR_10, 0);
       FUNC_14 (VAR_5, VAR_10, 1);
       return ((void*)0);
     }
 }
    }

  if (VAR_6 == VAR_4)
    return ((void*)0);

  VAR_9 = FUNC_8 (VAR_5);

  if (FUNC_3 (VAR_6) == VAR_3
      && FUNC_0 (FUNC_7 (VAR_6), VAR_9))
    FUNC_9 (VAR_5, FUNC_7 (VAR_6), VAR_9);
  else if (FUNC_13 (VAR_5, VAR_6, VAR_4, VAR_9))
    ;
  else
    return FUNC_10 (VAR_5, VAR_6,
          VAR_7 == VAR_2);

  return ((void*)0);
}
