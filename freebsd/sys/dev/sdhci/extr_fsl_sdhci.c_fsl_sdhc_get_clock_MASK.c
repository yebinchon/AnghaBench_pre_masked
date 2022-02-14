
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fsl_sdhci_softc {scalar_t__ hwtype; int sdclockreg_freq_bits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fsl_sdhci_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static uint16_t
FUNC_1(struct fsl_sdhci_softc *VAR_8)
{
 uint16_t VAR_9;
 VAR_9 = VAR_8->sdclockreg_freq_bits;






 VAR_9 |= VAR_2;
 if (FUNC_0(VAR_8, VAR_6) & VAR_5)
     VAR_9 |= VAR_3;
 if (VAR_8->hwtype == VAR_0) {



   VAR_9 |= VAR_1;
 } else {
  VAR_9 |= VAR_1;
 }

 return (VAR_9);
}
