
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_meta_cache_item {int c_node; scalar_t__ c_block; } ;
struct TYPE_2__ {int ci_tree; } ;
struct ocfs2_caching_info {int ci_num_cached; TYPE_1__ ci_cache; } ;


 int FUNC_0 (int ,char*,unsigned long long) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_caching_info *VAR_0,
           struct ocfs2_meta_cache_item *VAR_1)
{
 FUNC_0(0, "remove block %llu from tree\n",
      (unsigned long long) VAR_1->c_block);

 FUNC_1(&VAR_1->c_node, &VAR_0->ci_cache.ci_tree);
 VAR_0->ci_num_cached--;
}
