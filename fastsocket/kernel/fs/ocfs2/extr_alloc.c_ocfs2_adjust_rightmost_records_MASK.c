
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {int p_tree_depth; TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_cpos; int e_int_clusters; int e_leaf_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {struct ocfs2_extent_list* el; struct buffer_head* bh; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,unsigned long long) ;
 int FUNC_5 (int *,struct buffer_head*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(handle_t *VAR_1,
        struct ocfs2_extent_tree *VAR_2,
        struct ocfs2_path *VAR_3,
        struct ocfs2_extent_rec *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct buffer_head *VAR_8;
 struct ocfs2_extent_list *VAR_9;
 struct ocfs2_extent_rec *VAR_10;




 for (VAR_6 = 0; VAR_6 < VAR_3->p_tree_depth; VAR_6++) {
  VAR_8 = VAR_3->p_node[VAR_6].bh;
  VAR_9 = VAR_3->p_node[VAR_6].el;

  VAR_7 = FUNC_0(VAR_9->l_next_free_rec);
  if (VAR_7 == 0) {
   FUNC_4(FUNC_6(VAR_2->et_ci),
        "Owner %llu has a bad extent list",
        (unsigned long long)FUNC_7(VAR_2->et_ci));
   VAR_5 = -VAR_0;
   return;
  }

  VAR_10 = &VAR_9->l_recs[VAR_7 - 1];

  VAR_10->e_int_clusters = VAR_4->e_cpos;
  FUNC_1(&VAR_10->e_int_clusters,
        FUNC_0(VAR_4->e_leaf_clusters));
  FUNC_1(&VAR_10->e_int_clusters,
        -FUNC_2(VAR_10->e_cpos));

  VAR_5 = FUNC_5(VAR_1, VAR_8);
  if (VAR_5)
   FUNC_3(VAR_5);

 }
}
