
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int * l_recs; scalar_t__ l_next_free_rec; } ;
struct ocfs2_extent_block {int h_blkno; struct ocfs2_extent_list h_list; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {struct buffer_head* bh; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,char*,unsigned long long,unsigned long long,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_cached_dealloc_ctxt*,struct ocfs2_extent_block*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,struct buffer_head*) ;
 int FUNC_9 (struct ocfs2_path*) ;

__attribute__((used)) static void FUNC_10(handle_t *VAR_1,
         struct ocfs2_extent_tree *VAR_2,
         struct ocfs2_cached_dealloc_ctxt *VAR_3,
         struct ocfs2_path *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 struct ocfs2_extent_block *VAR_8;
 struct ocfs2_extent_list *VAR_9;
 struct buffer_head *VAR_10;

 for(VAR_7 = VAR_5; VAR_7 < FUNC_9(VAR_4); VAR_7++) {
  VAR_10 = VAR_4->p_node[VAR_7].bh;

  VAR_8 = (struct ocfs2_extent_block *)VAR_10->b_data;




  VAR_9 = &VAR_8->h_list;
  if (FUNC_0(VAR_9->l_next_free_rec) > 1) {
   FUNC_3(VAR_0,
        "Inode %llu, attempted to remove extent block "
        "%llu with %u records\n",
        (unsigned long long)FUNC_7(VAR_2->et_ci),
        (unsigned long long)FUNC_1(VAR_8->h_blkno),
        FUNC_0(VAR_9->l_next_free_rec));

   FUNC_6(VAR_1, VAR_10);
   FUNC_8(VAR_2->et_ci, VAR_10);
   continue;
  }

  VAR_9->l_next_free_rec = 0;
  FUNC_2(&VAR_9->l_recs[0], 0, sizeof(struct ocfs2_extent_rec));

  FUNC_6(VAR_1, VAR_10);

  VAR_6 = FUNC_5(VAR_3, VAR_8);
  if (VAR_6)
   FUNC_4(VAR_6);

  FUNC_8(VAR_2->et_ci, VAR_10);
 }
}
