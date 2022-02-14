
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; void* s_magic; } ;
struct nilfs_super_block {int s_c_block_max; int s_c_interval; int s_def_resgid; int s_def_resuid; int s_magic; } ;
struct nilfs_sb_info {void* s_watermark; void* s_interval; void* s_resgid; void* s_resuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nilfs_sb_info* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct nilfs_sb_info*,struct nilfs_super_block*) ;
 int FUNC_4 (char*,struct super_block*) ;

int FUNC_5(struct super_block *VAR_2,
     struct nilfs_super_block *VAR_3,
     char *VAR_4)
{
 struct nilfs_sb_info *VAR_5 = FUNC_0(VAR_2);

 VAR_2->s_magic = FUNC_1(VAR_3->s_magic);






 FUNC_3(VAR_5, VAR_3);

 VAR_5->s_resuid = FUNC_1(VAR_3->s_def_resuid);
 VAR_5->s_resgid = FUNC_1(VAR_3->s_def_resgid);
 VAR_5->s_interval = FUNC_2(VAR_3->s_c_interval);
 VAR_5->s_watermark = FUNC_2(VAR_3->s_c_block_max);

 return !FUNC_4(VAR_4, VAR_2) ? -VAR_0 : 0 ;
}
