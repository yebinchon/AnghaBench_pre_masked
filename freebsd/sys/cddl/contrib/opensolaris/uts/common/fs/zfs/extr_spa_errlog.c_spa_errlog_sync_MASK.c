
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int spa_scrub_finished; int spa_errlog_lock; int spa_errlog_scrub; int spa_meta_objset; int spa_errlog_last; int spa_dsl_pool; int spa_errlist_lock; int spa_errlist_last; int spa_errlist_scrub; } ;
typedef TYPE_1__ spa_t ;
typedef int dmu_tx_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_9 (int ,int ,int ,int,int,int *,int *) ;

void
FUNC_10(spa_t *VAR_4, uint64_t VAR_5)
{
 dmu_tx_t *VAR_6;
 avl_tree_t VAR_7, VAR_8;
 int VAR_9;

 FUNC_5(&VAR_4->spa_errlist_lock);




 if (FUNC_1(&VAR_4->spa_errlist_scrub) == 0 &&
     FUNC_1(&VAR_4->spa_errlist_last) == 0 &&
     !VAR_4->spa_scrub_finished) {
  FUNC_6(&VAR_4->spa_errlist_lock);
  return;
 }

 FUNC_7(VAR_4, &VAR_8, &VAR_7);
 VAR_9 = VAR_4->spa_scrub_finished;
 VAR_4->spa_scrub_finished = VAR_0;

 FUNC_6(&VAR_4->spa_errlist_lock);
 FUNC_5(&VAR_4->spa_errlog_lock);

 VAR_6 = FUNC_4(VAR_4->spa_dsl_pool, VAR_5);




 FUNC_8(VAR_4, &VAR_8, &VAR_4->spa_errlog_last, VAR_6);




 if (VAR_9) {
  if (VAR_4->spa_errlog_last != 0)
   FUNC_0(FUNC_2(VAR_4->spa_meta_objset,
       VAR_4->spa_errlog_last, VAR_6) == 0);
  VAR_4->spa_errlog_last = VAR_4->spa_errlog_scrub;
  VAR_4->spa_errlog_scrub = 0;

  FUNC_8(VAR_4, &VAR_7, &VAR_4->spa_errlog_last, VAR_6);
 }




 FUNC_8(VAR_4, &VAR_7, &VAR_4->spa_errlog_scrub, VAR_6);




 (void) FUNC_9(VAR_4->spa_meta_objset, VAR_1,
     VAR_2, sizeof (uint64_t), 1,
     &VAR_4->spa_errlog_last, VAR_6);
 (void) FUNC_9(VAR_4->spa_meta_objset, VAR_1,
     VAR_3, sizeof (uint64_t), 1,
     &VAR_4->spa_errlog_scrub, VAR_6);

 FUNC_3(VAR_6);

 FUNC_6(&VAR_4->spa_errlog_lock);
}
