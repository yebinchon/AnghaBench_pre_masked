
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dwc_hdmi_softc {int sc_mode_hook; int sc_dev; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dwc_hdmi_softc*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 struct dwc_hdmi_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = VAR_4;

 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if ((VAR_6 & VAR_2) != 0) {
  FUNC_0(VAR_3, VAR_5->sc_dev,
      VAR_0);
 }


 FUNC_2(&VAR_5->sc_mode_hook);
}
