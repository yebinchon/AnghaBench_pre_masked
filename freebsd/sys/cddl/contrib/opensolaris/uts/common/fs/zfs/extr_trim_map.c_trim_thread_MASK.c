
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_9__ {int spa_root_vdev; int spa_trim_lock; int spa_trim_cv; TYPE_8__* spa_trim_thread; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_10__ {int td_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,char*,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 char* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int *,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int * FUNC_11 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(void *VAR_7)
{
 spa_t *VAR_8 = VAR_7;
 zio_t *VAR_9;






 for (;;) {
  FUNC_2(&VAR_8->spa_trim_lock);
  if (VAR_8->spa_trim_thread == ((void*)0)) {
   VAR_8->spa_trim_thread = VAR_4;
   FUNC_0(&VAR_8->spa_trim_cv);
   FUNC_3(&VAR_8->spa_trim_lock);
   FUNC_8();
  }

  (void) FUNC_1(&VAR_8->spa_trim_cv, &VAR_8->spa_trim_lock,
      VAR_5 * VAR_6);
  FUNC_3(&VAR_8->spa_trim_lock);

  VAR_9 = FUNC_11(VAR_8, ((void*)0), ((void*)0), VAR_3);

  FUNC_5(VAR_8, VAR_2, VAR_0, VAR_1);
  FUNC_9(VAR_8, VAR_9, VAR_8->spa_root_vdev);
  (void) FUNC_12(VAR_9);
  FUNC_10(VAR_8, VAR_8->spa_root_vdev);
  FUNC_6(VAR_8, VAR_2, VAR_0);
 }
}
