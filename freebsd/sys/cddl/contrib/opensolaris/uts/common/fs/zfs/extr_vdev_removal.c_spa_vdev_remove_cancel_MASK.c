
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int vdev_mg; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_12__ {int spa_name; TYPE_1__* spa_vdev_removal; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_10__ {int svr_vdev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int ) ;

int
FUNC_6(spa_t *VAR_8)
{
 FUNC_4(VAR_8);

 if (VAR_8->spa_vdev_removal == ((void*)0))
  return (VAR_0);

 uint64_t VAR_9 = VAR_8->spa_vdev_removal->svr_vdev_id;

 int VAR_10 = FUNC_0(VAR_8->spa_name, VAR_6,
     VAR_7, ((void*)0), 0,
     VAR_5);

 if (VAR_10 == 0) {
  FUNC_2(VAR_8, VAR_3 | VAR_4, VAR_1, VAR_2);
  vdev_t *VAR_11 = FUNC_5(VAR_8, VAR_9);
  FUNC_1(VAR_11->vdev_mg);
  FUNC_3(VAR_8, VAR_3 | VAR_4, VAR_1);
 }

 return (VAR_10);
}
