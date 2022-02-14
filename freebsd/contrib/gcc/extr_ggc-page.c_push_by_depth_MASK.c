
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long page_entry ;
struct TYPE_2__ {size_t by_depth_in_use; size_t by_depth_max; unsigned long** by_depth; unsigned long** save_in_use; } ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (unsigned long**,int) ;

__attribute__((used)) inline static void
FUNC_1 (page_entry *VAR_1, unsigned long *VAR_2)
{
  if (VAR_0.by_depth_in_use >= VAR_0.by_depth_max)
    {
      VAR_0.by_depth_max *= 2;
      VAR_0.by_depth = FUNC_0 (VAR_0.by_depth,
        VAR_0.by_depth_max * sizeof (page_entry *));
      VAR_0.save_in_use = FUNC_0 (VAR_0.save_in_use,
    VAR_0.by_depth_max * sizeof (unsigned long *));
    }
  VAR_0.by_depth[VAR_0.by_depth_in_use] = VAR_1;
  VAR_0.save_in_use[VAR_0.by_depth_in_use++] = VAR_2;
}
