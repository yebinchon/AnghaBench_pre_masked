
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct bhndb_pci_softc {int pci_quirks; int dev; } ;
typedef int sbintvec ;
typedef int device_t ;


 int FUNC_0 (struct bhndb_pci_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bhndb_pci_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (struct bhndb_pci_softc*,int ,int) ;
 int FUNC_6 (struct bhndb_pci_softc*,int ,int,int) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_8(struct bhndb_pci_softc *VAR_3, device_t VAR_4)
{
 uint32_t VAR_5;
 u_int VAR_6;
 int VAR_7;

 FUNC_2(VAR_3->pci_quirks & VAR_0,
     ("route_siba_interrupts not supported by this hardware"));


 if ((VAR_7 = FUNC_4(VAR_4, 0, &VAR_6)))
  return (VAR_7);

 if (VAR_6 > (sizeof(VAR_5)*8) - 1 ) {

  FUNC_7(VAR_3->dev, "cannot route interrupts to high "
      "sbflag# %u\n", VAR_6);
  return (VAR_1);
 }

 FUNC_0(VAR_3);

 VAR_5 = FUNC_5(VAR_3, FUNC_3(VAR_2), 4);
 VAR_5 |= (1 << VAR_6);
 FUNC_6(VAR_3, FUNC_3(VAR_2), VAR_5, 4);

 FUNC_1(VAR_3);

 return (0);
}
