
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct super_block {int s_blocksize; } ;
struct omfs_sb_info {unsigned int s_imap_size; scalar_t__ s_bitmap_ino; int s_bitmap_lock; int * s_imap; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct omfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct omfs_sb_info*,scalar_t__) ;
 unsigned int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct buffer_head* FUNC_7 (struct super_block*,scalar_t__) ;
 int FUNC_8 (unsigned int,unsigned long*) ;
 scalar_t__ FUNC_9 (unsigned int,int ) ;

int FUNC_10(struct super_block *VAR_0, u64 VAR_1)
{
 struct buffer_head *VAR_2;
 struct omfs_sb_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 8 * VAR_0->s_blocksize;
 unsigned int VAR_5, VAR_6;
 int VAR_7 = 0;
 u64 VAR_8;

 VAR_8 = VAR_1;
 VAR_6 = FUNC_3(VAR_8, VAR_4);
 VAR_5 = VAR_8;

 FUNC_5(&VAR_3->s_bitmap_lock);
 if (VAR_5 >= VAR_3->s_imap_size || FUNC_9(VAR_6, VAR_3->s_imap[VAR_5]))
  goto out;

 if (VAR_3->s_bitmap_ino > 0) {
  VAR_2 = FUNC_7(VAR_0, FUNC_2(VAR_3, VAR_3->s_bitmap_ino) + VAR_5);
  if (!VAR_2)
   goto out;

  FUNC_8(VAR_6, (unsigned long *)VAR_2->b_data);
  FUNC_4(VAR_2);
  FUNC_1(VAR_2);
 }
 VAR_7 = 1;
out:
 FUNC_6(&VAR_3->s_bitmap_lock);
 return VAR_7;
}
