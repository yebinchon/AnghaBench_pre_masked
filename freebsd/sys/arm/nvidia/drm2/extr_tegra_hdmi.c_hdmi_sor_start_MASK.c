
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_softc {int dev; } ;
struct drm_display_mode {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct hdmi_softc*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ) ;
 int VAR_20 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (struct hdmi_softc*,int ,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int
FUNC_9(struct hdmi_softc *VAR_23, struct drm_display_mode *VAR_24)
{
 int VAR_25;
 uint32_t VAR_26;


 VAR_26 = FUNC_1(VAR_23, VAR_7);
 VAR_26 &= ~VAR_14;
 VAR_26 &= ~VAR_15;
 VAR_26 &= ~VAR_13;
 FUNC_7(VAR_23, VAR_7, VAR_26);
 FUNC_0(10);

 VAR_26 = FUNC_1(VAR_23, VAR_7);
 VAR_26 &= ~VAR_12;
 FUNC_7(VAR_23, VAR_7, VAR_26);

 FUNC_7(VAR_23, VAR_8, VAR_16);
 FUNC_7(VAR_23, VAR_8, 0);


 for (VAR_25 = 1000; VAR_25 > 0; VAR_25--) {
  VAR_26 = FUNC_1(VAR_23, VAR_8);
  if ((VAR_26 & VAR_16) == 0)
   break;
  FUNC_0(10);
 }
 if (VAR_25 <= 0) {
  FUNC_8(VAR_23->dev, "Timeouted while enabling SOR power.\n");
  return (VAR_6);
 }

 VAR_26 = FUNC_4(VAR_2) |
     FUNC_6(VAR_22) |
     FUNC_3(VAR_0) |
     FUNC_5(VAR_3);
 if (VAR_24->flags & VAR_4)
  VAR_26 |= VAR_20;
 if (VAR_24->flags & VAR_5)
  VAR_26 |= VAR_21;
 FUNC_7(VAR_23, VAR_11, VAR_26);

 FUNC_7(VAR_23, VAR_10, VAR_18 |
     FUNC_2(VAR_1));

 FUNC_7(VAR_23, VAR_9, 0);
 FUNC_7(VAR_23, VAR_9, VAR_17);

 VAR_26 = FUNC_1(VAR_23, VAR_10);
 VAR_26 |= VAR_19;
 FUNC_7(VAR_23, VAR_10, VAR_26);

 FUNC_7(VAR_23, VAR_9, 0);

 return 0;
}
