
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * os_synced_dnodes; } ;
typedef TYPE_1__ objset_t ;
struct TYPE_7__ {int ds_dbuf; int ds_deadlist; int ds_pending_deadlist; TYPE_1__* ds_objset; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(dsl_dataset_t *VAR_1, dmu_tx_t *VAR_2)
{
 objset_t *VAR_3 = VAR_1->ds_objset;

 FUNC_1(&VAR_1->ds_pending_deadlist,
     VAR_0, &VAR_1->ds_deadlist, VAR_2);

 if (VAR_3->os_synced_dnodes != ((void*)0)) {
  FUNC_5(VAR_3->os_synced_dnodes);
  VAR_3->os_synced_dnodes = ((void*)0);
 }

 FUNC_0(!FUNC_3(VAR_3, FUNC_4(VAR_2)));

 FUNC_2(VAR_1->ds_dbuf, VAR_1);
}
