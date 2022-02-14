
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dwc_hdmi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dwc_hdmi_softc*,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(struct dwc_hdmi_softc *VAR_4, int VAR_5)
{
 uint8_t VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0) &
     (VAR_1 | VAR_2);
 while (VAR_6 == 0) {
  FUNC_1("HDMI_PHY", VAR_3/100);
  VAR_5 -= 10;
  if (VAR_5 <= 0)
   return;
  VAR_6 = FUNC_0(VAR_4, VAR_0) &
      (VAR_1 | VAR_2);
 }
}
