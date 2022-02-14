
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sdhci_slot {int dummy; } ;
struct fsl_sdhci_softc {int r1bfix_intmask; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct fsl_sdhci_softc*,int ,int ) ;
 struct fsl_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, struct sdhci_slot *VAR_2, bus_size_t VAR_3, uint32_t VAR_4)
{
 struct fsl_sdhci_softc *VAR_5 = FUNC_1(VAR_1);


 if (VAR_3 == VAR_0) {
  VAR_5->r1bfix_intmask &= ~VAR_4;
 }

 FUNC_0(VAR_5, VAR_3, VAR_4);
}
