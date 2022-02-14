
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef unsigned int u16 ;
struct ocfs2_group_desc {int bg_free_bits_count; int bg_chain; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_alloc_context {int (* ac_group_search ) (struct inode*,struct buffer_head*,int ,int ,int ,unsigned int*,unsigned int*) ;TYPE_1__* ac_bh; int ac_max_block; struct inode* ac_inode; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int *,TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_4 (int *,struct inode*,struct ocfs2_group_desc*,struct buffer_head*,unsigned int,unsigned int) ;
 int FUNC_5 (struct inode*,struct ocfs2_dinode*,int ,struct buffer_head**) ;
 int FUNC_6 (struct inode*,struct buffer_head*,int ,int ,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_alloc_context *VAR_1,
      handle_t *VAR_2,
      u32 VAR_3,
      u32 VAR_4,
      u16 *VAR_5,
      unsigned int *VAR_6,
      u64 VAR_7,
      u16 *VAR_8)
{
 int VAR_9;
 u16 VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_group_desc *VAR_12;
 struct ocfs2_dinode *VAR_13 = (struct ocfs2_dinode *)VAR_1->ac_bh->b_data;
 struct inode *VAR_14 = VAR_1->ac_inode;

 VAR_9 = FUNC_5(VAR_14, VAR_13, VAR_7,
       &VAR_11);
 if (VAR_9 < 0) {
  FUNC_2(VAR_9);
  return VAR_9;
 }

 VAR_12 = (struct ocfs2_group_desc *) VAR_11->b_data;
 VAR_9 = VAR_1->ac_group_search(VAR_14, VAR_11, VAR_3, VAR_4,
      VAR_1->ac_max_block, VAR_5, &VAR_10);
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_0)
   FUNC_2(VAR_9);
  goto out;
 }

 *VAR_6 = VAR_10;

 VAR_9 = FUNC_3(VAR_14, VAR_2, VAR_1->ac_bh,
            *VAR_6,
            FUNC_1(VAR_12->bg_chain));
 if (VAR_9 < 0) {
  FUNC_2(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_4(VAR_2, VAR_14, VAR_12, VAR_11,
      *VAR_5, *VAR_6);
 if (VAR_9 < 0)
  FUNC_2(VAR_9);

 *VAR_8 = FUNC_1(VAR_12->bg_free_bits_count);

out:
 FUNC_0(VAR_11);

 return VAR_9;
}
