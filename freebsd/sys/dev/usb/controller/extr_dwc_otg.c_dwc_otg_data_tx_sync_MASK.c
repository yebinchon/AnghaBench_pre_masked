
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct dwc_otg_td {scalar_t__ ep_no; } ;
struct dwc_otg_softc {int sc_last_rx_status; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct dwc_otg_softc*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct dwc_otg_softc*) ;

__attribute__((used)) static uint8_t
FUNC_6(struct dwc_otg_softc *VAR_3, struct dwc_otg_td *VAR_4)
{
 uint32_t VAR_5;




 VAR_5 = FUNC_2(VAR_3, FUNC_0(VAR_4->ep_no));


 if (FUNC_3(VAR_5) != 0) {
  FUNC_1(5, "busy ep=%d\n", VAR_4->ep_no);
  goto not_complete;
 }
 return (0);

not_complete:



 VAR_5 = VAR_3->sc_last_rx_status;

 if ((VAR_4->ep_no == 0) && (VAR_5 != 0) &&
     (FUNC_4(VAR_5) == 0)) {

  if ((VAR_5 & VAR_0) ==
      VAR_2 ||
      (VAR_5 & VAR_0) ==
      VAR_1) {
   FUNC_1(5, "faking complete\n");



   return (0);
  } else {

   FUNC_5(VAR_3);
  }
 }
 return (1);
}
