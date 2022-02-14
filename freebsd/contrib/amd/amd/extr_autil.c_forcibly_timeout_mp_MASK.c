
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int mf_flags; } ;
typedef TYPE_4__ mntfs ;
struct TYPE_12__ {int am_flags; TYPE_2__* am_parent; int am_ttl; int am_path; TYPE_3__* am_al; } ;
typedef TYPE_5__ am_node ;
struct TYPE_10__ {TYPE_4__* al_mnt; } ;
struct TYPE_8__ {int na_mtime; } ;
struct TYPE_9__ {TYPE_1__ am_fattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 () ;

void
FUNC_4(am_node *VAR_8)
{
  mntfs *VAR_9 = VAR_8->am_al->al_mnt;



  if (VAR_9 && ((VAR_8->am_flags & VAR_1) ||
      (VAR_9->mf_flags & (VAR_4 | VAR_5)))) {





    if (VAR_9->mf_flags & VAR_5)
      FUNC_2(VAR_7, "node %s is currently being unmounted, ignoring timeout request", VAR_8->am_path);
    else {
      FUNC_2(VAR_7, "ignoring timeout request for active node %s", VAR_8->am_path);
      FUNC_1(VAR_8, VAR_2, VAR_3, 0);
    }
  } else {
    FUNC_2(VAR_6, "\"%s\" forcibly timed out", VAR_8->am_path);
    VAR_8->am_flags &= ~VAR_0;
    VAR_8->am_ttl = FUNC_0(((void*)0));





    FUNC_0(&VAR_8->am_parent->am_fattr.na_mtime);
    FUNC_3();
  }
}
