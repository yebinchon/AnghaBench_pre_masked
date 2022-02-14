
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* src; scalar_t__ count; TYPE_1__* dst; scalar_t__ fall_through; int is_unconditional; scalar_t__ is_call_non_return; } ;
typedef TYPE_3__ arc_t ;
struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_5__ {int is_call_return; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2 (FILE *VAR_2, int VAR_3, const arc_t *VAR_4)
{

  if (VAR_4->is_call_non_return)
    {
      if (VAR_4->src->count)
 {
   FUNC_0 (VAR_2, "call   %2d returned %s\n", VAR_3,
     FUNC_1 (VAR_4->src->count - VAR_4->count,
    VAR_4->src->count, -VAR_0));
 }
      else
 FUNC_0 (VAR_2, "call   %2d never executed\n", VAR_3);
    }
  else if (!VAR_4->is_unconditional)
    {
      if (VAR_4->src->count)
 FUNC_0 (VAR_2, "branch %2d taken %s%s\n", VAR_3,
   FUNC_1 (VAR_4->count, VAR_4->src->count, -VAR_0),
   VAR_4->fall_through ? " (fallthrough)" : "");
      else
 FUNC_0 (VAR_2, "branch %2d never executed\n", VAR_3);
    }
  else if (VAR_1 && !VAR_4->dst->is_call_return)
    {
      if (VAR_4->src->count)
 FUNC_0 (VAR_2, "unconditional %2d taken %s\n", VAR_3,
   FUNC_1 (VAR_4->count, VAR_4->src->count, -VAR_0));
      else
 FUNC_0 (VAR_2, "unconditional %2d never executed\n", VAR_3);
    }
  else
    return 0;
  return 1;

}
