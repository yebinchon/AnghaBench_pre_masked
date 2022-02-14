
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mf_flags; int mf_mopts; TYPE_1__* mf_fo; int mf_mount; } ;
typedef TYPE_2__ mntfs ;
typedef int am_node ;
struct TYPE_4__ {int opt_cachedir; int opt_rfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(am_node *VAR_4, mntfs *VAR_5)
{
  int VAR_6 = VAR_5->mf_flags & VAR_1;
  int VAR_7;

  VAR_7 = FUNC_0(VAR_5->mf_mount,
   VAR_5->mf_fo->opt_rfs,
   VAR_5->mf_fo->opt_cachedir,
   VAR_5->mf_mopts,
   VAR_6);
  if (VAR_7) {
    VAR_3 = VAR_7;

    if (VAR_7 == VAR_0)
      FUNC_1(VAR_2, "mount_cachefs: options to no match: %m");
    else
      FUNC_1(VAR_2, "mount_cachefs: %m");
    return VAR_7;
  }

  return 0;
}
