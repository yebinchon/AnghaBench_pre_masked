
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {int * fragment_index; } ;
struct squashfs_fragment_entry {int size; int start_block; } ;
typedef int fragment_entry ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*,struct squashfs_fragment_entry*,int *,int*,int) ;

int FUNC_5(struct super_block *VAR_0, unsigned int VAR_1,
    u64 *VAR_2)
{
 struct squashfs_sb_info *VAR_3 = VAR_0->s_fs_info;
 int VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = FUNC_1(VAR_1);
 u64 VAR_6 = FUNC_3(VAR_3->fragment_index[VAR_4]);
 struct squashfs_fragment_entry VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_0, &VAR_7, &VAR_6,
     &VAR_5, sizeof(VAR_7));
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_2 = FUNC_3(VAR_7.start_block);
 VAR_8 = FUNC_2(VAR_7.size);

 return VAR_8;
}
