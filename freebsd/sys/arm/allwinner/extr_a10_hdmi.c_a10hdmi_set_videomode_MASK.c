
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct videomode {int flags; int hsync_start; int hdisplay; int hsync_end; int htotal; int vsync_start; int vdisplay; int vsync_end; int vtotal; } ;
struct a10hdmi_softc {scalar_t__ has_hdmi; scalar_t__ has_audio; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct a10hdmi_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct a10hdmi_softc*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,int ) ;
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
 int FUNC_3 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_38 ;
 int FUNC_12 (struct a10hdmi_softc*,int*,int*) ;
 int FUNC_13 (int ,struct videomode const*) ;
 scalar_t__ VAR_39 ;
 struct a10hdmi_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_40, const struct videomode *VAR_41)
{
 struct a10hdmi_softc *VAR_42;
 int VAR_43, VAR_44, VAR_45;
 int VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52;
 uint32_t VAR_53;

 VAR_42 = FUNC_14(VAR_40);
 VAR_46 = !!(VAR_41->flags & VAR_33);
 VAR_47 = VAR_41->hsync_start - VAR_41->hdisplay;
 VAR_48 = VAR_41->hsync_end - VAR_41->hsync_start;
 VAR_49 = VAR_41->htotal - VAR_41->hsync_start;
 VAR_50 = VAR_41->vsync_start - VAR_41->vdisplay;
 VAR_51 = VAR_41->vsync_end - VAR_41->vsync_start;
 VAR_52 = VAR_41->vtotal - VAR_41->vsync_start;

 VAR_43 = FUNC_12(VAR_42, &VAR_44, &VAR_45);
 if (VAR_43 != 0) {
  FUNC_15(VAR_40, "couldn't get tcon config: %d\n", VAR_43);
  return (VAR_43);
 }


 FUNC_1(VAR_42, VAR_0, FUNC_0(VAR_42, VAR_0));


 VAR_53 = FUNC_0(VAR_42, VAR_1);
 VAR_53 &= ~VAR_11;
 VAR_53 |= (VAR_45 ? VAR_13 : VAR_12);
 FUNC_1(VAR_42, VAR_1, VAR_53);
 FUNC_1(VAR_42, VAR_4, VAR_24 | VAR_18 |
     VAR_21 | VAR_22 | VAR_23 |
     VAR_26 | VAR_27 | VAR_25 |
     VAR_19 | VAR_20 | FUNC_3(VAR_44) |
     VAR_28);


 if (VAR_39)
  FUNC_15(VAR_40, "HDMI: %s, Audio: %s\n",
      VAR_42->has_hdmi ? "yes" : "no", VAR_42->has_audio ? "yes" : "no");
 VAR_53 = 0;
 if (VAR_42->has_hdmi)
  VAR_53 |= VAR_30;
 if (VAR_41->flags & VAR_35)
  VAR_53 |= VAR_31;
 if (VAR_41->flags & VAR_33)
  VAR_53 |= VAR_32;
 FUNC_1(VAR_42, VAR_5, VAR_53);


 FUNC_1(VAR_42, VAR_6,
     FUNC_5(VAR_41->vdisplay) | FUNC_4(VAR_41->hdisplay << VAR_46));
 FUNC_1(VAR_42, VAR_7,
     FUNC_9(VAR_52) | FUNC_6(VAR_49 << VAR_46));
 FUNC_1(VAR_42, VAR_8,
     FUNC_10(VAR_50) | FUNC_7(VAR_47 << VAR_46));
 FUNC_1(VAR_42, VAR_9,
     FUNC_11(VAR_51) | FUNC_8(VAR_48 << VAR_46));
 VAR_53 = VAR_29;
 if (VAR_41->flags & VAR_37)
  VAR_53 |= VAR_38;
 if (VAR_41->flags & VAR_36)
  VAR_53 |= VAR_34;
 FUNC_1(VAR_42, VAR_10, VAR_53);
 FUNC_1(VAR_42, VAR_2,
     FUNC_2(0, VAR_17) | FUNC_2(1, VAR_15) |
     FUNC_2(2, VAR_14) | FUNC_2(3, VAR_16));
 FUNC_1(VAR_42, VAR_3, 0);


 FUNC_13(VAR_40, VAR_41);

 return (0);
}
