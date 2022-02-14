
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef size_t u16 ;
struct super_block {int s_blocksize; } ;
struct ocfs2_group_desc {void* bg_bits; void* bg_free_bits_count; scalar_t__ bg_bitmap; void* bg_blkno; void* bg_parent_dinode; int bg_next_group; void* bg_chain; void* bg_size; int bg_generation; int bg_signature; } ;
struct ocfs2_chain_list {TYPE_1__* cl_recs; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_6__ {unsigned long long ip_blkno; } ;
struct TYPE_5__ {int fs_generation; } ;
struct TYPE_4__ {int c_blkno; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (unsigned long long) ;
 size_t FUNC_6 (void*) ;
 int FUNC_7 (struct ocfs2_group_desc*,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 size_t FUNC_11 (struct ocfs2_chain_list*) ;
 int FUNC_12 (struct super_block*,char*,unsigned long long,unsigned long long) ;
 size_t FUNC_13 (struct super_block*) ;
 int FUNC_14 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_15 (int *,struct buffer_head*) ;
 int FUNC_16 (int ,unsigned long*) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_3,
      struct inode *VAR_4,
      struct buffer_head *VAR_5,
      u64 VAR_6,
      u16 VAR_7,
      struct ocfs2_chain_list *VAR_8)
{
 int VAR_9 = 0;
 struct ocfs2_group_desc *VAR_10 = (struct ocfs2_group_desc *) VAR_5->b_data;
 struct super_block * VAR_11 = VAR_4->i_sb;

 FUNC_8();

 if (((unsigned long long) VAR_5->b_blocknr) != VAR_6) {
  FUNC_12(VAR_4->i_sb, "group block (%llu) != "
       "b_blocknr (%llu)",
       (unsigned long long)VAR_6,
       (unsigned long long) VAR_5->b_blocknr);
  VAR_9 = -VAR_0;
  goto bail;
 }

 VAR_9 = FUNC_14(VAR_3,
      FUNC_0(VAR_4),
      VAR_5,
      VAR_2);
 if (VAR_9 < 0) {
  FUNC_9(VAR_9);
  goto bail;
 }

 FUNC_7(VAR_10, 0, VAR_11->s_blocksize);
 FUNC_17(VAR_10->bg_signature, VAR_1);
 VAR_10->bg_generation = FUNC_4(FUNC_2(VAR_11)->fs_generation);
 VAR_10->bg_size = FUNC_3(FUNC_13(VAR_11));
 VAR_10->bg_bits = FUNC_3(FUNC_11(VAR_8));
 VAR_10->bg_chain = FUNC_3(VAR_7);
 VAR_10->bg_next_group = VAR_8->cl_recs[VAR_7].c_blkno;
 VAR_10->bg_parent_dinode = FUNC_5(FUNC_1(VAR_4)->ip_blkno);
 VAR_10->bg_blkno = FUNC_5(VAR_6);

 FUNC_16(0, (unsigned long *)VAR_10->bg_bitmap);
 VAR_10->bg_free_bits_count = FUNC_3(FUNC_6(VAR_10->bg_bits) - 1);

 VAR_9 = FUNC_15(VAR_3, VAR_5);
 if (VAR_9 < 0)
  FUNC_9(VAR_9);






bail:
 FUNC_10(VAR_9);
 return VAR_9;
}
