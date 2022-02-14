
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ciss_softc {int ciss_msi; int* ciss_irq_rid; int ciss_dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ciss_softc*,char*,int,char*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct ciss_softc *VAR_5)
{
    int VAR_6, VAR_7;


    VAR_7 = FUNC_1(VAR_5->ciss_dev);
    if (VAR_4[VAR_7].flags & VAR_0)
 return (VAR_2);





    VAR_6 = FUNC_7(VAR_5->ciss_dev);
    if (VAR_6 < VAR_1) {
 VAR_6 = FUNC_6(VAR_5->ciss_dev);
 FUNC_3(VAR_5->ciss_dev, "got %d MSI messages]\n", VAR_6);
 if (VAR_6 < VAR_1)
     return (VAR_2);
    }
    VAR_6 = FUNC_0(VAR_6, VAR_1);
    if (FUNC_5(VAR_5->ciss_dev, &VAR_6) != 0) {
 if (FUNC_4(VAR_5->ciss_dev, &VAR_6) != 0)
     return (VAR_2);
    }

    VAR_5->ciss_msi = VAR_6;
    if (VAR_3)
 FUNC_2(VAR_5, "Using %d MSIX interrupt%s\n", VAR_6,
     (VAR_6 != 1) ? "s" : "");

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 VAR_5->ciss_irq_rid[VAR_7] = VAR_7 + 1;

    return (0);

}
