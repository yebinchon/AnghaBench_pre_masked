
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct super_block {int s_blocksize; } ;
struct omfs_sb_info {unsigned int s_imap_size; int s_bitmap_lock; } ;


 struct omfs_sb_info* FUNC_0 (struct super_block*) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct super_block*,unsigned int,int,unsigned int,int,int ) ;

int FUNC_5(struct super_block *VAR_0, u64 VAR_1, int VAR_2)
{
 struct omfs_sb_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 8 * VAR_0->s_blocksize;
 u64 VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_1;
 VAR_7 = FUNC_1(VAR_5, VAR_4);
 VAR_6 = VAR_5;

 if (VAR_6 >= VAR_3->s_imap_size)
  return 0;

 FUNC_2(&VAR_3->s_bitmap_lock);
 VAR_8 = FUNC_4(VAR_0, VAR_6, VAR_4, VAR_7, VAR_2, 0);
 FUNC_3(&VAR_3->s_bitmap_lock);
 return VAR_8;
}
