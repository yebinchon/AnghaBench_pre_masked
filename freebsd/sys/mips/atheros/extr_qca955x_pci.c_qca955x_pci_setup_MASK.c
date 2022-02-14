
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ar71xx_pci_softc {int sc_pci_membase_limit; scalar_t__ sc_pci_ctrl_base; int sc_pci_crp_base; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct ar71xx_pci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_11)
{
 struct ar71xx_pci_softc *VAR_12 = FUNC_3(VAR_11);
 uint32_t VAR_13;


 VAR_13 = VAR_2 | VAR_3 | VAR_6 |
     VAR_1 | VAR_5 | VAR_4;

 FUNC_5(VAR_12->sc_pci_crp_base, VAR_7, VAR_13, 2);


 FUNC_5(VAR_12->sc_pci_crp_base, 0x20, VAR_12->sc_pci_membase_limit, 4);
 FUNC_5(VAR_12->sc_pci_crp_base, 0x24, VAR_12->sc_pci_membase_limit, 4);

 VAR_13 = FUNC_0(VAR_12->sc_pci_ctrl_base + VAR_9);
 if (VAR_13 != 0x7) {
  FUNC_2(100000);
  FUNC_1(VAR_12->sc_pci_ctrl_base + VAR_9, 0);
  FUNC_0(VAR_12->sc_pci_ctrl_base + VAR_9);
  FUNC_2(100);
  FUNC_1(VAR_12->sc_pci_ctrl_base + VAR_9, 4);
  FUNC_0(VAR_12->sc_pci_ctrl_base + VAR_9);
  FUNC_2(100000);
 }

 FUNC_1(VAR_12->sc_pci_ctrl_base + VAR_8, 0x1ffc1);

 (void) FUNC_0(VAR_12->sc_pci_ctrl_base + VAR_8);

 FUNC_2(1000);

 VAR_13 = FUNC_0(VAR_12->sc_pci_ctrl_base + VAR_9);
 if ((VAR_13 & VAR_10) == 0) {
  FUNC_4(VAR_11, "no PCIe controller found\n");
  return (VAR_0);
 }

 return (0);
}
