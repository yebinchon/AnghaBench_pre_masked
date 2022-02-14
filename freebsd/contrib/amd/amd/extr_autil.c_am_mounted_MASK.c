
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_22__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_35__ {int mf_flags; int mf_fsflags; char* mf_mount; TYPE_21__* mf_ops; scalar_t__ mf_mopts; } ;
typedef TYPE_8__ mntfs ;
struct TYPE_36__ {scalar_t__ mnt_opts; } ;
typedef TYPE_9__ mntent_t ;
struct TYPE_34__ {scalar_t__ na_type; int na_mtime; int na_size; } ;
struct TYPE_29__ {int s_mtime; } ;
struct TYPE_24__ {int am_flags; char* am_link; TYPE_7__ am_fattr; TYPE_6__* am_parent; TYPE_2__ am_stats; int am_timeo; int am_path; TYPE_1__* am_al; } ;
typedef TYPE_10__ am_node ;
struct TYPE_32__ {int na_mtime; } ;
struct TYPE_33__ {TYPE_5__ am_fattr; TYPE_4__* am_al; int am_path; } ;
struct TYPE_31__ {TYPE_3__* al_mnt; } ;
struct TYPE_30__ {int mf_fsflags; } ;
struct TYPE_28__ {int d_mok; } ;
struct TYPE_27__ {int (* mount_fs ) (TYPE_10__*,TYPE_8__*) ;} ;
struct TYPE_26__ {TYPE_8__* al_mnt; } ;
struct TYPE_25__ {int am_timeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_22__ VAR_8 ;
 TYPE_21__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_9__*,char*) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int *) ;
 TYPE_17__ VAR_10 ;
 int FUNC_4 (TYPE_9__*,char*) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*,int ) ;
 int FUNC_8 (int ,char*,int ,...) ;
 int FUNC_9 (int ,int ,char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_10__*,TYPE_8__*) ;

void
FUNC_12(am_node *VAR_11)
{
  int VAR_12 = 0;
  mntfs *VAR_13 = VAR_11->am_al->al_mnt;






  FUNC_5(VAR_13, VAR_6);
  if (VAR_11->am_parent && VAR_11->am_parent->am_al->al_mnt->mf_fsflags & VAR_2)
    VAR_11->am_path = FUNC_9(VAR_11->am_path, VAR_11->am_parent->am_path, "/", ".");






  if (VAR_13->mf_fsflags & VAR_3)
    VAR_12 = 1;


  if (VAR_13->mf_mopts) {
    mntent_t VAR_14;
    VAR_14.mnt_opts = VAR_13->mf_mopts;


    if (FUNC_0(&VAR_14, "unmount") || FUNC_0(&VAR_14, "umount"))
      VAR_12 = 0;

    if (FUNC_0(&VAR_14, "nounmount") || FUNC_0(&VAR_14, "noumount"))
      VAR_12 = 1;

    if ((VAR_11->am_timeo = FUNC_4(&VAR_14, "utimeout")) == 0)
      VAR_11->am_timeo = VAR_10.am_timeo;
    else
      VAR_12 = 0;

    if (VAR_13->mf_mount[0] == '/' && VAR_13->mf_mount[1] == '\0')
      VAR_12 = 1;
  }

  if (VAR_12) {
    VAR_11->am_flags |= VAR_1;
    FUNC_8(VAR_7, "%s set to never timeout", VAR_11->am_path);
  } else {
    VAR_11->am_flags &= ~VAR_1;
    FUNC_8(VAR_7, "%s set to timeout in %d seconds", VAR_11->am_path, VAR_11->am_timeo);
  }





  if (VAR_11->am_fattr.na_type == VAR_5)
    VAR_11->am_fattr.na_size = FUNC_10(VAR_11->am_link ? VAR_11->am_link : VAR_13->mf_mount);




  VAR_11->am_stats.s_mtime = FUNC_3(&VAR_11->am_fattr.na_mtime);
  FUNC_6(VAR_11);




  if (VAR_11->am_parent && VAR_11->am_parent->am_al->al_mnt)
    VAR_11->am_parent->am_fattr.na_mtime = VAR_11->am_fattr.na_mtime;






  if (VAR_11->am_link && VAR_13->mf_ops != &VAR_9)
    VAR_9.mount_fs(VAR_11, VAR_13);
    FUNC_7(VAR_11, 0);




  VAR_8.d_mok++;
}
