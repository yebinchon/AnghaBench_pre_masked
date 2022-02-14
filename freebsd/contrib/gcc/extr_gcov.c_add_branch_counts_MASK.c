
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int branches_taken; int branches_executed; int branches; int calls_executed; int calls; } ;
typedef TYPE_2__ coverage_t ;
struct TYPE_8__ {scalar_t__ count; TYPE_1__* src; int is_unconditional; scalar_t__ is_call_non_return; } ;
typedef TYPE_3__ arc_t ;
struct TYPE_6__ {scalar_t__ count; } ;



__attribute__((used)) static void
FUNC_0 (coverage_t *VAR_0, const arc_t *VAR_1)
{
  if (VAR_1->is_call_non_return)
    {
      VAR_0->calls++;
      if (VAR_1->src->count)
 VAR_0->calls_executed++;
    }
  else if (!VAR_1->is_unconditional)
    {
      VAR_0->branches++;
      if (VAR_1->src->count)
 VAR_0->branches_executed++;
      if (VAR_1->count)
 VAR_0->branches_taken++;
    }
}
