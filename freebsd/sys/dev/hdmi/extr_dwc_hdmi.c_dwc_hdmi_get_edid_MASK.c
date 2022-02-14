
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct dwc_hdmi_softc {int sc_edid_info; } ;
typedef int device_t ;


 struct dwc_hdmi_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct dwc_hdmi_softc*,int ,int **,int *) ;
 int FUNC_3 (int *,int ,int) ;

int
FUNC_4(device_t VAR_0, uint8_t **VAR_1, uint32_t *VAR_2)
{
 struct dwc_hdmi_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0);

 FUNC_3(&VAR_3->sc_edid_info, 0, sizeof(VAR_3->sc_edid_info));

 VAR_4 = FUNC_2(VAR_3, 0, VAR_1, VAR_2);
 if (VAR_4 != 0)
  return (VAR_4);

 FUNC_1(*VAR_1, &VAR_3->sc_edid_info);

 return (0);
}
