
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_sdhci_softc {int gpio; } ;
typedef int device_t ;


 struct fsl_sdhci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct fsl_sdhci_softc *VAR_2 = FUNC_0(VAR_0);

 return (FUNC_1(VAR_2->gpio));
}
