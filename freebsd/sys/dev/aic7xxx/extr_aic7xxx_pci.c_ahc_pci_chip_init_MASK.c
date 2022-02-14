
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int dscommand0; int dspcistatus; int optionmode; int crccontrol1; int scbbaddr; int dff_thrsh; int targcrccnt; } ;
struct TYPE_4__ {TYPE_1__ pci_softc; } ;
struct ahc_softc {int features; TYPE_2__ bus_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*,int ,int) ;
 int FUNC_3 (struct ahc_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ahc_softc *VAR_12)
{
 FUNC_2(VAR_12, VAR_6, VAR_12->bus_softc.pci_softc.dscommand0);
 FUNC_2(VAR_12, VAR_7, VAR_12->bus_softc.pci_softc.dspcistatus);
 if ((VAR_12->features & VAR_0) != 0) {
  u_int VAR_13;

  VAR_13 = FUNC_1(VAR_12, VAR_10) & ~VAR_3;
  FUNC_2(VAR_12, VAR_10, VAR_13 | VAR_3);
  FUNC_2(VAR_12, VAR_8, VAR_12->bus_softc.pci_softc.optionmode);
  FUNC_3(VAR_12, VAR_11, VAR_12->bus_softc.pci_softc.targcrccnt);
  FUNC_2(VAR_12, VAR_10, VAR_13);
  FUNC_2(VAR_12, VAR_4,
    VAR_12->bus_softc.pci_softc.crccontrol1);
 }
 if ((VAR_12->features & VAR_1) != 0)
  FUNC_2(VAR_12, VAR_9, VAR_12->bus_softc.pci_softc.scbbaddr);

 if ((VAR_12->features & VAR_2) != 0)
  FUNC_2(VAR_12, VAR_5, VAR_12->bus_softc.pci_softc.dff_thrsh);

 return (FUNC_0(VAR_12));
}
