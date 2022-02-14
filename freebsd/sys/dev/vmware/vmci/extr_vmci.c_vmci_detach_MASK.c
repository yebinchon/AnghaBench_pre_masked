
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dma_vaddr; } ;
struct vmci_softc {int vmci_spinlock; TYPE_1__ vmci_notifications_bitmap; int vmci_ioh0; int vmci_iot0; int * vmci_res0; int vmci_delayed_work_lock; int vmci_delayed_work_task; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct vmci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (struct vmci_softc*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct vmci_softc*) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 struct vmci_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 FUNC_8();
 FUNC_10();

 FUNC_6(VAR_4);

 FUNC_5();

 FUNC_4(VAR_2, &VAR_4->vmci_delayed_work_task);
 FUNC_2(&VAR_4->vmci_delayed_work_lock);

 if (VAR_4->vmci_res0 != ((void*)0))
  FUNC_0(VAR_4->vmci_iot0, VAR_4->vmci_ioh0,
      VAR_0, VAR_1);

 if (VAR_4->vmci_notifications_bitmap.dma_vaddr != ((void*)0))
  FUNC_7(&VAR_4->vmci_notifications_bitmap);

 FUNC_9(VAR_4);

 FUNC_2(&VAR_4->vmci_spinlock);

 FUNC_3(VAR_3);

 return (0);
}
