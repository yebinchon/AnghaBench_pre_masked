
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* ci_array; } ;
struct ocfs2_caching_info {int ci_num_cached; TYPE_1__ ci_cache; } ;
typedef scalar_t__ sector_t ;



__attribute__((used)) static int FUNC_0(struct ocfs2_caching_info *VAR_0,
        sector_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->ci_num_cached; VAR_2++) {
  if (VAR_1 == VAR_0->ci_cache.ci_array[VAR_2])
   return VAR_2;
 }

 return -1;
}
