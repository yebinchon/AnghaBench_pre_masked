
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_sc_info {int dummy; } ;
struct nilfs_sb_info {int dummy; } ;
typedef int ino_t ;


 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 struct nilfs_sb_info* FUNC_1 (struct super_block*) ;
 struct nilfs_sc_info* FUNC_2 (struct nilfs_sb_info*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct nilfs_sc_info*,int ) ;

void FUNC_5(struct super_block *VAR_0, ino_t VAR_1)
{
 struct nilfs_sb_info *VAR_2 = FUNC_1(VAR_0);
 struct nilfs_sc_info *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3 || FUNC_3())
  return;
 FUNC_4(VAR_3, FUNC_0(VAR_0, VAR_1) ? VAR_1 : 0);

}
