
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_path {TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int l_next_free_rec; TYPE_2__* l_recs; } ;
struct ocfs2_extent_block {scalar_t__ h_blkno; scalar_t__ h_next_leaf_blk; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ e_blkno; } ;
struct TYPE_3__ {struct buffer_head* bh; struct ocfs2_extent_list* el; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int *,struct buffer_head*) ;
 int FUNC_5 (int *,struct ocfs2_extent_tree*,struct ocfs2_cached_dealloc_ctxt*,struct ocfs2_path*,int) ;
 struct buffer_head* FUNC_6 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_7 (struct ocfs2_path*) ;

__attribute__((used)) static void FUNC_8(handle_t *VAR_0,
     struct ocfs2_extent_tree *VAR_1,
     struct ocfs2_path *VAR_2,
     struct ocfs2_path *VAR_3,
     int VAR_4,
     struct ocfs2_cached_dealloc_ctxt *VAR_5)
{
 int VAR_6;
 struct buffer_head *VAR_7 = VAR_2->p_node[VAR_4].bh;
 struct ocfs2_extent_list *VAR_8 = VAR_2->p_node[VAR_4].el;
 struct ocfs2_extent_list *VAR_9;
 struct ocfs2_extent_block *VAR_10;

 VAR_9 = FUNC_7(VAR_2);

 VAR_10 = (struct ocfs2_extent_block *)VAR_3->p_node[VAR_4 + 1].bh->b_data;

 for(VAR_6 = 1; VAR_6 < FUNC_2(VAR_8->l_next_free_rec); VAR_6++)
  if (VAR_8->l_recs[VAR_6].e_blkno == VAR_10->h_blkno)
   break;

 FUNC_0(VAR_6 >= FUNC_2(VAR_8->l_next_free_rec));

 FUNC_3(&VAR_8->l_recs[VAR_6], 0, sizeof(struct ocfs2_extent_rec));
 FUNC_1(&VAR_8->l_next_free_rec, -1);

 VAR_10 = (struct ocfs2_extent_block *)FUNC_6(VAR_2)->b_data;
 VAR_10->h_next_leaf_blk = 0;

 FUNC_4(VAR_0, VAR_7);
 FUNC_4(VAR_0, FUNC_6(VAR_2));

 FUNC_5(VAR_0, VAR_1, VAR_5, VAR_3,
     VAR_4 + 1);
}
