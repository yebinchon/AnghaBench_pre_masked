
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {int spa_async_tasks; int spa_async_lock; int spa_async_cv; int * spa_async_thread; int spa_root_vdev; int spa_dsl_pool; int spa_sync_on; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,char*,int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*,int *,int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void
FUNC_20(void *VAR_13)
{
 spa_t *VAR_14 = (spa_t *)VAR_13;
 int VAR_15;

 FUNC_0(VAR_14->spa_sync_on);

 FUNC_4(&VAR_14->spa_async_lock);
 VAR_15 = VAR_14->spa_async_tasks;
 VAR_14->spa_async_tasks &= VAR_8;
 FUNC_5(&VAR_14->spa_async_lock);




 if (VAR_15 & VAR_5) {
  uint64_t VAR_16, VAR_17;

  FUNC_4(&VAR_12);
  VAR_16 = FUNC_3(FUNC_13(VAR_14));
  FUNC_10(VAR_14, VAR_11);
  VAR_17 = FUNC_3(FUNC_13(VAR_14));
  FUNC_5(&VAR_12);





  if (VAR_17 != VAR_16) {
   FUNC_11(VAR_14, "vdev online", ((void*)0),
       "pool '%s' size: %llu(+%llu)",
       FUNC_12(VAR_14), VAR_17, VAR_17 - VAR_16);
  }
 }

 if ((VAR_15 & VAR_4) && !FUNC_14(VAR_14)) {
  FUNC_8(VAR_14, VAR_2, VAR_0, VAR_1);
  FUNC_6(VAR_14, VAR_14->spa_root_vdev);
  FUNC_9(VAR_14, VAR_2, VAR_0);
 }




 if (VAR_15 & VAR_7) {
  FUNC_16(VAR_14, VAR_3);
  FUNC_7(VAR_14, VAR_14->spa_root_vdev);
  (void) FUNC_17(VAR_14, ((void*)0), 0);
 }




 if (VAR_15 & VAR_10)
  FUNC_15(VAR_14);




 if (VAR_15 & VAR_9)
  FUNC_2(VAR_14->spa_dsl_pool, 0);

 if (VAR_15 & VAR_6) {
  FUNC_4(&VAR_12);
  FUNC_8(VAR_14, VAR_2, VAR_0, VAR_1);
  FUNC_19(VAR_14->spa_root_vdev);
  FUNC_9(VAR_14, VAR_2, VAR_0);
  FUNC_5(&VAR_12);
 }




 FUNC_4(&VAR_14->spa_async_lock);
 VAR_14->spa_async_thread = ((void*)0);
 FUNC_1(&VAR_14->spa_async_cv);
 FUNC_5(&VAR_14->spa_async_lock);
 FUNC_18();
}
