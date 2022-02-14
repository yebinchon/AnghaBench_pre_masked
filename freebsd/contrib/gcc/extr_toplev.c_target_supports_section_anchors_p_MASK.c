
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * output_anchor; } ;
struct TYPE_4__ {scalar_t__ min_anchor_offset; scalar_t__ max_anchor_offset; TYPE_1__ asm_out; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0 (void)
{
  if (VAR_0.min_anchor_offset == 0 && VAR_0.max_anchor_offset == 0)
    return 0;

  if (VAR_0.asm_out.output_anchor == ((void*)0))
    return 0;

  return 1;
}
