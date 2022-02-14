
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_pci_softc {scalar_t__ msi_count; int parent; int isrc; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct bhndb_pci_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct bhndb_pci_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_0)
{
 struct bhndb_pci_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_5(VAR_0);


 if ((VAR_2 = FUNC_4(VAR_0)))
  return (VAR_2);


 if ((VAR_2 = FUNC_3(VAR_0)))
  return (VAR_2);


 if ((VAR_2 = FUNC_1(VAR_1->dev)))
  return (VAR_2);


 FUNC_2(VAR_1->isrc);


 if (VAR_1->msi_count > 0)
  FUNC_7(VAR_1->parent);


 FUNC_6(VAR_1->parent);

 FUNC_0(VAR_1);

 return (0);
}
