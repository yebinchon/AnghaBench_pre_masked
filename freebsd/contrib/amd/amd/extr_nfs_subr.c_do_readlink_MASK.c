
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {char* am_link; TYPE_3__* am_al; } ;
typedef TYPE_4__ am_node ;
struct TYPE_10__ {TYPE_2__* al_mnt; } ;
struct TYPE_9__ {char* mf_mount; TYPE_1__* mf_ops; } ;
struct TYPE_8__ {TYPE_4__* (* readlink ) (TYPE_4__*,int*) ;} ;


 TYPE_4__* FUNC_0 (TYPE_4__*,int*) ;

__attribute__((used)) static char *
FUNC_1(am_node *VAR_0, int *VAR_1)
{
  char *VAR_2;






  if (VAR_0->am_al->al_mnt->mf_ops->readlink) {
    int VAR_3 = 0;
    VAR_0 = (*VAR_0->am_al->al_mnt->mf_ops->readlink) (VAR_0, &VAR_3);
    if (VAR_0 == ((void*)0)) {
      *VAR_1 = VAR_3;
      return 0;
    }

  }

  if (VAR_0->am_link) {
    VAR_2 = VAR_0->am_link;
  } else {
    VAR_2 = VAR_0->am_al->al_mnt->mf_mount;
  }

  return VAR_2;
}
