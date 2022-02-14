
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_mv_softc {int ** phy; int dev; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int **) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct pci_mv_softc *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2->dev, VAR_2->node, VAR_3, &(VAR_2->phy[VAR_3]));
  if (VAR_4 != 0 && VAR_4 != VAR_0) {
     FUNC_0(VAR_2->dev, "Cannot get phy[%d]\n", VAR_3);
     goto fail;
    }
    if (VAR_2->phy[VAR_3] == ((void*)0))
     continue;
    VAR_4 = FUNC_1(VAR_2->phy[VAR_3]);
    if (VAR_4 != 0) {
     FUNC_0(VAR_2->dev, "Cannot enable phy[%d]\n", VAR_3);
     goto fail;
    }
   }
   return (0);

fail:
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->phy[VAR_3] == ((void*)0))
   continue;
  FUNC_3(VAR_2->phy[VAR_3]);
   }

 return (VAR_4);
}
