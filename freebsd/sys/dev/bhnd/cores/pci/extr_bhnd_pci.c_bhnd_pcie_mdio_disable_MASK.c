
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pci_softc {int dev; } ;


 scalar_t__ FUNC_0 (struct bhnd_pci_softc*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct bhnd_pci_softc *VAR_0)
{
 if (FUNC_0(VAR_0, 0))
  FUNC_1(VAR_0->dev, "failed to disable MDIO clock\n");
}
