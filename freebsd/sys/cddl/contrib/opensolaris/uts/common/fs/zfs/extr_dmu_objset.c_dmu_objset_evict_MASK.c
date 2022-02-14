
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int os_lock; int os_dnodes; int os_spa; scalar_t__ os_sa; int * os_dsl_dataset; } ;
typedef TYPE_1__ objset_t ;
typedef int dsl_dataset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,TYPE_1__*) ;

void
FUNC_10(objset_t *VAR_1)
{
 dsl_dataset_t *VAR_2 = VAR_1->os_dsl_dataset;

 for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(!FUNC_3(VAR_1, VAR_3));

 if (VAR_2)
  FUNC_4(VAR_2, VAR_1);

 if (VAR_1->os_sa)
  FUNC_8(VAR_1);

 FUNC_1(VAR_1);

 FUNC_6(&VAR_1->os_lock);
 FUNC_9(VAR_1->os_spa, VAR_1);
 if (FUNC_5(&VAR_1->os_dnodes)) {
  FUNC_7(&VAR_1->os_lock);
  FUNC_2(VAR_1);
 } else {
  FUNC_7(&VAR_1->os_lock);
 }
}
