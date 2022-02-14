
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_super_block_third {int dummy; } ;
struct ufs_super_block_first {int fs_time; } ;
struct ufs_sb_private_info {int dummy; } ;
struct super_block {scalar_t__ s_dirt; } ;
struct TYPE_2__ {unsigned int s_flags; struct ufs_sb_private_info* s_uspi; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (struct super_block*,int ) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct super_block*) ;
 struct ufs_super_block_first* FUNC_7 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_third* FUNC_8 (struct ufs_sb_private_info*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*,struct ufs_super_block_first*,struct ufs_super_block_third*,scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (struct super_block*) ;

__attribute__((used)) static int FUNC_13(struct super_block *VAR_5, int VAR_6)
{
 struct ufs_sb_private_info * VAR_7;
 struct ufs_super_block_first * VAR_8;
 struct ufs_super_block_third * VAR_9;
 unsigned VAR_10;

 FUNC_6(VAR_5);
 FUNC_5();

 FUNC_0("ENTER\n");

 VAR_10 = FUNC_1(VAR_5)->s_flags;
 VAR_7 = FUNC_1(VAR_5)->s_uspi;
 VAR_8 = FUNC_7(VAR_7);
 VAR_9 = FUNC_8(VAR_7);

 VAR_8->fs_time = FUNC_2(VAR_5, FUNC_4());
 if ((VAR_10 & VAR_1) == VAR_2 ||
     (VAR_10 & VAR_1) == VAR_3 ||
     (VAR_10 & VAR_1) == VAR_4)
  FUNC_10(VAR_5, VAR_8, VAR_9,
    VAR_0 - FUNC_3(VAR_5, VAR_8->fs_time));
 FUNC_9(VAR_5);
 VAR_5->s_dirt = 0;

 FUNC_0("EXIT\n");
 FUNC_11();
 FUNC_12(VAR_5);

 return 0;
}
