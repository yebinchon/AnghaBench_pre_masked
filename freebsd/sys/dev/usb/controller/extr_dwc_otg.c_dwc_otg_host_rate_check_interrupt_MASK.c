
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dwc_otg_td {int tmr_val; int tmr_res; int toggle; scalar_t__ set_toggle; } ;
struct dwc_otg_softc {int sc_tmr_val; } ;



__attribute__((used)) static uint8_t
FUNC_0(struct dwc_otg_softc *VAR_0, struct dwc_otg_td *VAR_1)
{
 uint8_t VAR_2;

 VAR_2 = VAR_0->sc_tmr_val - VAR_1->tmr_val;
 if (VAR_2 >= 128)
  return (1);

 VAR_1->tmr_val = VAR_0->sc_tmr_val + VAR_1->tmr_res;


 if (VAR_1->set_toggle) {
  VAR_1->set_toggle = 0;
  VAR_1->toggle = 1;
 }
 return (0);
}
