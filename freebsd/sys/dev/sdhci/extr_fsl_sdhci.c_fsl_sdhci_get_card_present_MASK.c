
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int dummy; } ;
struct fsl_sdhci_softc {int gpio; } ;
typedef int device_t ;


 struct fsl_sdhci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(device_t VAR_0, struct sdhci_slot *VAR_1)
{
 struct fsl_sdhci_softc *VAR_2 = FUNC_0(VAR_0);

 return (FUNC_1(VAR_2->gpio));
}
