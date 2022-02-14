
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_pci_softc {int bhndb_dev; int quirks; int devcfg; int dev; } ;
struct bwn_pci_device {int quirks; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 scalar_t__ FUNC_1 (int ,int *,struct bwn_pci_device const**) ;
 struct bwn_pci_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct bwn_pci_softc *VAR_2;
 const struct bwn_pci_device *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->dev = VAR_1;


 if (FUNC_1(VAR_1, &VAR_2->devcfg, &VAR_3))
  return (VAR_0);


 VAR_2->quirks = VAR_3->quirks;


 if ((VAR_4 = FUNC_0(VAR_1, &VAR_2->bhndb_dev, -1)))
  return (VAR_0);


 return (0);
}
