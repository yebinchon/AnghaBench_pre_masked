
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {scalar_t__ r_irq_rid; scalar_t__ r_rid2; scalar_t__ r_rid1; scalar_t__ r_res1; int r_type1; scalar_t__ r_res2; int r_type2; int (* chipdeinit ) (int ) ;scalar_t__ r_irq; int handle; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 struct ata_pci_controller* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

int
FUNC_10(device_t VAR_2)
{
    struct ata_pci_controller *VAR_3 = FUNC_4(VAR_2);


    FUNC_3(VAR_2);

    if (VAR_3->r_irq) {
 FUNC_2(VAR_2, VAR_3->r_irq, VAR_3->handle);
 FUNC_0(VAR_2, VAR_1, VAR_3->r_irq_rid, VAR_3->r_irq);
 if (VAR_3->r_irq_rid != VAR_0)
     FUNC_5(VAR_2);
    }
    if (VAR_3->chipdeinit != ((void*)0))
 VAR_3->chipdeinit(VAR_2);
    if (VAR_3->r_res2) {




 FUNC_0(VAR_2, VAR_3->r_type2, VAR_3->r_rid2, VAR_3->r_res2);
    }
    if (VAR_3->r_res1) {




 FUNC_0(VAR_2, VAR_3->r_type1, VAR_3->r_rid1, VAR_3->r_res1);
    }

    return 0;
}
