
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ time_t ;
typedef int opaque_t ;
struct TYPE_20__ {int mf_flags; int mf_refc; int mf_fsflags; int mf_mount; TYPE_12__* mf_server; } ;
typedef TYPE_6__ mntfs ;
struct TYPE_21__ {int am_path; TYPE_5__* am_parent; TYPE_1__* am_al; } ;
typedef TYPE_7__ am_node ;
struct TYPE_13__ {scalar_t__ nt_seconds; } ;
struct TYPE_16__ {TYPE_10__ na_mtime; } ;
struct TYPE_17__ {TYPE_2__ ns_attr_u; } ;
struct TYPE_18__ {TYPE_3__ ns_u; } ;
struct TYPE_19__ {TYPE_4__ am_attr; } ;
struct TYPE_15__ {TYPE_6__* al_mnt; } ;
struct TYPE_14__ {int fs_host; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_12__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_6 (int ,char*,int ,int ,...) ;
 int FUNC_7 (int (*) (int ),int ,int (*) (int ,int ,int ),int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(am_node *VAR_9)
{
  int VAR_10 = 0;
  mntfs *VAR_11 = VAR_9->am_al->al_mnt;
  if (VAR_9->am_parent) {
    time_t VAR_12 = VAR_9->am_parent->am_attr.ns_u.ns_attr_u.na_mtime.nt_seconds;
    FUNC_2(&VAR_9->am_parent->am_attr.ns_u.ns_attr_u.na_mtime);

    if (VAR_12 == (time_t) VAR_9->am_parent->am_attr.ns_u.ns_attr_u.na_mtime.nt_seconds)
      VAR_9->am_parent->am_attr.ns_u.ns_attr_u.na_mtime.nt_seconds++;
  }


  if (VAR_11->mf_refc == 1 && !FUNC_0(VAR_11->mf_server)) {



    if (!(VAR_11->mf_flags & VAR_3)) {

      FUNC_6(VAR_8, "file server %s is down - timeout of \"%s\" ignored", VAR_11->mf_server->fs_host, VAR_9->am_path);
      VAR_11->mf_flags |= VAR_3;
    }
    FUNC_5(VAR_9, VAR_0, 0, 0);
    return 0;
  }

  FUNC_3("\"%s\" on %s timed out", VAR_9->am_path, VAR_11->mf_mount);
  VAR_11->mf_flags |= VAR_6;






  if ((VAR_11->mf_fsflags & VAR_1) &&
      (VAR_11->mf_flags & VAR_4) &&
     !(VAR_11->mf_flags & VAR_5)) {
    FUNC_3("Trying unmount in background");
    FUNC_7(FUNC_8, (opaque_t) VAR_9,
      FUNC_4, (opaque_t) VAR_9);
    VAR_10 = 1;
  } else {
    FUNC_3("Trying unmount in foreground");
    FUNC_4(FUNC_8((opaque_t) VAR_9), 0, (opaque_t) VAR_9);
    FUNC_3("unmount attempt done");
  }

  return VAR_10;
}
