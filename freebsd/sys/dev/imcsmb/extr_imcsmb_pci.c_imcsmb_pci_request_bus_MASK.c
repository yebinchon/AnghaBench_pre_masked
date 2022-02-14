
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imcsmb_pci_softc {int semaphore; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 struct imcsmb_pci_softc* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_1)
{
 struct imcsmb_pci_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = 0;




 if (FUNC_0(&VAR_2->semaphore, 0, 1) == 0) {
  VAR_3 = VAR_0;
 }






 return (VAR_3);
}
