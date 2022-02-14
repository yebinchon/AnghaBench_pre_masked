
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct TYPE_9__ {scalar_t__ uid; scalar_t__ gid; scalar_t__ fmask; scalar_t__ dmask; int on_errors; scalar_t__ mft_zone_multiplier; TYPE_1__* nls_map; } ;
typedef TYPE_2__ ntfs_volume ;
struct TYPE_10__ {int val; scalar_t__ str; } ;
struct TYPE_8__ {scalar_t__ charset; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_4 (struct seq_file*,char*,...) ;

int FUNC_5(struct seq_file *VAR_1, struct vfsmount *VAR_2)
{
 ntfs_volume *VAR_3 = FUNC_0(VAR_2->mnt_sb);
 int VAR_4;

 FUNC_4(VAR_1, ",uid=%i", VAR_3->uid);
 FUNC_4(VAR_1, ",gid=%i", VAR_3->gid);
 if (VAR_3->fmask == VAR_3->dmask)
  FUNC_4(VAR_1, ",umask=0%o", VAR_3->fmask);
 else {
  FUNC_4(VAR_1, ",fmask=0%o", VAR_3->fmask);
  FUNC_4(VAR_1, ",dmask=0%o", VAR_3->dmask);
 }
 FUNC_4(VAR_1, ",nls=%s", VAR_3->nls_map->charset);
 if (FUNC_1(VAR_3))
  FUNC_4(VAR_1, ",case_sensitive");
 if (FUNC_2(VAR_3))
  FUNC_4(VAR_1, ",show_sys_files");
 if (!FUNC_3(VAR_3))
  FUNC_4(VAR_1, ",disable_sparse");
 for (VAR_4 = 0; VAR_0[VAR_4].val; VAR_4++) {
  if (VAR_0[VAR_4].val & VAR_3->on_errors)
   FUNC_4(VAR_1, ",errors=%s", VAR_0[VAR_4].str);
 }
 FUNC_4(VAR_1, ",mft_zone_multiplier=%i", VAR_3->mft_zone_multiplier);
 return 0;
}
