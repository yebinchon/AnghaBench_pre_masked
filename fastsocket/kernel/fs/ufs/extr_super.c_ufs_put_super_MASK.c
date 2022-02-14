
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_sb_info {struct ufs_sb_info* s_uspi; } ;
struct super_block {int s_flags; int * s_fs_info; scalar_t__ s_dirt; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct ufs_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct ufs_sb_info*) ;
 int FUNC_3 (struct ufs_sb_info*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_1)
{
 struct ufs_sb_info * VAR_2 = FUNC_1(VAR_1);

 FUNC_0("ENTER\n");

 if (VAR_1->s_dirt)
  FUNC_5(VAR_1);

 if (!(VAR_1->s_flags & VAR_0))
  FUNC_4(VAR_1);

 FUNC_3 (VAR_2->s_uspi);
 FUNC_2 (VAR_2->s_uspi);
 FUNC_2 (VAR_2);
 VAR_1->s_fs_info = ((void*)0);
 FUNC_0("EXIT\n");
 return;
}
