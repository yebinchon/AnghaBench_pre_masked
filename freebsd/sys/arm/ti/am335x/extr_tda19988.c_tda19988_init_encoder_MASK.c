
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct videomode {int htotal; int vtotal; int hsync_end; int hdisplay; int hsync_start; int flags; int hskew; int vsync_start; int vdisplay; int vsync_end; int dot_clock; } ;
struct tda19988_softc {scalar_t__ sc_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tda19988_softc*,int ,int ) ;
 int FUNC_5 (struct tda19988_softc*,int ,int ) ;
 int FUNC_6 (struct tda19988_softc*,int ,int) ;
 int FUNC_7 (struct tda19988_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct tda19988_softc *VAR_66, const struct videomode *VAR_67)
{
 uint16_t VAR_68, VAR_69, VAR_70, VAR_71;
 uint16_t VAR_72, VAR_73;
 uint16_t VAR_74, VAR_75;
 uint16_t VAR_76, VAR_77;
 uint16_t VAR_78, VAR_79;
 uint16_t VAR_80, VAR_81;
 uint16_t VAR_82, VAR_83;
 uint16_t VAR_84, VAR_85;
 uint16_t VAR_86, VAR_87;
 uint8_t VAR_88, VAR_89;

 VAR_70 = VAR_67->htotal;
 VAR_71 = VAR_67->vtotal;

 VAR_73 = VAR_67->hsync_end - VAR_67->hdisplay;
 VAR_72 = VAR_67->hsync_start - VAR_67->hdisplay;

 VAR_87 = VAR_67->htotal;
 VAR_86 = VAR_67->htotal - VAR_67->hdisplay;
 VAR_68 = VAR_72 + 3;

 if (VAR_67->flags & VAR_57)
  VAR_68 += VAR_67->hskew;

 if ((VAR_67->flags & VAR_58) == 0) {
  VAR_69 = 1 + VAR_67->vsync_start - VAR_67->vdisplay;
  VAR_82 = VAR_67->vtotal - VAR_67->vdisplay - 1;
  VAR_83 = VAR_82 + VAR_67->vdisplay;

  VAR_74 = VAR_75 = VAR_72;
  VAR_76 = VAR_67->vsync_start - VAR_67->vdisplay;
  VAR_77 = VAR_76 + VAR_67->vsync_end - VAR_67->vsync_start;

  VAR_84 = VAR_85 = 0;
  VAR_78 = VAR_79 = 0;
  VAR_80 = VAR_81 = 0;
 } else {
  VAR_69 = 1 + (VAR_67->vsync_start - VAR_67->vdisplay)/2;
  VAR_82 = (VAR_67->vtotal - VAR_67->vdisplay)/2;
  VAR_83 = VAR_82 + VAR_67->vdisplay/2;

  VAR_74 = VAR_75 = VAR_72;
  VAR_76 = (VAR_67->vsync_start - VAR_67->vdisplay)/2;
  VAR_77 = VAR_76 + (VAR_67->vsync_end - VAR_67->vsync_start)/2;

  VAR_84 = VAR_82 + VAR_67->vtotal/2;
  VAR_85 = VAR_84 + VAR_67->vdisplay/2;

  VAR_78 = VAR_79 = VAR_72 + VAR_67->htotal/2;
  VAR_80 = VAR_76 + VAR_67->vtotal/2 ;
  VAR_81 = VAR_80 + (VAR_67->vsync_end - VAR_67->vsync_start)/2;
 }

 VAR_89 = 148500 / VAR_67->dot_clock;
 if (VAR_89 != 0) {
  VAR_89--;
  if (VAR_89 > 3)
   VAR_89 = 3;
 }


 FUNC_5(VAR_66, VAR_40, VAR_13);
 FUNC_4(VAR_66, VAR_23, VAR_1);
 FUNC_6(VAR_66, VAR_22, VAR_0);


 FUNC_6(VAR_66, VAR_26,
     VAR_2 | VAR_3);
 FUNC_6(VAR_66, VAR_44, FUNC_3(0));
 FUNC_6(VAR_66, VAR_43,
     VAR_64 | VAR_65);

 FUNC_4(VAR_66, VAR_33, VAR_7);
 FUNC_4(VAR_66, VAR_31, VAR_6);
 FUNC_4(VAR_66, VAR_33, VAR_8);
 FUNC_6(VAR_66, VAR_38, 0);
 FUNC_6(VAR_66, VAR_27, VAR_4);

 FUNC_6(VAR_66, VAR_36, 0);
 FUNC_6(VAR_66, VAR_37, FUNC_2(0) |
   VAR_10 | VAR_9);

 FUNC_6(VAR_66, VAR_32, FUNC_0(VAR_89) |
   FUNC_1(0));

 FUNC_5(VAR_66, VAR_28, VAR_5);

 FUNC_6(VAR_66, VAR_18, 0x09);

 FUNC_4(VAR_66, VAR_39, VAR_11);




 VAR_88 = VAR_62;
 if (VAR_67->flags & VAR_59)
  VAR_88 |= VAR_61;
 if (VAR_67->flags & VAR_60)
  VAR_88 |= VAR_63;
 FUNC_6(VAR_66, VAR_42, VAR_88);

 VAR_88 = VAR_15;
 if (VAR_67->flags & VAR_59)
  VAR_88 |= VAR_14;
 if (VAR_67->flags & VAR_60)
  VAR_88 |= VAR_16;
 FUNC_6(VAR_66, VAR_40, VAR_88);


 FUNC_6(VAR_66, VAR_41, 0x00);

 FUNC_7(VAR_66, VAR_35, VAR_68);
 FUNC_7(VAR_66, VAR_34, VAR_69);
 FUNC_7(VAR_66, VAR_30, VAR_70);
 FUNC_7(VAR_66, VAR_29, VAR_71);

 FUNC_7(VAR_66, VAR_47, VAR_76);
 FUNC_7(VAR_66, VAR_51, VAR_74);
 FUNC_7(VAR_66, VAR_45, VAR_77);
 FUNC_7(VAR_66, VAR_49, VAR_75);
 FUNC_7(VAR_66, VAR_48, VAR_80);
 FUNC_7(VAR_66, VAR_52, VAR_78);
 FUNC_7(VAR_66, VAR_46, VAR_81);
 FUNC_7(VAR_66, VAR_50, VAR_79);
 FUNC_7(VAR_66, VAR_24, VAR_72);
 FUNC_7(VAR_66, VAR_25, VAR_73);
 FUNC_7(VAR_66, VAR_55, VAR_82);
 FUNC_7(VAR_66, VAR_53, VAR_83);
 FUNC_7(VAR_66, VAR_56, VAR_84);
 FUNC_7(VAR_66, VAR_54, VAR_85);
 FUNC_7(VAR_66, VAR_19, VAR_86);
 FUNC_7(VAR_66, VAR_20, VAR_87);

 if (VAR_66->sc_version == VAR_17)
  FUNC_6(VAR_66, VAR_21, 0x00);


 FUNC_4(VAR_66, VAR_39, VAR_12);
}
