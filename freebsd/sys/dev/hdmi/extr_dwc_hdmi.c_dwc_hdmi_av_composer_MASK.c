
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int flags; int hdisplay; int vdisplay; int htotal; int vtotal; int hsync_start; int vsync_start; int hsync_end; int vsync_end; } ;
struct dwc_hdmi_softc {scalar_t__ sc_has_audio; TYPE_1__ sc_mode; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct dwc_hdmi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct dwc_hdmi_softc *VAR_28)
{
 uint8_t VAR_29;
 int VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;


 VAR_29 = ((VAR_28->sc_mode.flags & VAR_27) ?
  VAR_21 :
  VAR_22);

 VAR_29 |= ((VAR_28->sc_mode.flags & VAR_26) ?
  VAR_15 :
  VAR_16);

 VAR_29 |= VAR_12;

 VAR_29 |= ((VAR_28->sc_mode.flags & VAR_25) ?
   VAR_19 :
   VAR_20);

 VAR_29 |= ((VAR_28->sc_mode.flags & VAR_25) ?
  VAR_17 :
  VAR_18);


 VAR_30 = VAR_28->sc_has_audio == 0;
 VAR_29 |= (VAR_30 ?
  VAR_13 :
  VAR_14);

 FUNC_0(VAR_28, VAR_11, VAR_29);


 FUNC_0(VAR_28, VAR_5, VAR_28->sc_mode.hdisplay >> 8);
 FUNC_0(VAR_28, VAR_4, VAR_28->sc_mode.hdisplay);


 FUNC_0(VAR_28, VAR_9, VAR_28->sc_mode.vdisplay >> 8);
 FUNC_0(VAR_28, VAR_8, VAR_28->sc_mode.vdisplay);


 VAR_31 = VAR_28->sc_mode.htotal - VAR_28->sc_mode.hdisplay;
 FUNC_0(VAR_28, VAR_7, VAR_31 >> 8);
 FUNC_0(VAR_28, VAR_6, VAR_31);


 VAR_32 = VAR_28->sc_mode.vtotal - VAR_28->sc_mode.vdisplay;
 FUNC_0(VAR_28, VAR_10, VAR_32);


 VAR_34 = VAR_28->sc_mode.hsync_start - VAR_28->sc_mode.hdisplay;
 FUNC_0(VAR_28, VAR_1, VAR_34 >> 8);
 FUNC_0(VAR_28, VAR_0, VAR_34);


 VAR_35 = VAR_28->sc_mode.vsync_start - VAR_28->sc_mode.vdisplay;
 FUNC_0(VAR_28, VAR_23, VAR_35);

 VAR_33 = (VAR_28->sc_mode.hsync_end - VAR_28->sc_mode.hsync_start);

 FUNC_0(VAR_28, VAR_3, VAR_33 >> 8);
 FUNC_0(VAR_28, VAR_2, VAR_33);


 FUNC_0(VAR_28, VAR_24, (VAR_28->sc_mode.vsync_end - VAR_28->sc_mode.vsync_start));
}
