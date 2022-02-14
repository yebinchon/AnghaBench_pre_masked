
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ref {int prefetch_before; int prefetch_mod; TYPE_1__* group; } ;
struct TYPE_2__ {int step; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0 (struct mem_ref *VAR_3)
{
  HOST_WIDE_INT VAR_4 = VAR_3->group->step;
  bool VAR_5 = VAR_4 < 0;

  if (VAR_4 == 0)
    {

      VAR_3->prefetch_before = 1;
      return;
    }

  if (VAR_5)
    VAR_4 = -VAR_4;

  if (VAR_4 > VAR_2)
    return;

  if ((VAR_5 && VAR_0)
      || (!VAR_5 && VAR_1))
    {
      VAR_3->prefetch_before = 1;
      return;
    }

  VAR_3->prefetch_mod = VAR_2 / VAR_4;
}
