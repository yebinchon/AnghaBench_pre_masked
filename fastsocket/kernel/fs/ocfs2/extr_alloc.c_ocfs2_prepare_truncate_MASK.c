
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_truncate_context {struct buffer_head* tc_last_eb_bh; int tc_dealloc; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_block {int dummy; } ;
struct TYPE_3__ {scalar_t__ l_tree_depth; } ;
struct TYPE_4__ {TYPE_1__ i_list; } ;
struct ocfs2_dinode {int i_last_eb_blk; TYPE_2__ id2; int i_size; int i_clusters; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct ocfs2_truncate_context* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,unsigned int,unsigned long long) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 unsigned int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct ocfs2_truncate_context*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,scalar_t__,struct buffer_head**) ;

int FUNC_13(struct ocfs2_super *VAR_2,
      struct inode *VAR_3,
      struct buffer_head *VAR_4,
      struct ocfs2_truncate_context **VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 struct ocfs2_dinode *VAR_8;
 struct ocfs2_extent_block *VAR_9;
 struct buffer_head *VAR_10 = ((void*)0);

 FUNC_6();

 *VAR_5 = ((void*)0);

 VAR_7 = FUNC_9(VAR_2->sb,
        FUNC_1(VAR_3));
 VAR_8 = (struct ocfs2_dinode *) VAR_4->b_data;

 FUNC_5(0, "fe->i_clusters = %u, new_i_clusters = %u, fe->i_size ="
      "%llu\n", FUNC_3(VAR_8->i_clusters), VAR_7,
      (unsigned long long)FUNC_4(VAR_8->i_size));

 *VAR_5 = FUNC_2(sizeof(struct ocfs2_truncate_context), VAR_1);
 if (!(*VAR_5)) {
  VAR_6 = -VAR_0;
  FUNC_7(VAR_6);
  goto bail;
 }
 FUNC_11(&(*VAR_5)->tc_dealloc);

 if (VAR_8->id2.i_list.l_tree_depth) {
  VAR_6 = FUNC_12(FUNC_0(VAR_3),
       FUNC_4(VAR_8->i_last_eb_blk),
       &VAR_10);
  if (VAR_6 < 0) {
   FUNC_7(VAR_6);
   goto bail;
  }
  VAR_9 = (struct ocfs2_extent_block *) VAR_10->b_data;
 }

 (*VAR_5)->tc_last_eb_bh = VAR_10;

 VAR_6 = 0;
bail:
 if (VAR_6 < 0) {
  if (*VAR_5)
   FUNC_10(*VAR_5);
  *VAR_5 = ((void*)0);
 }
 FUNC_8();
 return VAR_6;
}
