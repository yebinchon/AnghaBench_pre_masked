
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dwc_otg_td {scalar_t__ ep_type; int tmr_res; int tmr_val; int toggle; scalar_t__ did_nak; scalar_t__ set_toggle; scalar_t__ tt_scheduled; } ;
struct dwc_otg_softc {int sc_last_frame_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dwc_otg_softc*) ;

__attribute__((used)) static uint8_t
FUNC_1(struct dwc_otg_softc *VAR_2, struct dwc_otg_td *VAR_3)
{
 uint8_t VAR_4 = (uint8_t)VAR_2->sc_last_frame_num;

 if (VAR_3->ep_type == VAR_1) {

  if (VAR_4 & (VAR_3->tmr_res - 1))
   goto busy;
  if ((VAR_4 ^ VAR_3->tmr_val) & VAR_3->tmr_res)
   goto busy;
  VAR_3->tmr_val = VAR_3->tmr_res + VAR_2->sc_last_frame_num;
  VAR_3->toggle = 0;
  return (0);
 } else if (VAR_3->ep_type == VAR_0) {
  if (!VAR_3->tt_scheduled)
   goto busy;
  VAR_3->tt_scheduled = 0;
  return (0);
 } else if (VAR_3->did_nak != 0) {

  if (VAR_3->tmr_res == VAR_4) {

   FUNC_0(VAR_2);
   goto busy;
  }
 } else if (VAR_3->set_toggle) {
  VAR_3->set_toggle = 0;
  VAR_3->toggle = 1;
 }

 VAR_3->tmr_res = VAR_4;
 VAR_3->did_nak = 0;
 return (0);
busy:
 return (1);
}
