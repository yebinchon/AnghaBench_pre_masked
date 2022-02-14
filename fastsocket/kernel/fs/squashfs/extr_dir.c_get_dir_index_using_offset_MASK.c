
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {int directory_table; } ;
struct squashfs_dir_index {int start_block; int size; int index; } ;
typedef int dir_index ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,struct squashfs_dir_index*,int*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1,
 u64 *VAR_2, int *VAR_3, u64 VAR_4, int VAR_5,
 int VAR_6, u64 VAR_7)
{
 struct squashfs_sb_info *VAR_8 = VAR_1->s_fs_info;
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 struct squashfs_dir_index VAR_13;

 FUNC_0("Entered get_dir_index_using_offset, i_count %d, f_pos %lld\n",
     VAR_6, VAR_7);






 if (VAR_7 < 3)
  return VAR_7;
 VAR_7 -= 3;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9 = FUNC_2(VAR_1, &VAR_13, &VAR_4,
    &VAR_5, sizeof(VAR_13));
  if (VAR_9 < 0)
   break;

  VAR_11 = FUNC_1(VAR_13.index);
  if (VAR_11 > VAR_7)



   break;

  VAR_9 = FUNC_2(VAR_1, ((void*)0), &VAR_4,
    &VAR_5, FUNC_1(VAR_13.size) + 1);
  if (VAR_9 < 0)
   break;

  VAR_12 = VAR_11;
  *VAR_2 = FUNC_1(VAR_13.start_block) +
     VAR_8->directory_table;
 }

 *VAR_3 = (VAR_12 + *VAR_3) % VAR_0;




 return VAR_12 + 3;
}
