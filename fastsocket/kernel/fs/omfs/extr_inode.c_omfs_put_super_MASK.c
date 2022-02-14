
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct omfs_sb_info {struct omfs_sb_info* s_imap; } ;


 struct omfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct omfs_sb_info*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0)
{
 struct omfs_sb_info *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->s_imap);
 FUNC_1(VAR_1);
 VAR_0->s_fs_info = ((void*)0);
}
