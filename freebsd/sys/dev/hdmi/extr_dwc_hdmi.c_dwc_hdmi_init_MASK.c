
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dwc_hdmi_softc* ich_arg; int ich_func; } ;
struct dwc_hdmi_softc {int * sc_edid; TYPE_1__ sc_mode_hook; int sc_dev; int sc_edid_len; } ;
typedef int device_t ;


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
 int FUNC_0 (struct dwc_hdmi_softc*,int ) ;
 int FUNC_1 (struct dwc_hdmi_softc*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct dwc_hdmi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int ,int) ;

int
FUNC_7(device_t VAR_14)
{
 struct dwc_hdmi_softc *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_14);
 VAR_16 = 0;

 VAR_15->sc_edid = FUNC_6(VAR_0, VAR_10, VAR_11 | VAR_12);
 VAR_15->sc_edid_len = VAR_0;

 FUNC_4(VAR_15->sc_dev, "HDMI controller %02x:%02x:%02x:%02x\n",
     FUNC_0(VAR_15, VAR_2), FUNC_0(VAR_15, VAR_9),
     FUNC_0(VAR_15, VAR_7), FUNC_0(VAR_15, VAR_8));

 FUNC_1(VAR_15, VAR_5, VAR_6);
 FUNC_1(VAR_15, VAR_3, VAR_4);

 VAR_15->sc_mode_hook.ich_func = VAR_13;
 VAR_15->sc_mode_hook.ich_arg = VAR_15;
 if (FUNC_2(&VAR_15->sc_mode_hook) != 0) {
  VAR_16 = VAR_1;
  goto out;
 }

out:

 if (VAR_16 != 0) {
  FUNC_5(VAR_15->sc_edid, VAR_10);
  VAR_15->sc_edid = ((void*)0);
 }

 return (VAR_16);
}
