
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct amfs_nfsx {int nx_c; TYPE_3__* nx_v; } ;
struct TYPE_10__ {int mf_fsflags; int mf_flags; int mf_mount; TYPE_1__* mf_ops; scalar_t__ mf_private; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_11__ {int n_error; TYPE_2__* n_mnt; } ;
typedef TYPE_3__ amfs_nfsx_mnt ;
typedef int am_node ;
struct TYPE_9__ {int (* umount_fs ) (int *,TYPE_2__*) ;int (* umounted ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(am_node *VAR_6, mntfs *VAR_7)
{
  struct amfs_nfsx *VAR_8 = (struct amfs_nfsx *) VAR_7->mf_private;
  amfs_nfsx_mnt *VAR_9;
  int VAR_10 = 0;





  for (VAR_9 = VAR_8->nx_v + VAR_8->nx_c - 1; VAR_9 >= VAR_8->nx_v; --VAR_9) {
    mntfs *VAR_11 = VAR_9->n_mnt;
    if (VAR_9->n_error == 0) {
      FUNC_1("calling underlying fumount on %s", VAR_11->mf_mount);
      VAR_9->n_error = VAR_11->mf_ops->umount_fs(VAR_6, VAR_11);
      if (VAR_9->n_error) {
 VAR_10 = VAR_9->n_error;
 VAR_9->n_error = 0;
      } else {



 VAR_9->n_error = -1;
      }
    }
  }





  if (VAR_10) {
    VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_3);
    if (VAR_10) {
      VAR_5 = VAR_10;
      FUNC_3(VAR_4, "amfs_nfsx: remount of %s failed: %m", VAR_7->mf_mount);
    }
    VAR_10 = VAR_0;
  } else {



    for (VAR_9 = VAR_8->nx_v; VAR_9 < VAR_8->nx_v + VAR_8->nx_c; VAR_9++) {
      mntfs *VAR_12 = VAR_9->n_mnt;
      FUNC_1("calling underlying umounted on %s", VAR_12->mf_mount);
      if (VAR_12->mf_ops->umounted)
 VAR_12->mf_ops->umounted(VAR_12);

      if (VAR_9->n_error < 0) {
 if (VAR_12->mf_fsflags & VAR_1) {
   (void) FUNC_4(VAR_12->mf_mount);
   VAR_12->mf_flags &= ~VAR_2;
 }
      }
      FUNC_2(VAR_12);
      VAR_9->n_mnt = ((void*)0);
      VAR_9->n_error = -1;
    }
  }

  return VAR_10;
}
