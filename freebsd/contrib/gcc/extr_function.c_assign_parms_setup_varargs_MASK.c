
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct assign_parm_data_one {int passed_type; int promoted_mode; } ;
struct assign_parm_data_all {int pretend_args_size; int args_so_far; } ;
struct TYPE_3__ {int (* setup_incoming_varargs ) (int *,int ,int ,int*,int) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 int FUNC_0 (int *,int ,int ,int*,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct assign_parm_data_all *VAR_1,
       struct assign_parm_data_one *VAR_2, bool VAR_3)
{
  int VAR_4 = 0;

  VAR_0.calls.setup_incoming_varargs (&VAR_1->args_so_far,
     VAR_2->promoted_mode,
     VAR_2->passed_type,
     &VAR_4, VAR_3);




  if (VAR_4 > 0)
    VAR_1->pretend_args_size = VAR_4;
}
