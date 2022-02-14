
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int caps; } ;
struct TYPE_4__ {TYPE_1__ host; } ;
struct ti_sdhci_softc {TYPE_2__ slot; int baseclk_hz; int mmchs_clk_id; } ;
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
 struct ti_sdhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ti_sdhci_softc*,int ) ;
 int FUNC_4 (struct ti_sdhci_softc*,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int *,int ,int) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_16)
{
 struct ti_sdhci_softc *VAR_17 = FUNC_1(VAR_16);
 uint32_t VAR_18;
 unsigned long VAR_19;


 if (FUNC_5(VAR_17->mmchs_clk_id) != 0) {
  FUNC_2(VAR_16, "Error: failed to enable MMC clock\n");
  return;
 }


 if (FUNC_6(VAR_17->mmchs_clk_id,
     &VAR_17->baseclk_hz) != 0) {
  FUNC_2(VAR_16, "Error: failed to get source clock freq\n");
  return;
 }


 FUNC_4(VAR_17, VAR_5, VAR_6);
 VAR_19 = 1000;
 while (!(FUNC_3(VAR_17, VAR_7) &
     VAR_8)) {
  if (--VAR_19 == 0) {
   FUNC_2(VAR_16,
       "Error: Controller reset operation timed out\n");
   break;
  }
  FUNC_0(100);
 }
 FUNC_8(VAR_16, ((void*)0), VAR_15, VAR_14);
 VAR_19 = 10000;
 while ((FUNC_7(VAR_16, ((void*)0), VAR_15) &
     VAR_14) != VAR_14) {
  if (--VAR_19 == 0) {
   break;
  }
  FUNC_0(1);
 }
 VAR_19 = 10000;
 while ((FUNC_7(VAR_16, ((void*)0), VAR_15) &
     VAR_14)) {
  if (--VAR_19 == 0) {
   FUNC_2(VAR_16,
       "Error: Software reset operation timed out\n");
   break;
  }
  FUNC_0(100);
 }
 VAR_18 = FUNC_3(VAR_17, VAR_2);
 if (VAR_17->slot.host.caps & VAR_11)
  VAR_18 |= VAR_3;
 if (VAR_17->slot.host.caps & (VAR_9 | VAR_10))
  VAR_18 |= VAR_4;
 FUNC_4(VAR_17, VAR_2, VAR_18);


 FUNC_8(VAR_16, ((void*)0), VAR_12, 0);
 FUNC_8(VAR_16, ((void*)0), VAR_13, 0);


 FUNC_4(VAR_17, VAR_0, VAR_1);
}
