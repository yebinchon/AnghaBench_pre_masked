
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int r_irq_rid; int r_irq; int handle; int legacy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,void*,struct ata_pci_controller*,int *) ;
 int FUNC_3 (int ) ;
 struct ata_pci_controller* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,int*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,char*,int*) ;

int
FUNC_11(device_t VAR_6, void *VAR_7)
{
    struct ata_pci_controller *VAR_8 = FUNC_4(VAR_6);
    int VAR_9, VAR_10 = 0;

    if (!VAR_8->legacy) {
 if (FUNC_10(FUNC_3(VAR_6),
  FUNC_5(VAR_6), "msi", &VAR_9) == 0 && VAR_9 != 0)
     VAR_10 = 1;
 if (VAR_10 && FUNC_8(VAR_6) > 0 && FUNC_7(VAR_6, &VAR_10) == 0) {
     VAR_8->r_irq_rid = 0x1;
 } else {
     VAR_10 = 0;
     VAR_8->r_irq_rid = VAR_1;
 }
 if (!(VAR_8->r_irq = FUNC_0(VAR_6, VAR_5,
  &VAR_8->r_irq_rid, VAR_4 | VAR_3))) {
     FUNC_6(VAR_6, "unable to map interrupt\n");
     if (VAR_10)
      FUNC_9(VAR_6);
     return VAR_2;
 }
 if ((FUNC_2(VAR_6, VAR_8->r_irq, VAR_0, ((void*)0),
       VAR_7, VAR_8, &VAR_8->handle))) {
     FUNC_6(VAR_6, "unable to setup interrupt\n");
     FUNC_1(VAR_6,
  VAR_5, VAR_8->r_irq_rid, VAR_8->r_irq);
     if (VAR_10)
      FUNC_9(VAR_6);
     return VAR_2;
 }
    }
    return 0;
}
