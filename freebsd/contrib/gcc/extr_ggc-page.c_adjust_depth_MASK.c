
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ context_depth; } ;
typedef TYPE_1__ page_entry ;
struct TYPE_4__ {int by_depth_in_use; size_t depth_in_use; TYPE_1__** by_depth; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0 (void)
{
  page_entry *VAR_1;

  if (VAR_0.by_depth_in_use)
    {
      VAR_1 = VAR_0.by_depth[VAR_0.by_depth_in_use-1];




      while (VAR_0.depth_in_use > (size_t)VAR_1->context_depth+1)
 --VAR_0.depth_in_use;
    }
}
