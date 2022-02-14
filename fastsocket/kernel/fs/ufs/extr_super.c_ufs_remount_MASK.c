
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_super_block_third {int dummy; } ;
struct ufs_super_block_first {int fs_time; } ;
struct ufs_sb_private_info {int dummy; } ;
struct super_block {int s_flags; scalar_t__ s_dirt; } ;
struct TYPE_2__ {unsigned int s_flags; unsigned int s_mount_opt; struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_1 (struct ufs_sb_private_info*) ;
 int FUNC_2 (struct super_block*,int ) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (char*) ;
 struct ufs_super_block_first* FUNC_8 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_third* FUNC_9 (struct ufs_sb_private_info*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,unsigned int*) ;
 int FUNC_12 (struct super_block*) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct super_block*,struct ufs_super_block_first*,struct ufs_super_block_third*,scalar_t__) ;
 int FUNC_15 (unsigned int,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (struct super_block*) ;

__attribute__((used)) static int FUNC_18 (struct super_block *VAR_15, int *VAR_16, char *VAR_17)
{
 struct ufs_sb_private_info * VAR_18;
 struct ufs_super_block_first * VAR_19;
 struct ufs_super_block_third * VAR_20;
 unsigned VAR_21, VAR_22;
 unsigned VAR_23;

 FUNC_5();
 FUNC_6(VAR_15);
 VAR_18 = FUNC_0(VAR_15)->s_uspi;
 VAR_23 = FUNC_0(VAR_15)->s_flags;
 VAR_19 = FUNC_8(VAR_18);
 VAR_20 = FUNC_9(VAR_18);





 VAR_22 = FUNC_0(VAR_15)->s_mount_opt & VAR_5;
 VAR_21 = 0;
 FUNC_15 (VAR_21, VAR_3);
 if (!FUNC_11 (VAR_17, &VAR_21)) {
  FUNC_17(VAR_15);
  FUNC_16();
  return -VAR_0;
 }
 if (!(VAR_21 & VAR_5)) {
  VAR_21 |= VAR_22;
 } else if ((VAR_21 & VAR_5) != VAR_22) {
  FUNC_7("ufstype can't be changed during remount\n");
  FUNC_17(VAR_15);
  FUNC_16();
  return -VAR_0;
 }

 if ((*VAR_16 & VAR_2) == (VAR_15->s_flags & VAR_2)) {
  FUNC_0(VAR_15)->s_mount_opt = VAR_21;
  FUNC_17(VAR_15);
  FUNC_16();
  return 0;
 }




 if (*VAR_16 & VAR_2) {
  FUNC_12(VAR_15);
  VAR_19->fs_time = FUNC_2(VAR_15, FUNC_4());
  if ((VAR_23 & VAR_11) == VAR_12
    || (VAR_23 & VAR_11) == VAR_13
    || (VAR_23 & VAR_11) == VAR_14)
   FUNC_14(VAR_15, VAR_19, VAR_20,
    VAR_4 - FUNC_3(VAR_15, VAR_19->fs_time));
  FUNC_10 (FUNC_1(VAR_18));
  VAR_15->s_dirt = 0;
  VAR_15->s_flags |= VAR_2;
 } else {




  FUNC_7("ufs was compiled with read-only support, "
  "can't be mounted as read-write\n");
  FUNC_17(VAR_15);
  FUNC_16();
  return -VAR_0;
 }
 FUNC_0(VAR_15)->s_mount_opt = VAR_21;
 FUNC_17(VAR_15);
 FUNC_16();
 return 0;
}
