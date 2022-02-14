
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct amfs_nfsx {TYPE_2__* nx_try; int * nx_mp; } ;
typedef scalar_t__ opaque_t ;
struct TYPE_8__ {int mf_flags; int mf_error; int mf_mount; scalar_t__ mf_private; } ;
typedef TYPE_1__ mntfs ;
struct TYPE_9__ {int n_error; TYPE_1__* n_mnt; } ;
typedef TYPE_2__ amfs_nfsx_mnt ;
typedef int am_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(int VAR_6, int VAR_7, opaque_t VAR_8)
{
  mntfs *VAR_9 = (mntfs *) VAR_8;
  struct amfs_nfsx *VAR_10 = (struct amfs_nfsx *) VAR_9->mf_private;
  am_node *VAR_11 = VAR_10->nx_mp;
  amfs_nfsx_mnt *VAR_12 = VAR_10->nx_try;

  VAR_12->n_mnt->mf_flags &= ~(VAR_2 | VAR_3);
  VAR_9->mf_flags &= ~VAR_2;




  FUNC_6(FUNC_2(VAR_12->n_mnt));

  if (VAR_6 || VAR_7) {
    if (VAR_7) {



      FUNC_5(VAR_4, "mount for %s got signal %d", VAR_12->n_mnt->mf_mount, VAR_7);
      VAR_12->n_error = VAR_0;
    } else {



      VAR_5 = VAR_6;
      FUNC_5(VAR_4, "%s: mount (amfs_nfsx_cont): %m", VAR_12->n_mnt->mf_mount);
      VAR_12->n_error = VAR_6;
    }
    FUNC_1(VAR_12->n_mnt);
    VAR_12->n_mnt = FUNC_4();
    VAR_12->n_mnt->mf_error = VAR_12->n_error;
    VAR_12->n_mnt->mf_flags |= VAR_2;
  } else {



    FUNC_3(VAR_12->n_mnt, VAR_1);
    VAR_12->n_error = 0;
  }




  if (FUNC_0(VAR_11, VAR_9) >= 0)
    FUNC_6(FUNC_2(VAR_9));
}
