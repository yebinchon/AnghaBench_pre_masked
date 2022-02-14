
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {void* l_next_free_rec; void* l_count; scalar_t__ l_tree_depth; } ;
struct ocfs2_xattr_tree_root {TYPE_2__ xt_list; scalar_t__ xt_last_eb_blk; void* xt_clusters; } ;
struct TYPE_6__ {struct ocfs2_xattr_tree_root xb_root; } ;
struct ocfs2_xattr_block {void* xb_flags; TYPE_1__ xb_attrs; void* xb_blkno; void* xb_fs_generation; void* xb_suballoc_bit; void* xb_suballoc_slot; } ;
struct ocfs2_super {int slot_num; int fs_generation; } ;
struct ocfs2_dinode {void* i_xattr_loc; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {TYPE_3__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_8__ {int s_blocksize; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct ocfs2_xattr_block*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,int,int*,int *,int *) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_11 (int *,struct buffer_head*) ;
 int FUNC_12 (int ,struct buffer_head*) ;
 int FUNC_13 (TYPE_3__*) ;
 struct buffer_head* FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (void*,int ) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_3,
        struct inode *VAR_4,
        struct buffer_head *VAR_5,
        struct ocfs2_alloc_context *VAR_6,
        struct buffer_head **VAR_7,
        int VAR_8)
{
 int VAR_9;
 u16 VAR_10;
 u32 VAR_11;
 u64 VAR_12;
 struct ocfs2_dinode *VAR_13 = (struct ocfs2_dinode *)VAR_5->b_data;
 struct ocfs2_super *VAR_14 = FUNC_1(VAR_4->i_sb);
 struct buffer_head *VAR_15 = ((void*)0);
 struct ocfs2_xattr_block *VAR_16;

 VAR_9 = FUNC_9(VAR_3, FUNC_0(VAR_4), VAR_5,
          VAR_0);
 if (VAR_9 < 0) {
  FUNC_7(VAR_9);
  goto end;
 }

 VAR_9 = FUNC_8(VAR_14, VAR_3, VAR_6, 1,
       &VAR_10, &VAR_11,
       &VAR_12);
 if (VAR_9 < 0) {
  FUNC_7(VAR_9);
  goto end;
 }

 VAR_15 = FUNC_14(VAR_4->i_sb, VAR_12);
 FUNC_12(FUNC_0(VAR_4), VAR_15);

 VAR_9 = FUNC_10(VAR_3, FUNC_0(VAR_4),
          VAR_15,
          VAR_0);
 if (VAR_9 < 0) {
  FUNC_7(VAR_9);
  goto end;
 }


 VAR_16 = (struct ocfs2_xattr_block *)VAR_15->b_data;
 FUNC_6(VAR_16, 0, VAR_4->i_sb->s_blocksize);
 FUNC_15((void *)VAR_16, VAR_1);
 VAR_16->xb_suballoc_slot = FUNC_3(VAR_14->slot_num);
 VAR_16->xb_suballoc_bit = FUNC_3(VAR_10);
 VAR_16->xb_fs_generation = FUNC_4(VAR_14->fs_generation);
 VAR_16->xb_blkno = FUNC_5(VAR_12);

 if (VAR_8) {
  struct ocfs2_xattr_tree_root *VAR_17 = &VAR_16->xb_attrs.xb_root;
  VAR_17->xt_clusters = FUNC_4(1);
  VAR_17->xt_last_eb_blk = 0;
  VAR_17->xt_list.l_tree_depth = 0;
  VAR_17->xt_list.l_count = FUNC_3(
     FUNC_13(VAR_4->i_sb));
  VAR_17->xt_list.l_next_free_rec = FUNC_3(1);
  VAR_16->xb_flags = FUNC_3(VAR_2);
 }

 VAR_9 = FUNC_11(VAR_3, VAR_15);
 if (VAR_9 < 0) {
  FUNC_7(VAR_9);
  goto end;
 }
 VAR_13->i_xattr_loc = FUNC_5(VAR_12);
 FUNC_11(VAR_3, VAR_5);

 *VAR_7 = VAR_15;
 VAR_15 = ((void*)0);

end:
 FUNC_2(VAR_15);
 return VAR_9;
}
