
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zs_thread_stop; int zs_thread_start; } ;
typedef TYPE_1__ ztest_shared_t ;
struct TYPE_6__ {int * spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int hrtime_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void *
FUNC_7(void *VAR_2)
{
 ztest_shared_t *VAR_3 = VAR_2;
 spa_t *VAR_4 = VAR_1;
 hrtime_t VAR_5, VAR_6 = 0;

 for (;;) {
  VAR_5 = VAR_3->zs_thread_stop - VAR_3->zs_thread_start +
      FUNC_0(VAR_0);

  (void) FUNC_3(((void*)0), 0, (int)FUNC_1(VAR_5));







  if (FUNC_5(VAR_4) || VAR_4->spa_root_vdev == ((void*)0)) {
   FUNC_2(0, "aborting test after %llu seconds because "
       "pool has transitioned to a suspended state.",
       VAR_0 / 1000);
   return (((void*)0));
  }
  FUNC_6(VAR_4->spa_root_vdev);

  VAR_6 += VAR_0/1000;
  (void) FUNC_4("ztest has been running for %lld seconds\n",
      VAR_6);
 }
}
