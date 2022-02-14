
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mf_error; int mf_flags; TYPE_1__* mf_server; } ;
typedef TYPE_3__ mntfs ;
struct TYPE_10__ {scalar_t__ am_error; struct TYPE_10__* am_osib; TYPE_2__* am_al; } ;
typedef TYPE_4__ am_node ;
struct TYPE_8__ {TYPE_3__* al_mnt; } ;
struct TYPE_7__ {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

am_node *
FUNC_0(am_node *VAR_2)
{
  mntfs *VAR_3;







  while (VAR_2 &&
  (!(VAR_3 = VAR_2->am_al->al_mnt) ||
   VAR_3->mf_error != 0 ||
   VAR_2->am_error != 0 ||
   !(VAR_3->mf_flags & VAR_1) ||
   (VAR_3->mf_server->fs_flags & VAR_0))
  )
    VAR_2 = VAR_2->am_osib;

  return VAR_2;
}
