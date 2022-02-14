
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_tree_operations {int (* eo_fill_max_leaf_clusters ) (struct ocfs2_extent_tree*) ;int (* eo_fill_root_el ) (struct ocfs2_extent_tree*) ;} ;
struct ocfs2_extent_tree {struct ocfs2_extent_tree_operations* et_ops; scalar_t__ et_max_leaf_clusters; void* et_object; int et_root_journal_access; struct ocfs2_caching_info* et_ci; struct buffer_head* et_root_bh; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ocfs2_journal_access_func ;


 int FUNC_0 (struct ocfs2_extent_tree*) ;
 int FUNC_1 (struct ocfs2_extent_tree*) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_extent_tree *VAR_0,
         struct ocfs2_caching_info *VAR_1,
         struct buffer_head *VAR_2,
         ocfs2_journal_access_func VAR_3,
         void *VAR_4,
         struct ocfs2_extent_tree_operations *VAR_5)
{
 VAR_0->et_ops = VAR_5;
 VAR_0->et_root_bh = VAR_2;
 VAR_0->et_ci = VAR_1;
 VAR_0->et_root_journal_access = VAR_3;
 if (!VAR_4)
  VAR_4 = (void *)VAR_2->b_data;
 VAR_0->et_object = VAR_4;

 VAR_0->et_ops->eo_fill_root_el(VAR_0);
 if (!VAR_0->et_ops->eo_fill_max_leaf_clusters)
  VAR_0->et_max_leaf_clusters = 0;
 else
  VAR_0->et_ops->eo_fill_max_leaf_clusters(VAR_0);
}
