
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_dev {int num_hwfns; } ;
struct TYPE_3__ {int ** sp_irq; int * sp_irq_rid; int ** sp_handle; struct ecore_dev cdev; int pci_dev; } ;
typedef TYPE_1__ qlnx_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct ecore_dev*) ;
 int FUNC_3 (struct ecore_dev*) ;

__attribute__((used)) static int
FUNC_4(qlnx_host_t *VAR_1)
{
 struct ecore_dev *VAR_2;
 device_t VAR_3 = VAR_1->pci_dev;
 int VAR_4;

 VAR_2 = &VAR_1->cdev;

 FUNC_2(VAR_2);

  for (VAR_4 = 0; VAR_4 < VAR_1->cdev.num_hwfns; VAR_4++) {

         if (VAR_1->sp_handle[VAR_4])
                 (void)FUNC_1(VAR_3, VAR_1->sp_irq[VAR_4],
    VAR_1->sp_handle[VAR_4]);

  VAR_1->sp_handle[VAR_4] = ((void*)0);

         if (VAR_1->sp_irq[VAR_4])
   (void) FUNC_0(VAR_3, VAR_0,
    VAR_1->sp_irq_rid[VAR_4], VAR_1->sp_irq[VAR_4]);
  VAR_1->sp_irq[VAR_4] = ((void*)0);
 }

        FUNC_3(VAR_2);

        return 0;
}
