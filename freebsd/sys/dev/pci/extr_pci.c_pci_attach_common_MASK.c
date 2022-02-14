
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_softc {int sc_dma_tag; int * sc_bus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,int ,int*,int,int,int,int ) ;
 int FUNC_1 (int ) ;
 struct pci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(device_t VAR_3)
{
 struct pci_softc *VAR_4;
 int VAR_5, VAR_6;




 VAR_4 = FUNC_2(VAR_3);
 VAR_6 = FUNC_5(VAR_3);
 VAR_5 = FUNC_4(VAR_3);
 if (VAR_2)
  FUNC_3(VAR_3, "domain=%d, physical bus=%d\n",
      VAR_6, VAR_5);
 VAR_4->sc_dma_tag = FUNC_1(VAR_3);
 return (0);
}
