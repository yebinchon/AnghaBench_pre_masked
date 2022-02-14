
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* ci_array; } ;
struct ocfs2_caching_info {size_t ci_num_cached; TYPE_1__ ci_cache; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,char*,unsigned long long,size_t) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_caching_info *VAR_1,
         sector_t VAR_2)
{
 FUNC_0(VAR_1->ci_num_cached >= VAR_0);

 FUNC_1(0, "block %llu takes position %u\n", (unsigned long long) VAR_2,
      VAR_1->ci_num_cached);

 VAR_1->ci_cache.ci_array[VAR_1->ci_num_cached] = VAR_2;
 VAR_1->ci_num_cached++;
}
