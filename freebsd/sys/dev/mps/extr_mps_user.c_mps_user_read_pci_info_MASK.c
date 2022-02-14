
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mps_softc {int mps_dev; } ;
struct TYPE_3__ {int * PciHeader; scalar_t__ InterruptVector; int FunctionNumber; int DeviceNumber; int BusNumber; } ;
typedef TYPE_1__ mps_pci_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void
FUNC_4(struct mps_softc *VAR_0, mps_pci_info_t *VAR_1)
{
 int VAR_2;





 VAR_1->BusNumber = FUNC_0(VAR_0->mps_dev);
 VAR_1->DeviceNumber = FUNC_2(VAR_0->mps_dev);
 VAR_1->FunctionNumber = FUNC_1(VAR_0->mps_dev);






 VAR_1->InterruptVector = 0;
 for (VAR_2 = 0; VAR_2 < sizeof (VAR_1->PciHeader); VAR_2++) {
  VAR_1->PciHeader[VAR_2] = FUNC_3(VAR_0->mps_dev, VAR_2, 1);
 }
}
