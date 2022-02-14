
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int devlist_lock; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
struct TYPE_10__ {int target; } ;
typedef TYPE_2__ pqi_scsi_dev_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(pqisrc_softstate_t * VAR_0,pqi_scsi_dev_t *VAR_1)
{

  FUNC_0(&VAR_0->devlist_lock);
  if (!FUNC_4(VAR_1)) {
   FUNC_3(VAR_0,VAR_1->target);
  }
  FUNC_2(VAR_0, VAR_1);
  FUNC_1(&VAR_0->devlist_lock);

}
