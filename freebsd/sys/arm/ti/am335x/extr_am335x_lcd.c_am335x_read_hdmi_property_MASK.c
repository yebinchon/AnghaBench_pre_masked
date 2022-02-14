
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xref ;
struct am335x_lcd_softc {scalar_t__ sc_hdmi_framer; } ;
typedef scalar_t__ phandle_t ;
typedef int hdmi_xref ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct am335x_lcd_softc* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,char*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_0)
{
 phandle_t VAR_1, VAR_2;
 phandle_t VAR_3;
 phandle_t VAR_4;
 struct am335x_lcd_softc *VAR_5;

 VAR_5 = FUNC_6(VAR_0);
 VAR_1 = FUNC_8(VAR_0);
 VAR_5->sc_hdmi_framer = 0;




 if (FUNC_1(VAR_1, "hdmi", &VAR_4, sizeof(VAR_4)) != -1) {
  VAR_5->sc_hdmi_framer = VAR_4;
  return;
 }







 VAR_1 = FUNC_7(VAR_1, "port");


 if (VAR_1 == 0)
  return;

 for (VAR_3 = FUNC_0(VAR_1); VAR_3 != 0; VAR_3 = FUNC_4(VAR_3)) {
  if (FUNC_1(VAR_3, "remote-endpoint", &VAR_2, sizeof(VAR_2)) != -1) {

   VAR_1 = FUNC_2(VAR_2);

   VAR_1 = FUNC_3(VAR_1);

   VAR_1 = FUNC_3(VAR_1);

   VAR_5->sc_hdmi_framer = FUNC_5(FUNC_3(VAR_1));
   if (VAR_5->sc_hdmi_framer != 0)
    return;
  }
 }
}
