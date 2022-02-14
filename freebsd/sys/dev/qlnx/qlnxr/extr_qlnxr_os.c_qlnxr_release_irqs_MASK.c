
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlnxr_dev {int num_cnq; TYPE_1__* cnq_array; TYPE_2__* ha; } ;
struct TYPE_5__ {int pci_dev; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_4__ {scalar_t__ irq; int irq_rid; scalar_t__ irq_handle; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_dev *VAR_1)
{
 int VAR_2;
 qlnx_host_t *VAR_3;

 VAR_3 = VAR_1->ha;

 FUNC_0(VAR_3, "enter\n");

        for (VAR_2 = 0; VAR_2 < VAR_1->num_cnq; VAR_2++) {
                if (VAR_1->cnq_array[VAR_2].irq_handle)
                        (void)FUNC_2(VAR_1->ha->pci_dev,
    VAR_1->cnq_array[VAR_2].irq,
                                VAR_1->cnq_array[VAR_2].irq_handle);

                if (VAR_1->cnq_array[VAR_2].irq)
                        (void) FUNC_1(VAR_1->ha->pci_dev,
    VAR_0,
                                VAR_1->cnq_array[VAR_2].irq_rid,
    VAR_1->cnq_array[VAR_2].irq);
 }
 FUNC_0(VAR_3, "exit\n");
 return;
}
