
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int constant; } ;
struct TYPE_7__ {int constant; } ;
struct TYPE_10__ {TYPE_3__ offset; TYPE_2__ slot_offset; } ;
struct assign_parm_data_one {scalar_t__ promoted_mode; int named_arg; scalar_t__ passed_mode; int partial; scalar_t__ entry_parm; TYPE_5__ locate; int passed_type; scalar_t__ stack_parm; } ;
struct assign_parm_data_all {scalar_t__ reg_parm_stack_space; int extra_pretend_bytes; int pretend_args_size; int stack_args_size; int args_so_far; } ;
typedef scalar_t__ rtx ;
struct TYPE_6__ {int (* arg_partial_bytes ) (int *,scalar_t__,int ,int) ;scalar_t__ (* must_pass_in_stack ) (scalar_t__,int ) ;scalar_t__ (* pretend_outgoing_varargs_named ) (int *) ;} ;
struct TYPE_9__ {TYPE_1__ calls; } ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ,int,int,int ,int *,TYPE_5__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *,scalar_t__,int ,int) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void
FUNC_8 (struct assign_parm_data_all *VAR_5,
       struct assign_parm_data_one *VAR_6)
{
  HOST_WIDE_INT VAR_7 = 0;
  rtx VAR_8;
  bool VAR_9;

  if (VAR_6->promoted_mode == VAR_1)
    {
      VAR_6->entry_parm = VAR_6->stack_parm = VAR_2;
      return;
    }





  VAR_8 = FUNC_1 (VAR_5->args_so_far, VAR_6->promoted_mode,
        VAR_6->passed_type, VAR_6->named_arg);


  if (VAR_8 == 0)
    VAR_6->promoted_mode = VAR_6->passed_mode;
  VAR_9 = VAR_8 != 0;



  if (!VAR_9 && !VAR_6->named_arg)
    {
      if (VAR_4.calls.pretend_outgoing_varargs_named (&VAR_5->args_so_far))
 {
   rtx VAR_10;




   VAR_10 = FUNC_1 (VAR_5->args_so_far, VAR_6->promoted_mode,
         VAR_6->passed_type, 1);

   VAR_9 = VAR_10 != ((void*)0);
 }
    }



  if (VAR_4.calls.must_pass_in_stack (VAR_6->promoted_mode,
     VAR_6->passed_type))
    VAR_8 = 0;

  if (VAR_8)
    {
      int VAR_11;

      VAR_11 = VAR_4.calls.arg_partial_bytes (&VAR_5->args_so_far,
       VAR_6->promoted_mode,
       VAR_6->passed_type,
       VAR_6->named_arg);
      VAR_6->partial = VAR_11;



      if (VAR_11 != 0 && VAR_5->reg_parm_stack_space == 0)
 {
   FUNC_3 (!VAR_5->extra_pretend_bytes && !VAR_5->pretend_args_size);

   VAR_7 = VAR_11;
   VAR_5->pretend_args_size = FUNC_0 (VAR_7, VAR_0);



   VAR_5->extra_pretend_bytes = VAR_5->pretend_args_size;
 }
    }

  FUNC_4 (VAR_6->promoted_mode, VAR_6->passed_type, VAR_9,
         VAR_8 ? VAR_6->partial : 0, VAR_3,
         &VAR_5->stack_args_size, &VAR_6->locate);


  VAR_7 = VAR_5->extra_pretend_bytes - VAR_7;
  VAR_6->locate.slot_offset.constant += VAR_7;
  VAR_6->locate.offset.constant += VAR_7;

  VAR_6->entry_parm = VAR_8;
}
