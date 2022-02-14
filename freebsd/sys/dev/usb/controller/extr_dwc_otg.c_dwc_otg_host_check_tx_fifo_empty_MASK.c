
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct dwc_otg_td {scalar_t__ ep_type; } ;
struct dwc_otg_softc {int sc_irq_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct dwc_otg_softc*,int ) ;
 int FUNC_2 (struct dwc_otg_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static uint8_t
FUNC_3(struct dwc_otg_softc *VAR_7, struct dwc_otg_td *VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_1);

 if (VAR_8->ep_type == VAR_6) {





  if (!(VAR_9 & VAR_5)) {
   FUNC_0("Periodic TX FIFO is not empty\n");
   if (!(VAR_7->sc_irq_mask & VAR_3)) {
    VAR_7->sc_irq_mask |= VAR_3;
    FUNC_2(VAR_7, VAR_0, VAR_7->sc_irq_mask);
   }
   return (1);
  }
 } else {
  if (!(VAR_9 & VAR_4)) {
   FUNC_0("Non-periodic TX FIFO is not empty\n");
   if (!(VAR_7->sc_irq_mask & VAR_2)) {
    VAR_7->sc_irq_mask |= VAR_2;
    FUNC_2(VAR_7, VAR_0, VAR_7->sc_irq_mask);
   }
   return (1);
  }
 }
 return (0);
}
