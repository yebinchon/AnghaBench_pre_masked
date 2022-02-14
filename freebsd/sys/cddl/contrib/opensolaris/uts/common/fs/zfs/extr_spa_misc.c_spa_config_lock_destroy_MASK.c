
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* spa_config_lock; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_5__ {scalar_t__ scl_write_wanted; int * scl_writer; int scl_count; int scl_cv; int scl_lock; } ;
typedef TYPE_2__ spa_config_lock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(spa_t *VAR_1)
{
 for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  spa_config_lock_t *VAR_3 = &VAR_1->spa_config_lock[VAR_2];
  FUNC_2(&VAR_3->scl_lock);
  FUNC_1(&VAR_3->scl_cv);
  FUNC_3(&VAR_3->scl_count);
  FUNC_0(VAR_3->scl_writer == ((void*)0));
  FUNC_0(VAR_3->scl_write_wanted == 0);
 }
}
