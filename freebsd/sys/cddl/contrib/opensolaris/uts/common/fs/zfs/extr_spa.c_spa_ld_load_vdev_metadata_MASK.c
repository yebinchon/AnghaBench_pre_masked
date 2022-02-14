
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_6__ {scalar_t__ spa_load_state; int spa_l2cache; int spa_spares; int * spa_root_vdev; scalar_t__ spa_autoreplace; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(spa_t *VAR_7)
{
 int VAR_8 = 0;
 vdev_t *VAR_9 = VAR_7->spa_root_vdev;
 if (VAR_7->spa_autoreplace && VAR_7->spa_load_state != VAR_5) {
  FUNC_1(VAR_7->spa_root_vdev);





  if (VAR_7->spa_load_state != VAR_4) {
   FUNC_0(&VAR_7->spa_spares);
   FUNC_0(&VAR_7->spa_l2cache);
  }
 }




 VAR_8 = FUNC_7(VAR_9);
 if (VAR_8 != 0) {
  FUNC_4(VAR_7, "vdev_load failed [error=%d]", VAR_8);
  return (FUNC_5(VAR_9, VAR_6, VAR_8));
 }




 FUNC_2(VAR_7, VAR_3, VAR_1, VAR_2);
 FUNC_6(VAR_9, 0, 0, VAR_0);
 FUNC_3(VAR_7, VAR_3, VAR_1);

 return (0);
}
