
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int devlist_lock; int *** device_list; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
struct TYPE_9__ {size_t target; size_t lun; } ;
typedef TYPE_2__ pqi_scsi_dev_t ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(pqisrc_softstate_t *VAR_0,
 pqi_scsi_dev_t *VAR_1)
{
 FUNC_1("IN\n");

 if (!VAR_1) {
  FUNC_0("softs = %p: device is NULL !!!\n", VAR_0);
  return;
 }

 FUNC_2(&VAR_0->devlist_lock);
 VAR_0->device_list[VAR_1->target][VAR_1->lun] = ((void*)0);
 FUNC_3(&VAR_0->devlist_lock);
 FUNC_4(VAR_0, VAR_1);

 FUNC_1("OUT\n");
}
