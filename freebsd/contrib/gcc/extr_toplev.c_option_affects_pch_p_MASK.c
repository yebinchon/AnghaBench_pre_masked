
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cl_option_state {int dummy; } ;
struct TYPE_4__ {int flags; int * flag_var; } ;
struct TYPE_3__ {scalar_t__ check_pch_target_flags; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int,struct cl_option_state*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static inline bool
FUNC_1 (int VAR_4, struct cl_option_state *VAR_5)
{
  if ((VAR_1[VAR_4].flags & VAR_0) == 0)
    return 0;
  if (VAR_1[VAR_4].flag_var == &VAR_2)
    if (VAR_3.check_pch_target_flags)
      return 0;
  return FUNC_0 (VAR_4, VAR_5);
}
