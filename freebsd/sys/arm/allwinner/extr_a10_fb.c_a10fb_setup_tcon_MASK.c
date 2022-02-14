
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct videomode {int flags; int hdisplay; int vdisplay; int hsync_end; int hsync_start; int htotal; int vsync_end; int vsync_start; int vtotal; int dot_clock; } ;
struct a10fb_softc {int dev; } ;
typedef int hwreset_t ;
typedef int clk_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 int FUNC_10 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int) ;
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
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_14 (struct a10fb_softc*,int ,int) ;
 int FUNC_15 (int,int,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct a10fb_softc*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,char*,int *) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_23(struct a10fb_softc *VAR_24, const struct videomode *VAR_25)
{
 u_int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 u_int VAR_35, VAR_36, VAR_37;
 clk_t VAR_38;
 hwreset_t VAR_39;
 uint32_t VAR_40;
 int VAR_41;

 VAR_26 = !!(VAR_25->flags & VAR_21);
 VAR_32 = VAR_25->hdisplay;
 VAR_33 = VAR_25->vdisplay;
 VAR_27 = VAR_25->hsync_end - VAR_25->hsync_start;
 VAR_28 = VAR_25->htotal - VAR_25->hsync_start;
 VAR_29 = VAR_25->vsync_end - VAR_25->vsync_start;
 VAR_30 = VAR_25->vtotal - VAR_25->vsync_start;
 VAR_31 = FUNC_15(VAR_25->vtotal, VAR_25->vdisplay, VAR_26);
 VAR_34 = FUNC_11(VAR_31);


 VAR_41 = FUNC_22(VAR_24->dev, 0, "lcd", &VAR_39);
 if (VAR_41 != 0) {
  FUNC_20(VAR_24->dev, "cannot find reset 'lcd'\n");
  return (VAR_41);
 }
 VAR_41 = FUNC_21(VAR_39);
 if (VAR_41 != 0) {
  FUNC_20(VAR_24->dev, "couldn't de-assert reset 'lcd'\n");
  return (VAR_41);
 }

 VAR_41 = FUNC_19(VAR_24->dev, 0, "ahb_lcd", &VAR_38);
 if (VAR_41 != 0) {
  FUNC_20(VAR_24->dev, "cannot find clk 'ahb_lcd'\n");
  return (VAR_41);
 }
 VAR_41 = FUNC_18(VAR_38);
 if (VAR_41 != 0) {
  FUNC_20(VAR_24->dev, "cannot enable clk 'ahb_lcd'\n");
  return (VAR_41);
 }


 FUNC_14(VAR_24, VAR_19, 0);
 FUNC_14(VAR_24, VAR_14, 0);


 FUNC_14(VAR_24, VAR_7, VAR_0);


 FUNC_14(VAR_24, VAR_17, VAR_6);


 FUNC_14(VAR_24, VAR_19, VAR_1);


 FUNC_14(VAR_24, VAR_8, FUNC_6(VAR_32) | FUNC_7(VAR_33));

 FUNC_14(VAR_24, VAR_9, FUNC_6(VAR_32) | FUNC_7(VAR_33));

 FUNC_14(VAR_24, VAR_10, FUNC_6(VAR_32) | FUNC_7(VAR_33));

 FUNC_14(VAR_24, VAR_11, FUNC_1(VAR_25->htotal) | FUNC_0(VAR_28));

 VAR_35 = FUNC_16(VAR_25->vtotal);
 if (VAR_26) {
  VAR_36 = FUNC_8(FUNC_8(FUNC_9(VAR_25->dot_clock),
      VAR_25->htotal), VAR_25->vtotal);
  VAR_37 = VAR_25->htotal * (FUNC_16(VAR_25->vtotal) + 1) * VAR_36;
  if ((VAR_37 / 2) == FUNC_9(VAR_25->dot_clock))
   VAR_35 += 1;
 }
 FUNC_14(VAR_24, VAR_12, FUNC_3(VAR_35) | FUNC_2(VAR_30));

 FUNC_14(VAR_24, VAR_13, FUNC_4(VAR_27) | FUNC_5(VAR_29));

 VAR_40 = VAR_3;
 if (VAR_25->flags & VAR_22)
  VAR_40 |= VAR_4;
 if (VAR_25->flags & VAR_23)
  VAR_40 |= VAR_5;
 FUNC_14(VAR_24, VAR_16, VAR_40);


 FUNC_14(VAR_24, VAR_20, FUNC_10(VAR_34));


 VAR_40 = VAR_15;
 if (VAR_26)
  VAR_40 |= VAR_2;
 VAR_40 |= FUNC_13(VAR_34);
 VAR_40 |= FUNC_12(VAR_18);
 FUNC_14(VAR_24, VAR_14, VAR_40);


 return (FUNC_17(VAR_24, FUNC_9(VAR_25->dot_clock)));
}
