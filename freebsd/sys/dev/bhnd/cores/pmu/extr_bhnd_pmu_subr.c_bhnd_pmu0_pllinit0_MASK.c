
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int chip_id; } ;
struct bhnd_pmu_softc {TYPE_1__ cid; } ;
struct TYPE_5__ {int freq; int xf; int wbint; int wbfrac; } ;
typedef TYPE_2__ pmu0_xtaltab0_t ;


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
 int FUNC_0 (struct bhnd_pmu_softc*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct bhnd_pmu_softc*,int ,int,int) ;
 int FUNC_3 (struct bhnd_pmu_softc*,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct bhnd_pmu_softc*,int ,int) ;
 size_t VAR_21 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bhnd_pmu_softc*,char*,...) ;
 int FUNC_8 (struct bhnd_pmu_softc*,int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_9 (struct bhnd_pmu_softc*,int ) ;
 int FUNC_10 (char*,int) ;
 TYPE_2__* VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static void
FUNC_11(struct bhnd_pmu_softc *VAR_26, uint32_t VAR_27)
{
 const pmu0_xtaltab0_t *VAR_28;
 uint32_t VAR_29, VAR_30;
 uint32_t VAR_31;
 uint32_t VAR_32;
 uint32_t VAR_33;


 if (VAR_27 == 0) {
  FUNC_7(VAR_26, "Unspecified xtal frequency, skipping PLL "
      "configuration\n");
  return;
 }


 for (VAR_28 = VAR_24; VAR_28->freq; VAR_28 ++) {
  if (VAR_28->freq == VAR_27)
   break;
 }

 if (VAR_28->freq == 0)
  VAR_28 = &VAR_24[VAR_21];

 FUNC_7(VAR_26, "XTAL %d.%d MHz (%d)\n", VAR_27 / 1000, VAR_27 % 1000,
     VAR_28->xf);


 VAR_32 = FUNC_3(VAR_26, VAR_14);
 VAR_33 = FUNC_1(VAR_32, VAR_17);
 if (VAR_33 == VAR_28->xf) {
  FUNC_7(VAR_26, "PLL already programmed for %d.%d MHz\n",
           VAR_28->freq / 1000, VAR_28->freq % 1000);
  return;
 }

 if (VAR_33 != 0) {
  FUNC_7(VAR_26,
      "Reprogramming PLL for %d.%d MHz (was %d.%dMHz)\n",
      VAR_28->freq / 1000, VAR_28->freq % 1000,
      VAR_24[VAR_25-1].freq / 1000,
      VAR_24[VAR_25-1].freq % 1000);
 } else {
  FUNC_7(VAR_26, "Programming PLL for %d.%d MHz\n",
      VAR_28->freq / 1000, VAR_28->freq % 1000);
 }


 switch (VAR_26->cid.chip_id) {
 case 129:
  VAR_31 = FUNC_6(VAR_22);
  break;
 case 128:
  VAR_31 = FUNC_6(VAR_23);
  break;
 default:
  FUNC_10("unsupported chipid %#hx\n", VAR_26->cid.chip_id);
 }
 FUNC_0(VAR_26, VAR_20, ~VAR_31);
 FUNC_0(VAR_26, VAR_19, ~VAR_31);


 FUNC_8(VAR_26, 0, VAR_0);

 FUNC_7(VAR_26, "Done masking\n");


 if (VAR_28->freq >= VAR_2) {
  FUNC_2(VAR_26, VAR_11,
      VAR_3, VAR_3);
 } else {
  FUNC_2(VAR_26, VAR_11, 0,
      VAR_3);
 }


 VAR_29 =
     FUNC_4(VAR_28->wbint, VAR_7) |
     FUNC_4(VAR_28->wbfrac, VAR_5);

 if (VAR_28->wbfrac == 0) {
  VAR_29 |= VAR_4;
 } else {
  VAR_29 &= ~VAR_4;
 }

 VAR_30 =
     VAR_8 |
     VAR_6;

 FUNC_2(VAR_26, VAR_12, VAR_29, VAR_30);


 VAR_29 = FUNC_4(VAR_28->wbint, VAR_9);
 VAR_30 = VAR_10;
 FUNC_2(VAR_26, VAR_13, VAR_29, VAR_30);

 FUNC_7(VAR_26, "Done pll\n");


 VAR_32 = FUNC_3(VAR_26, VAR_14);
 VAR_32 &= ~(VAR_16|VAR_18);

 VAR_32 |= FUNC_4(((VAR_28->freq + 127) / 128) - 1,
     VAR_15);
 VAR_32 |= FUNC_4(VAR_28->xf, VAR_17);

 FUNC_5(VAR_26, VAR_14, VAR_32);
}
