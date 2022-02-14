
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
struct assign_parm_data_one {int named_arg; int passed_pointer; int nominal_mode; int passed_mode; int promoted_mode; int * passed_type; int * nominal_type; } ;
struct assign_parm_data_all {int args_so_far; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ (* promote_function_args ) (int *) ;scalar_t__ (* strict_argument_naming ) (int *) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 int * FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_3 ;
 int * FUNC_9 (int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_10 (struct assign_parm_data_one*,int ,int) ;
 scalar_t__ FUNC_11 (int *,int,int *,int) ;
 int FUNC_12 (int *,int,int*,int) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 TYPE_2__ VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void
FUNC_15 (struct assign_parm_data_all *VAR_9, tree VAR_10,
        struct assign_parm_data_one *VAR_11)
{
  tree VAR_12, VAR_13;
  enum machine_mode VAR_14, VAR_15, VAR_16;

  FUNC_10 (VAR_11, 0, sizeof (*VAR_11));


  if (!VAR_5)
    VAR_11->named_arg = 1;
  else if (FUNC_1 (VAR_10))
    VAR_11->named_arg = 1;
  else if (VAR_7.calls.strict_argument_naming (&VAR_9->args_so_far))
    VAR_11->named_arg = 1;
  else
    VAR_11->named_arg = 0;

  VAR_12 = FUNC_3 (VAR_10);
  VAR_13 = FUNC_0 (VAR_10);



  if (FUNC_3 (VAR_10) == VAR_6


      || FUNC_2 (VAR_10) != VAR_0
      || VAR_13 == ((void*)0)
      || FUNC_8 (VAR_12))
    {
      VAR_12 = VAR_13 = VAR_8;
      VAR_14 = VAR_15 = VAR_16 = VAR_3;
      goto egress;
    }



  VAR_15 = FUNC_5 (VAR_13);
  VAR_14 = FUNC_5 (VAR_12);




  if (FUNC_2 (VAR_13) == VAR_2
      && FUNC_6 (VAR_13))
    VAR_13 = FUNC_3 (FUNC_4 (VAR_13));


  if (FUNC_11 (&VAR_9->args_so_far, VAR_15,
    VAR_13, VAR_11->named_arg))
    {
      VAR_13 = VAR_12 = FUNC_9 (VAR_13);
      VAR_11->passed_pointer = 1;
      VAR_15 = VAR_14 = VAR_1;
    }


  VAR_16 = VAR_15;
  if (VAR_7.calls.promote_function_args (FUNC_3 (VAR_4)))
    {
      int VAR_17 = FUNC_7 (VAR_13);
      VAR_16 = FUNC_12 (VAR_13, VAR_16,
        &VAR_17, 1);
    }

 egress:
  VAR_11->nominal_type = VAR_12;
  VAR_11->passed_type = VAR_13;
  VAR_11->nominal_mode = VAR_14;
  VAR_11->passed_mode = VAR_15;
  VAR_11->promoted_mode = VAR_16;
}
