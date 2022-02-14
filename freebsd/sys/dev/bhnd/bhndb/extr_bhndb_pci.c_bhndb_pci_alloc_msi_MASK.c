
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_pci_softc {int parent; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct bhndb_pci_softc *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;


 if (FUNC_2(VAR_2->parent) < VAR_0)
  return (VAR_1);


 VAR_5 = VAR_0;
 if ((VAR_4 = FUNC_1(VAR_2->parent, &VAR_5))) {
  FUNC_0(VAR_2->dev, "failed to allocate MSI interrupts: "
      "%d\n", VAR_4);

  return (VAR_4);
 }

 if (VAR_5 < VAR_0) {
  FUNC_3(VAR_2->parent);
  return (VAR_1);
 }

 *VAR_3 = VAR_5;
 return (0);
}
