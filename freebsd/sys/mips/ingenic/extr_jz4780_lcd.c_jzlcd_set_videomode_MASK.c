
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct videomode {int htotal; int hsync_end; int hsync_start; int hdisplay; int vtotal; int vsync_end; int vsync_start; int vdisplay; int dot_clock; } ;
struct lcd_frame_descriptor {int dummy; } ;
struct jzlcd_softc {int fdesc_paddr; int dev; int clk_pix; int fdesc_map; int fdesc_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct jzlcd_softc*,int ) ;
 int FUNC_2 (struct jzlcd_softc*,int ,int) ;
 int VAR_31 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct jzlcd_softc*,struct videomode const*,int) ;

__attribute__((used)) static int
FUNC_7(struct jzlcd_softc *VAR_32, const struct videomode *VAR_33)
{
 u_int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 u_int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
 uint32_t VAR_46;
 int VAR_47;

 VAR_34 = VAR_33->htotal - VAR_33->hsync_end;
 VAR_35 = VAR_33->hsync_start - VAR_33->hdisplay;
 VAR_36 = VAR_33->hsync_end - VAR_33->hsync_start;
 VAR_37 = VAR_33->vtotal - VAR_33->vsync_end;
 VAR_38 = VAR_33->vsync_start - VAR_33->vdisplay;
 VAR_39 = VAR_33->vsync_end - VAR_33->vsync_start;

 VAR_40 = VAR_36 + VAR_34;
 VAR_41 = VAR_40 + VAR_33->hdisplay;
 VAR_42 = VAR_41 + VAR_35;

 VAR_43 = VAR_39 + VAR_37;
 VAR_44 = VAR_43 + VAR_33->vdisplay;
 VAR_45 = VAR_44 + VAR_38;


 FUNC_2(VAR_32, VAR_27,
     (VAR_42 << VAR_28) | (VAR_45 << VAR_29));
 FUNC_2(VAR_32, VAR_16,
     (VAR_40 << VAR_18) | (VAR_41 << VAR_17));
 FUNC_2(VAR_32, VAR_19,
     (VAR_43 << VAR_21) | (VAR_44 << VAR_20));
 FUNC_2(VAR_32, VAR_22, VAR_36);
 FUNC_2(VAR_32, VAR_30, VAR_39);


 FUNC_2(VAR_32, VAR_1, VAR_4 | VAR_7 | VAR_2 |
     VAR_6 | VAR_3 | VAR_9 | VAR_8 | VAR_5);
 VAR_46 = FUNC_1(VAR_32, VAR_10);
 VAR_46 &= ~VAR_11;
 VAR_46 |= VAR_12 | VAR_13;
 FUNC_2(VAR_32, VAR_10, VAR_46);
 FUNC_2(VAR_32, VAR_23, VAR_31);
 FUNC_2(VAR_32, VAR_24, VAR_25);


 FUNC_2(VAR_32, VAR_26, 0);


 FUNC_6(VAR_32, VAR_33, 0);
 FUNC_6(VAR_32, VAR_33, 1);
 FUNC_3(VAR_32->fdesc_tag, VAR_32->fdesc_map, VAR_0);


 FUNC_2(VAR_32, VAR_14, VAR_32->fdesc_paddr
     + sizeof(struct lcd_frame_descriptor));
 FUNC_2(VAR_32, VAR_15, VAR_32->fdesc_paddr);


 VAR_47 = FUNC_4(VAR_32->clk_pix, FUNC_0(VAR_33->dot_clock), 0);
 if (VAR_47 != 0) {
  FUNC_5(VAR_32->dev, "failed to set pixel clock to %u Hz\n",
      FUNC_0(VAR_33->dot_clock));
  return (VAR_47);
 }

 return (0);
}
