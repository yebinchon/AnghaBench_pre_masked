
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_cached_block_free {struct ocfs2_cached_block_free* free_next; int free_bit; scalar_t__ free_blk; } ;
struct inode {int i_mutex; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct ocfs2_cached_block_free*) ;
 int FUNC_5 (int ,char*,int ,unsigned long long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,struct inode*,struct buffer_head*,int ,int ,int) ;
 struct inode* FUNC_12 (struct ocfs2_super*,int,int) ;
 int FUNC_13 (struct inode*,struct buffer_head**,int) ;
 int FUNC_14 (struct inode*,int) ;
 int * FUNC_15 (struct ocfs2_super*,int ) ;
 int FUNC_16 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_17(struct ocfs2_super *VAR_2,
        int VAR_3,
        int VAR_4,
        struct ocfs2_cached_block_free *VAR_5)
{
 int VAR_6;
 u64 VAR_7;
 handle_t *VAR_8;
 struct inode *VAR_9;
 struct buffer_head *VAR_10 = ((void*)0);
 struct ocfs2_cached_block_free *VAR_11;

 VAR_9 = FUNC_12(VAR_2, VAR_3, VAR_4);
 if (!VAR_9) {
  VAR_6 = -VAR_0;
  FUNC_6(VAR_6);
  goto out;
 }

 FUNC_7(&VAR_9->i_mutex);

 VAR_6 = FUNC_13(VAR_9, &VAR_10, 1);
 if (VAR_6) {
  FUNC_6(VAR_6);
  goto out_mutex;
 }

 VAR_8 = FUNC_15(VAR_2, VAR_1);
 if (FUNC_0(VAR_8)) {
  VAR_6 = FUNC_1(VAR_8);
  FUNC_6(VAR_6);
  goto out_unlock;
 }

 while (VAR_5) {
  VAR_7 = FUNC_16(VAR_5->free_blk,
            VAR_5->free_bit);
  FUNC_5(0, "Free bit: (bit %u, blkno %llu)\n",
       VAR_5->free_bit, (unsigned long long)VAR_5->free_blk);

  VAR_6 = FUNC_11(VAR_8, VAR_9, VAR_10,
            VAR_5->free_bit, VAR_7, 1);
  if (VAR_6) {
   FUNC_6(VAR_6);
   goto out_journal;
  }

  VAR_6 = FUNC_10(VAR_8, VAR_1);
  if (VAR_6) {
   FUNC_6(VAR_6);
   goto out_journal;
  }

  VAR_11 = VAR_5;
  VAR_5 = VAR_5->free_next;
  FUNC_4(VAR_11);
 }

out_journal:
 FUNC_9(VAR_2, VAR_8);

out_unlock:
 FUNC_14(VAR_9, 1);
 FUNC_2(VAR_10);
out_mutex:
 FUNC_8(&VAR_9->i_mutex);
 FUNC_3(VAR_9);
out:
 while(VAR_5) {

  VAR_11 = VAR_5;
  VAR_5 = VAR_5->free_next;
  FUNC_4(VAR_11);
 }

 return VAR_6;
}
