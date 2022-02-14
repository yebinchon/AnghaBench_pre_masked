
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtx; } ;
struct fsl_sdhci_softc {TYPE_1__ slot; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ FUNC_0 (struct fsl_sdhci_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(void * VAR_0)
{
 struct fsl_sdhci_softc *VAR_1 = VAR_0;
 boolean_t VAR_2;

 FUNC_1(&VAR_1->slot.mtx);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_1->slot.mtx);
 if (VAR_2)
  FUNC_3(&VAR_1->slot);
}
