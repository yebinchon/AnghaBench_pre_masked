
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {TYPE_2__* mnt_sb; } ;
struct TYPE_3__ {int unmount_mode; int bulk_read; int chk_data_crc; int compr_type; scalar_t__ override_compr; } ;
struct ubifs_info {TYPE_1__ mount_opts; } ;
struct seq_file {int dummy; } ;
struct TYPE_4__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, struct vfsmount *VAR_1)
{
 struct ubifs_info *VAR_2 = VAR_1->mnt_sb->s_fs_info;

 if (VAR_2->mount_opts.unmount_mode == 2)
  FUNC_0(VAR_0, ",fast_unmount");
 else if (VAR_2->mount_opts.unmount_mode == 1)
  FUNC_0(VAR_0, ",norm_unmount");

 if (VAR_2->mount_opts.bulk_read == 2)
  FUNC_0(VAR_0, ",bulk_read");
 else if (VAR_2->mount_opts.bulk_read == 1)
  FUNC_0(VAR_0, ",no_bulk_read");

 if (VAR_2->mount_opts.chk_data_crc == 2)
  FUNC_0(VAR_0, ",chk_data_crc");
 else if (VAR_2->mount_opts.chk_data_crc == 1)
  FUNC_0(VAR_0, ",no_chk_data_crc");

 if (VAR_2->mount_opts.override_compr) {
  FUNC_0(VAR_0, ",compr=%s",
      FUNC_1(VAR_2->mount_opts.compr_type));
 }

 return 0;
}
