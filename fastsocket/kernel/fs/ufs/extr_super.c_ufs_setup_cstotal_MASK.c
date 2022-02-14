
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int cs_nffree; int cs_nifree; } ;
struct TYPE_10__ {TYPE_3__ fs_u2; } ;
struct ufs_super_block_third {TYPE_4__ fs_un1; } ;
struct TYPE_7__ {int cs_nbfree; int cs_ndir; } ;
struct TYPE_8__ {TYPE_1__ fs_u2; } ;
struct ufs_super_block_second {TYPE_2__ fs_un; } ;
struct TYPE_12__ {int cs_nffree; int cs_nifree; int cs_nbfree; int cs_ndir; } ;
struct ufs_super_block_first {int fs_flags; TYPE_6__ fs_cstotal; } ;
struct TYPE_11__ {void* cs_nffree; void* cs_nifree; void* cs_nbfree; void* cs_ndir; } ;
struct ufs_sb_private_info {TYPE_5__ cs_total; } ;
struct ufs_sb_info {unsigned int s_mount_opt; struct ufs_sb_private_info* s_uspi; } ;
struct super_block {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct ufs_sb_info* FUNC_1 (struct super_block*) ;
 void* FUNC_2 (struct super_block*,int ) ;
 void* FUNC_3 (struct super_block*,int ) ;
 struct ufs_super_block_first* FUNC_4 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_second* FUNC_5 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_third* FUNC_6 (struct ufs_sb_private_info*) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_4)
{
 struct ufs_sb_info *VAR_5 = FUNC_1(VAR_4);
 struct ufs_sb_private_info *VAR_6 = VAR_5->s_uspi;
 struct ufs_super_block_first *VAR_7;
 struct ufs_super_block_second *VAR_8;
 struct ufs_super_block_third *VAR_9;
 unsigned VAR_10 = VAR_5->s_mount_opt & VAR_1;

 FUNC_0("ENTER, mtype=%u\n", VAR_10);
 VAR_7 = FUNC_4(VAR_6);
 VAR_8 = FUNC_5(VAR_6);
 VAR_9 = FUNC_6(VAR_6);

 if ((VAR_10 == VAR_2 &&
      (VAR_7->fs_flags & VAR_0)) ||
     VAR_10 == VAR_3) {

  VAR_6->cs_total.cs_ndir = FUNC_3(VAR_4, VAR_8->fs_un.fs_u2.cs_ndir);
  VAR_6->cs_total.cs_nbfree = FUNC_3(VAR_4, VAR_8->fs_un.fs_u2.cs_nbfree);
  VAR_6->cs_total.cs_nifree = FUNC_3(VAR_4, VAR_9->fs_un1.fs_u2.cs_nifree);
  VAR_6->cs_total.cs_nffree = FUNC_3(VAR_4, VAR_9->fs_un1.fs_u2.cs_nffree);
 } else {
  VAR_6->cs_total.cs_ndir = FUNC_2(VAR_4, VAR_7->fs_cstotal.cs_ndir);
  VAR_6->cs_total.cs_nbfree = FUNC_2(VAR_4, VAR_7->fs_cstotal.cs_nbfree);
  VAR_6->cs_total.cs_nifree = FUNC_2(VAR_4, VAR_7->fs_cstotal.cs_nifree);
  VAR_6->cs_total.cs_nffree = FUNC_2(VAR_4, VAR_7->fs_cstotal.cs_nffree);
 }
 FUNC_0("EXIT\n");
}
