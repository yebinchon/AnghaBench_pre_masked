
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct videomode {int flags; int hdisplay; int vdisplay; } ;
struct a10fb_softc {int paddr; int dev; } ;
typedef int hwreset_t ;
typedef int clk_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (struct a10fb_softc*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct a10fb_softc*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,char*,int *) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_19(struct a10fb_softc *VAR_25, const struct videomode *VAR_26)
{
 int VAR_27, VAR_28, VAR_29, VAR_30;
 clk_t VAR_31, VAR_32, VAR_33;
 hwreset_t VAR_34;
 uint32_t VAR_35;
 int VAR_36;

 VAR_29 = !!(VAR_26->flags & VAR_24);
 VAR_27 = VAR_26->hdisplay;
 VAR_28 = VAR_26->vdisplay << VAR_29;


 VAR_36 = FUNC_18(VAR_25->dev, 0, "de_be", &VAR_34);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "cannot find reset 'de_be'\n");
  return (VAR_36);
 }
 VAR_36 = FUNC_17(VAR_34);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "couldn't de-assert reset 'de_be'\n");
  return (VAR_36);
 }

 VAR_36 = FUNC_14(VAR_25->dev, 0, "ahb_de_be", &VAR_31);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "cannot find clk 'ahb_de_be'\n");
  return (VAR_36);
 }
 VAR_36 = FUNC_13(VAR_31);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "cannot enable clk 'ahb_de_be'\n");
  return (VAR_36);
 }

 VAR_36 = FUNC_14(VAR_25->dev, 0, "dram_de_be", &VAR_32);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "cannot find clk 'dram_de_be'\n");
  return (VAR_36);
 }
 VAR_36 = FUNC_13(VAR_32);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "cannot enable clk 'dram_de_be'\n");
  return (VAR_36);
 }

 VAR_36 = FUNC_14(VAR_25->dev, 0, "de_be", &VAR_33);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "cannot find clk 'de_be'\n");
  return (VAR_36);
 }
 VAR_36 = FUNC_15(VAR_33, VAR_3, VAR_0);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "cannot set 'de_be' frequency\n");
  return (VAR_36);
 }
 VAR_36 = FUNC_13(VAR_33);
 if (VAR_36 != 0) {
  FUNC_16(VAR_25->dev, "cannot enable clk 'de_be'\n");
  return (VAR_36);
 }


 for (VAR_30 = VAR_12; VAR_30 < VAR_11; VAR_30 += VAR_13)
  FUNC_3(VAR_25, VAR_30, 0);


 FUNC_3(VAR_25, VAR_9, VAR_17);


 FUNC_3(VAR_25, VAR_2, FUNC_4(VAR_28) | FUNC_5(VAR_27));


 FUNC_3(VAR_25, VAR_8, FUNC_8(VAR_28) | FUNC_9(VAR_27));
 FUNC_3(VAR_25, VAR_4, FUNC_10(0) | FUNC_11(0));
 FUNC_3(VAR_25, VAR_7, VAR_27 * VAR_16);


 FUNC_3(VAR_25, VAR_6, FUNC_7(VAR_25->paddr));
 FUNC_3(VAR_25, VAR_5, FUNC_6(VAR_25->paddr));


 FUNC_3(VAR_25, VAR_1, FUNC_0(VAR_14) |
     FUNC_1(VAR_15));


 VAR_35 = FUNC_2(VAR_25, VAR_9);
 VAR_35 |= VAR_19;
 VAR_35 &= ~VAR_20;
 VAR_35 |= FUNC_12(VAR_22);
 if (VAR_29)
  VAR_35 |= VAR_18;
 else
  VAR_35 &= ~VAR_18;
 FUNC_3(VAR_25, VAR_9, VAR_35);


 FUNC_3(VAR_25, VAR_10, VAR_23);


 VAR_35 = FUNC_2(VAR_25, VAR_9);
 VAR_35 |= VAR_21;
 FUNC_3(VAR_25, VAR_9, VAR_35);

 return (0);
}
