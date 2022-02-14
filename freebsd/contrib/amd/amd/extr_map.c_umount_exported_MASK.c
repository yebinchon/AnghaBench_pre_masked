
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int opaque_t ;
struct TYPE_10__ {int mf_flags; int mf_fsflags; int mf_mount; TYPE_1__* mf_server; } ;
typedef TYPE_3__ mntfs ;
struct TYPE_11__ {int am_flags; int am_timeo; scalar_t__ am_timeo_w; scalar_t__ am_ttl; TYPE_2__* am_al; scalar_t__ am_parent; int am_fattr; scalar_t__ am_child; } ;
typedef TYPE_4__ am_node ;
struct TYPE_12__ {int flags; } ;
struct TYPE_9__ {TYPE_3__* al_mnt; } ;
struct TYPE_8__ {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__** VAR_14 ;
 TYPE_5__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(void)
{
  int VAR_18, VAR_19;

  do {
    VAR_19 = 0;

    for (VAR_18 = VAR_17; VAR_18 >= 0; --VAR_18) {
      am_node *VAR_20 = VAR_14[VAR_18];
      mntfs *VAR_21;

      if (!VAR_20)
 continue;




      if (VAR_20->am_child)
 continue;

      VAR_21 = VAR_20->am_al->al_mnt;
      if (VAR_21->mf_flags & VAR_11) {






 continue;
      }

      if (!(VAR_21->mf_fsflags & VAR_6))





 FUNC_1(&VAR_20->am_fattr, VAR_12);

      if ((--VAR_16 < 0 &&
    !(VAR_20->am_flags & VAR_2) && VAR_20->am_parent) ||
   (VAR_21->mf_flags & VAR_9)) {

 VAR_19++;






 if (VAR_21->mf_server &&
     (VAR_21->mf_server->fs_flags & (VAR_4 | VAR_5)) != VAR_5)
   VAR_21->mf_flags &= ~VAR_7;
 if (VAR_15.flags & VAR_3 || VAR_20->am_flags & VAR_0) {
   FUNC_2(VAR_13, "on-exit attempt to unmount %s", VAR_21->mf_mount);




   FUNC_3((opaque_t) VAR_20);
 } else {
   FUNC_0(VAR_20);
 }
 if (!(VAR_21->mf_flags & (VAR_11|VAR_8)))
   VAR_14[VAR_18] = ((void*)0);
      } else {



 VAR_20->am_flags &= ~VAR_1;
 VAR_20->am_al->al_mnt->mf_flags &= ~VAR_10;
 VAR_20->am_ttl = 0;
 VAR_20->am_timeo = 1;
 VAR_20->am_timeo_w = 0;
      }
    }
  } while (VAR_19);
}
