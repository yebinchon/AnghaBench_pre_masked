
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int objset_t ;
struct TYPE_9__ {int ds_opening_lock; int * ds_objset; int ds_lock; int ds_bp_rwlock; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_8__ {int dd_pool; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*,int ,int **) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10(dsl_dataset_t *VAR_2, objset_t **VAR_3)
{
 int VAR_4 = 0;





 FUNC_0(FUNC_5(VAR_2->ds_dir->dd_pool) ||
     FUNC_4(VAR_2));

 FUNC_6(&VAR_2->ds_opening_lock);
 if (VAR_2->ds_objset == ((void*)0)) {
  objset_t *VAR_5;
  FUNC_8(&VAR_2->ds_bp_rwlock, VAR_1, VAR_0);
  VAR_4 = FUNC_1(FUNC_3(VAR_2),
      VAR_2, FUNC_2(VAR_2), &VAR_5);
  FUNC_9(&VAR_2->ds_bp_rwlock, VAR_0);

  if (VAR_4 == 0) {
   FUNC_6(&VAR_2->ds_lock);
   FUNC_0(VAR_2->ds_objset == ((void*)0));
   VAR_2->ds_objset = VAR_5;
   FUNC_7(&VAR_2->ds_lock);
  }
 }
 *VAR_3 = VAR_2->ds_objset;
 FUNC_7(&VAR_2->ds_opening_lock);
 return (VAR_4);
}
