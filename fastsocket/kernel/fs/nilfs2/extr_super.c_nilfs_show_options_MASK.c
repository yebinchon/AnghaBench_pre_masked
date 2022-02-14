
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct super_block* mnt_sb; } ;
struct super_block {int dummy; } ;
struct seq_file {int dummy; } ;
struct nilfs_sb_info {scalar_t__ s_snapshot_cno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nilfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct nilfs_sb_info*,int ) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_5, struct vfsmount *VAR_6)
{
 struct super_block *VAR_7 = VAR_6->mnt_sb;
 struct nilfs_sb_info *VAR_8 = FUNC_0(VAR_7);

 if (!FUNC_1(VAR_8, VAR_0))
  FUNC_2(VAR_5, ",barrier=off");
 if (FUNC_1(VAR_8, VAR_3))
  FUNC_2(VAR_5, ",cp=%llu",
      (unsigned long long int)VAR_8->s_snapshot_cno);
 if (FUNC_1(VAR_8, VAR_2))
  FUNC_2(VAR_5, ",errors=remount-ro");
 if (FUNC_1(VAR_8, VAR_1))
  FUNC_2(VAR_5, ",errors=panic");
 if (FUNC_1(VAR_8, VAR_4))
  FUNC_2(VAR_5, ",order=strict");

 return 0;
}
