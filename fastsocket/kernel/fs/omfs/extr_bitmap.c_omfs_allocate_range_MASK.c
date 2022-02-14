
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int s_blocksize; } ;
struct omfs_sb_info {int s_imap_size; int s_bitmap_lock; int * s_imap; } ;


 int VAR_0 ;
 struct omfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int,int,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,int,int,int,int,int) ;

int FUNC_6(struct super_block *VAR_1,
   int VAR_2,
   int VAR_3,
   u64 *VAR_4,
   int *VAR_5)
{
 struct omfs_sb_info *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = 8 * VAR_1->s_blocksize;
 int VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11;

 FUNC_3(&VAR_6->s_bitmap_lock);
 for (VAR_9 = 0; VAR_9 < VAR_6->s_imap_size; VAR_9++) {
  VAR_11 = 0;
  while (VAR_11 < VAR_7) {
   VAR_11 = FUNC_2(VAR_6->s_imap[VAR_9], VAR_7,
    VAR_11);

   if (VAR_11 == VAR_7)
    break;

   VAR_10 = FUNC_1(&VAR_6->s_imap[VAR_9], VAR_7,
    VAR_6->s_imap_size-VAR_9, VAR_11, VAR_3);

   if (VAR_10 >= VAR_2)
    goto found;
   VAR_11 += VAR_10;
  }
 }
 VAR_8 = -VAR_0;
 goto out;

found:
 *VAR_4 = VAR_9 * VAR_7 + VAR_11;
 *VAR_5 = VAR_10;
 VAR_8 = FUNC_5(VAR_1, VAR_9, VAR_7, VAR_11, VAR_10, 1);

out:
 FUNC_4(&VAR_6->s_bitmap_lock);
 return VAR_8;
}
