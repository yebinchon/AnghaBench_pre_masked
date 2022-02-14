
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_pci_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bhndb_pci_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct bhndb_pci_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);


 if ((VAR_2 = FUNC_0(VAR_1->dev)))
  return (VAR_2);


 return (FUNC_1(VAR_0));
}
