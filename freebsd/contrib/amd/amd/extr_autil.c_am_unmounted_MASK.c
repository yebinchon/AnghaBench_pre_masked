
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_20__ {int mf_flags; int mf_refc; char* mf_mount; TYPE_15__* mf_ops; } ;
typedef TYPE_3__ mntfs ;
struct TYPE_18__ {scalar_t__ na_type; int na_mtime; int na_nlink; } ;
struct TYPE_21__ {char* am_name; int am_flags; int* am_fd; int am_alarray; TYPE_2__* am_al; struct TYPE_21__* am_parent; TYPE_1__ am_fattr; scalar_t__ am_link; } ;
typedef TYPE_4__ am_node ;
struct TYPE_19__ {TYPE_3__* al_mnt; } ;
struct TYPE_17__ {int (* mount_child ) (TYPE_4__*,int*) ;TYPE_4__* (* lookup_child ) (TYPE_4__*,char*,int*,int ) ;int (* umount_fs ) (TYPE_4__*,TYPE_3__*) ;int (* umounted ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_15__ VAR_12 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*) ;
 TYPE_4__* FUNC_10 (TYPE_4__*,char*,int*,int ) ;
 int FUNC_11 (TYPE_4__*,int*) ;
 char* FUNC_12 (char*) ;

void
FUNC_13(am_node *VAR_15)
{
  mntfs *VAR_16 = VAR_15->am_al->al_mnt;

  if (!VAR_14) {



    FUNC_6(VAR_10, "am_unmounted: illegal use in background (%s)",
 VAR_15->am_name);
    FUNC_5(VAR_15, VAR_3, 0, 0);
    return;
  }




  if (VAR_16->mf_ops->umounted)
    VAR_16->mf_ops->umounted(VAR_16);






  if (VAR_15->am_link && VAR_16->mf_ops != &VAR_12)
    VAR_12.umount_fs(VAR_15, VAR_16);
  if (VAR_16->mf_flags & VAR_6 &&
      VAR_16->mf_refc == 1 &&
      !(VAR_15->am_flags & VAR_1)) {
    FUNC_6(VAR_11, "removing mountpoint directory '%s'", VAR_16->mf_mount);
    FUNC_7(VAR_16->mf_mount);
    VAR_16->mf_flags &= ~VAR_6;
  }





  if (VAR_15->am_parent && VAR_15->am_fattr.na_type == VAR_7)
    --VAR_15->am_parent->am_fattr.na_nlink;




  if (VAR_15->am_parent && VAR_15->am_parent->am_al->al_mnt)
    FUNC_3(&VAR_15->am_parent->am_fattr.na_mtime);

  if (VAR_15->am_parent && (VAR_15->am_flags & VAR_1)) {
    char *VAR_17 = FUNC_12(VAR_15->am_name);
    am_node *VAR_18 = VAR_15->am_parent;
    mntfs *VAR_19 = VAR_18->am_al->al_mnt;
    am_node VAR_20;
    int VAR_21 = 0;





    VAR_20.am_fd[1] = VAR_15->am_fd[1];
    VAR_15->am_fd[1] = -1;

    FUNC_4(VAR_15);
    FUNC_6(VAR_11, "am_unmounted: remounting %s", VAR_17);
    VAR_15 = VAR_19->mf_ops->lookup_child(VAR_18, VAR_17, &VAR_21, VAR_8);
    if (VAR_15 && VAR_21 < 0)
      (void)VAR_19->mf_ops->mount_child(VAR_15, &VAR_21);
    if (VAR_21 > 0) {
      VAR_13 = VAR_21;
      FUNC_6(VAR_9, "am_unmounted: could not remount %s: %m", VAR_17);
      FUNC_5(&VAR_20, VAR_3, 0, 0);
    } else {
      FUNC_5(&VAR_20, VAR_2, VAR_4, 0);
    }
    FUNC_0(VAR_17);
  } else {
    FUNC_5(VAR_15, VAR_3, 0, 0);
    if (!VAR_15->am_alarray)
      FUNC_4(VAR_15);
  }
}
