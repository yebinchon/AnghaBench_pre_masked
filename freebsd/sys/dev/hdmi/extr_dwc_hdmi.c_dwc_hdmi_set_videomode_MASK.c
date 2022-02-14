
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct dwc_hdmi_softc {int sc_mode; } ;
typedef int device_t ;


 struct dwc_hdmi_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct dwc_hdmi_softc*) ;
 int FUNC_2 (struct dwc_hdmi_softc*) ;
 int FUNC_3 (int *,struct videomode const*,int) ;

int
FUNC_4(device_t VAR_0, const struct videomode *VAR_1)
{
 struct dwc_hdmi_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(&VAR_2->sc_mode, VAR_1, sizeof(*VAR_1));

 FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 return (0);
}
