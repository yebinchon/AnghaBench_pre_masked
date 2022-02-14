
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch {int dummy; } ;
typedef enum arm_float_model { ____Placeholder_arm_float_model } arm_float_model ;
struct TYPE_2__ {int fp_model; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct gdbarch*) ;

enum arm_float_model
FUNC_1 (struct gdbarch *VAR_2)
{
  if (VAR_1 == VAR_0)
    return FUNC_0 (VAR_2)->fp_model;

  return VAR_1;
}
