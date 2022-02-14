
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {int interrupt_mode; int intr_count; int dev; TYPE_1__* intr; } ;
struct TYPE_2__ {int * resource; int rid; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_2)
{
    int VAR_3;

    switch (VAR_2->interrupt_mode) {
    case 130:
        FUNC_0(VAR_2, VAR_0, "Releasing legacy INTx vector\n");
        if (VAR_2->intr[0].resource != ((void*)0)) {
            FUNC_1(VAR_2->dev,
                                 VAR_1,
                                 VAR_2->intr[0].rid,
                                 VAR_2->intr[0].resource);
        }
        break;
    case 129:
        for (VAR_3 = 0; VAR_3 < VAR_2->intr_count; VAR_3++) {
            FUNC_0(VAR_2, VAR_0, "Releasing MSI vector %d\n", VAR_3);
            if (VAR_2->intr[VAR_3].resource && VAR_2->intr[VAR_3].rid) {
                FUNC_1(VAR_2->dev,
                                     VAR_1,
                                     VAR_2->intr[VAR_3].rid,
                                     VAR_2->intr[VAR_3].resource);
            }
        }
        FUNC_2(VAR_2->dev);
        break;
    case 128:
        for (VAR_3 = 0; VAR_3 < VAR_2->intr_count; VAR_3++) {
            FUNC_0(VAR_2, VAR_0, "Releasing MSI-X vector %d\n", VAR_3);
            if (VAR_2->intr[VAR_3].resource && VAR_2->intr[VAR_3].rid) {
                FUNC_1(VAR_2->dev,
                                     VAR_1,
                                     VAR_2->intr[VAR_3].rid,
                                     VAR_2->intr[VAR_3].resource);
            }
        }
        FUNC_2(VAR_2->dev);
        break;
    default:

        break;
    }
}
