
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
struct data_reference {int dummy; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum dr_alignment_support { ____Placeholder_dr_alignment_support } dr_alignment_support ;
struct TYPE_12__ {TYPE_3__* handlers; } ;
struct TYPE_8__ {scalar_t__ (* builtin_mask_for_load ) () ;} ;
struct TYPE_11__ {TYPE_2__ vectorize; } ;
struct TYPE_10__ {TYPE_1__* handlers; } ;
struct TYPE_9__ {scalar_t__ insn_code; } ;
struct TYPE_7__ {scalar_t__ insn_code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct data_reference*) ;
 int FUNC_1 (struct data_reference*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct data_reference*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 scalar_t__ FUNC_5 () ;
 TYPE_5__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_6 (int ) ;

enum dr_alignment_support
FUNC_7 (struct data_reference *VAR_8)
{
  tree VAR_9 = FUNC_2 (FUNC_6 (FUNC_1 (VAR_8)));
  enum machine_mode VAR_10 = (int) FUNC_3 (VAR_9);

  if (FUNC_4 (VAR_8))
    return VAR_1;



  if (FUNC_0 (VAR_8))
    {
      if (VAR_7->handlers[VAR_10].insn_code != VAR_0
   && (!VAR_6.vectorize.builtin_mask_for_load
       || VAR_6.vectorize.builtin_mask_for_load ()))
 return VAR_2;

      if (VAR_5->handlers[VAR_10].insn_code != VAR_0)

 return VAR_3;
    }


  return VAR_4;
}
