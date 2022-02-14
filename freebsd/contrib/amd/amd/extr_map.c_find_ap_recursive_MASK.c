
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* am_child; struct TYPE_8__* am_osib; TYPE_2__* am_al; int am_path; } ;
typedef TYPE_3__ am_node ;
struct TYPE_7__ {TYPE_1__* al_mnt; } ;
struct TYPE_6__ {int mf_flags; int mf_mount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static am_node *
FUNC_1(char *VAR_1, am_node *VAR_2)
{
  if (VAR_2) {
    am_node *VAR_3;
    if (FUNC_0(VAR_2->am_path, VAR_1))
      return VAR_2;

    if ((VAR_2->am_al->al_mnt->mf_flags & VAR_0) &&
 FUNC_0(VAR_2->am_al->al_mnt->mf_mount, VAR_1))
      return VAR_2;

    VAR_3 = FUNC_1(VAR_1, VAR_2->am_osib);
    if (VAR_3)
      return VAR_3;
    return FUNC_1(VAR_1, VAR_2->am_child);
  }

  return 0;
}
