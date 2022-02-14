
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nisodma; int * taskqueue; int task_timeout; int * config_rom; } ;
struct fwohci_softc {TYPE_1__ fc; int fwohci_task_dma; int fwohci_task_sid; int fwohci_task_busreset; int * ir; int * it; int atrs; int atrq; int arrs; int arrq; int crom_dma; int sid_dma; int * sid_buf; } ;
typedef int device_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct fwohci_softc *VAR_0, device_t VAR_1)
{
 int VAR_2;

 if (VAR_0->sid_buf != ((void*)0))
  FUNC_0(&VAR_0->fc, &VAR_0->sid_dma);
 if (VAR_0->fc.config_rom != ((void*)0))
  FUNC_0(&VAR_0->fc, &VAR_0->crom_dma);

 FUNC_1(&VAR_0->arrq);
 FUNC_1(&VAR_0->arrs);

 FUNC_1(&VAR_0->atrq);
 FUNC_1(&VAR_0->atrs);

 for (VAR_2 = 0; VAR_2 < VAR_0->fc.nisodma; VAR_2++) {
  FUNC_1(&VAR_0->it[VAR_2]);
  FUNC_1(&VAR_0->ir[VAR_2]);
 }
 if (VAR_0->fc.taskqueue != ((void*)0)) {
  FUNC_2(VAR_0->fc.taskqueue, &VAR_0->fwohci_task_busreset);
  FUNC_2(VAR_0->fc.taskqueue, &VAR_0->fwohci_task_sid);
  FUNC_2(VAR_0->fc.taskqueue, &VAR_0->fwohci_task_dma);
  FUNC_2(VAR_0->fc.taskqueue, &VAR_0->fc.task_timeout);
  FUNC_3(VAR_0->fc.taskqueue);
  VAR_0->fc.taskqueue = ((void*)0);
 }

 return 0;
}
