
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct amfs_nfsx {int nx_c; TYPE_3__* nx_try; TYPE_3__* nx_v; int * nx_mp; } ;
typedef int opaque_t ;
struct TYPE_8__ {int mf_flags; int mf_fsflags; int mf_mount; TYPE_1__* mf_ops; int mf_info; scalar_t__ mf_private; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_9__ {int n_error; TYPE_2__* n_mnt; } ;
typedef TYPE_3__ amfs_nfsx_mnt ;
typedef int am_node ;
struct TYPE_7__ {int (* mount_fs ) (int *,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(am_node *VAR_9, mntfs *VAR_10, int VAR_11)
{
  struct amfs_nfsx *VAR_12 = (struct amfs_nfsx *) VAR_10->mf_private;
  amfs_nfsx_mnt *VAR_13;
  int VAR_14 = -1;


  VAR_12->nx_mp = VAR_9;





  for (VAR_13 = VAR_12->nx_v; VAR_13 < VAR_12->nx_v + VAR_12->nx_c; VAR_13++) {
    mntfs *VAR_15 = VAR_13->n_mnt;

    if (VAR_15->mf_flags & VAR_5)
      break;

    if (VAR_15->mf_flags & VAR_4) {
      FUNC_1(VAR_15, VAR_0);
      VAR_13->n_error = VAR_14 = 0;
      continue;
    }

    if (VAR_13->n_error < 0) {

      if (!(VAR_15->mf_flags & VAR_3) && VAR_15->mf_fsflags & VAR_2) {
 if (!FUNC_2(VAR_15->mf_mount, 0555))
   VAR_15->mf_flags |= VAR_3;
      }

      FUNC_0("calling underlying mount on %s", VAR_15->mf_mount);
      if (!VAR_11 && VAR_7 && (VAR_15->mf_fsflags & VAR_1)) {
 VAR_15->mf_flags |= VAR_5;
 FUNC_0("backgrounding mount of \"%s\"", VAR_15->mf_info);
 VAR_12->nx_try = VAR_13;
 FUNC_3(VAR_8, (opaque_t) VAR_15, VAR_6, (opaque_t) VAR_10);
 VAR_13->n_error = -1;
 return -1;
      } else {
 FUNC_0("foreground mount of \"%s\" ...", VAR_10->mf_info);
 VAR_13->n_error = VAR_15->mf_ops->mount_fs(VAR_9, VAR_15);
      }

      if (VAR_13->n_error > 0)
 FUNC_0("underlying fmount of %s failed: %s", VAR_15->mf_mount, FUNC_4(VAR_13->n_error));

      if (VAR_13->n_error == 0) {
 VAR_14 = 0;
      } else if (VAR_14 < 0) {
 VAR_14 = VAR_13->n_error;
      }
    }
  }

  return VAR_14 < 0 ? 0 : VAR_14;
}
