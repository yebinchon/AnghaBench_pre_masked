
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ mf_private; } ;
typedef TYPE_2__ mntfs ;
typedef int mnt_map ;
struct TYPE_11__ {TYPE_1__* am_al; } ;
typedef TYPE_3__ am_node ;
struct TYPE_9__ {TYPE_2__* al_mnt; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int*) ;
 TYPE_3__* FUNC_2 (int*) ;
 int FUNC_3 (int *,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(mntfs *VAR_1)
{
  int VAR_2;
  am_node *VAR_3;

  FUNC_0(VAR_1);





  for (VAR_3 = FUNC_1(&VAR_2);
       VAR_3;
       VAR_3 = FUNC_2(&VAR_2)) {
    if (VAR_3->am_al->al_mnt == VAR_1) {

      (void) FUNC_3((mnt_map *) VAR_3->am_al->al_mnt->mf_private,
     VAR_0,
     VAR_3);
      break;
    }
  }
}
