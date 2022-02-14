
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int voidp ;
typedef scalar_t__ opaque_t ;
struct TYPE_6__ {int mf_refc; int mf_flags; int mf_fsflags; int mf_cid; int mf_mount; TYPE_1__* mf_ops; scalar_t__ mf_error; int mf_info; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_5__ {int fs_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int ,char*,char*,int,...) ;
 scalar_t__ FUNC_3 (int ,char) ;
 int FUNC_4 (int ,int (*) (TYPE_2__*),int ) ;

void
FUNC_5(opaque_t VAR_9)
{
  mntfs *VAR_10 = (mntfs *) VAR_9;

  FUNC_1("free_mntfs <%s> type %s mf_refc %d flags %x",
       VAR_10->mf_mount, VAR_10->mf_ops->fs_type, VAR_10->mf_refc, VAR_10->mf_flags);






  if (VAR_10->mf_refc <= 0) {
    FUNC_2(VAR_7, "IGNORING free_mntfs for <%s>: refc %d, flags %x (bug?)",
         VAR_10->mf_mount, VAR_10->mf_refc, VAR_10->mf_flags);
    return;
  }


  if (VAR_10->mf_refc == 1 && VAR_10->mf_flags & VAR_5) {
    FUNC_2(VAR_7, "IGNORING free_mntfs for <%s>: refc %d, flags %x (restarted)",
         VAR_10->mf_mount, VAR_10->mf_refc, VAR_10->mf_flags);
    return;
  }

  if (--VAR_10->mf_refc == 0) {
    if (VAR_10->mf_flags & VAR_2) {
      int VAR_11;
      VAR_10->mf_flags &= ~VAR_2;




      VAR_11 = FUNC_3(VAR_10->mf_info, ' ') != 0;
      FUNC_2(VAR_8, "%s%s%s %sed fstype %s from %s",
    VAR_11 ? "\"" : "",
    VAR_10->mf_info,
    VAR_11 ? "\"" : "",
    VAR_10->mf_error ? "discard" : "unmount",
    VAR_10->mf_ops->fs_type, VAR_10->mf_mount);
    }

    if (VAR_10->mf_fsflags & VAR_1) {
      FUNC_1("Immediately discarding mntfs for %s", VAR_10->mf_mount);
      FUNC_0(VAR_10);

    } else {

      if (VAR_10->mf_flags & VAR_4) {
 FUNC_1("Discarding remount hook for %s", VAR_10->mf_mount);
      } else {
 FUNC_1("Discarding last mntfs reference to %s fstype %s",
      VAR_10->mf_mount, VAR_10->mf_ops->fs_type);
      }
      if (VAR_10->mf_flags & (VAR_2 | VAR_3 | VAR_6))
 FUNC_1("mntfs reference for %s still active", VAR_10->mf_mount);
      VAR_10->mf_cid = FUNC_4(VAR_0, FUNC_0, (voidp) VAR_10);
    }
  }
}
