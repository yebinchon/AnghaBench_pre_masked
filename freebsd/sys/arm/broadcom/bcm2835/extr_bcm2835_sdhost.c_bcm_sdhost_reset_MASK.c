
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sdhci_slot {int dummy; } ;
struct bcm_sdhost_softc {int sdhci_present_state; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct bcm_sdhost_softc*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct bcm_sdhost_softc*,int ,int) ;
 struct bcm_sdhost_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_22, struct sdhci_slot *VAR_23)
{
 struct bcm_sdhost_softc *VAR_24 = FUNC_3(VAR_22);
 u_int32_t VAR_25;

 FUNC_2(VAR_24, VAR_16, 0);

 FUNC_2(VAR_24, VAR_5, 0);
 FUNC_2(VAR_24, VAR_0, 0);
 FUNC_2(VAR_24, VAR_17, VAR_18);
 FUNC_2(VAR_24, VAR_3, 0);
 FUNC_2(VAR_24, VAR_13, VAR_15);
 FUNC_2(VAR_24, VAR_12, 0);
 FUNC_2(VAR_24, VAR_2, 0);
 FUNC_2(VAR_24, VAR_1, 0);

 VAR_25 = FUNC_1(VAR_24, VAR_9);
 VAR_25 &= ~( (VAR_6 << VAR_7) |
           (VAR_6 << VAR_8) );
 VAR_25 |= (VAR_10 << VAR_7) |
        (VAR_11 << VAR_8);
 FUNC_2(VAR_24, VAR_9, VAR_25);

 FUNC_0(250000);

 FUNC_2(VAR_24, VAR_16, 1);

 FUNC_0(250000);

 VAR_24->sdhci_present_state = VAR_19 | VAR_20 |
  VAR_21;

 FUNC_2(VAR_24, VAR_3, VAR_4);
 FUNC_2(VAR_24, VAR_12, VAR_14);
}
