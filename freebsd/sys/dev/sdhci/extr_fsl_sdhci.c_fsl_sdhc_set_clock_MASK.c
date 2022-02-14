
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct fsl_sdhci_softc {int sdclockreg_freq_bits; scalar_t__ hwtype; int baseclk_hz; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fsl_sdhci_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct fsl_sdhci_softc*,int ,int) ;
 int FUNC_2 (int ,char*,int,int,int,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct fsl_sdhci_softc *VAR_15, uint16_t VAR_16)
{
 uint32_t VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_20 = FUNC_0(VAR_15, VAR_2);






 VAR_15->sdclockreg_freq_bits = VAR_16 & VAR_3;
 if (VAR_15->hwtype == VAR_0) {
  if ((VAR_16 & VAR_1) == 0) {




   return;

  }
  VAR_17 = (VAR_16 >> VAR_8) & VAR_6;
  VAR_18 = VAR_15->baseclk_hz >> FUNC_3(VAR_17);
 } else {
  if ((VAR_16 & VAR_1) == 0)
   return;
  VAR_17 = ((VAR_16 >> VAR_8) & VAR_6) |
      ((VAR_16 >> VAR_5) & VAR_4) <<
      VAR_7;
  if (VAR_17 == 0)
   VAR_18 = VAR_15->baseclk_hz;
  else
   VAR_18 = VAR_15->baseclk_hz / (2 * VAR_17);
 }




 for (VAR_19 = 2; VAR_18 < VAR_15->baseclk_hz / (VAR_19 * 16);)
  VAR_19 <<= 1;

 for (VAR_17 = 1; VAR_18 < VAR_15->baseclk_hz / (VAR_19 * VAR_17);)
  ++VAR_17;
 VAR_19 >>= 1;
 VAR_17 -= 1;

 VAR_20 &= ~(VAR_9 | VAR_12);
 VAR_20 |= VAR_17 << VAR_10;
 VAR_20 |= VAR_19 << VAR_13;
 VAR_20 |= VAR_11;
 FUNC_1(VAR_15, VAR_2, VAR_20);
}
