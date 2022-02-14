
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_sync_starttime; int spa_deadman_cycid; int spa_root_vdev; int spa_deadman_calls; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_7(void *VAR_6, int VAR_7)
{
 spa_t *VAR_8 = VAR_6;




 if (FUNC_4(VAR_8)) {





  return;
 }

 FUNC_6("slow spa_sync: started %llu seconds ago, calls %llu",
     (FUNC_3() - VAR_8->spa_sync_starttime) / VAR_2,
     ++VAR_8->spa_deadman_calls);
 if (VAR_5)
  FUNC_5(VAR_8->spa_root_vdev);






}
