
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct dwc_otg_softc {int sc_irq_mask; scalar_t__ sc_dev_in_ep_max; scalar_t__ sc_xfer_complete; int sc_bus; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dwc_otg_softc*,int ) ;
 int FUNC_2 (struct dwc_otg_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dwc_otg_softc*) ;

int
FUNC_6(void *VAR_8)
{
 struct dwc_otg_softc *VAR_9 = VAR_8;
 int VAR_10 = VAR_3;
 uint32_t VAR_11;

 FUNC_3(&VAR_9->sc_bus);


 VAR_11 = FUNC_1(VAR_9, VAR_1);


 FUNC_2(VAR_9, VAR_1, VAR_11 & ~VAR_2);


 if ((VAR_11 & VAR_2) != 0)
  VAR_10 = VAR_4;


 if (VAR_11 & VAR_9->sc_irq_mask &
     (VAR_7 | VAR_6)) {
  VAR_9->sc_irq_mask &= ~(VAR_7 | VAR_6);
  FUNC_2(VAR_9, VAR_0, VAR_9->sc_irq_mask);
 }

 if (VAR_11 & VAR_5) {
  uint32_t VAR_12;
  uint8_t VAR_13;

  for (VAR_13 = 0; VAR_13 != VAR_9->sc_dev_in_ep_max; VAR_13++) {
   VAR_12 = FUNC_1(VAR_9, FUNC_0(VAR_13));





   if (VAR_12 != 0)
    FUNC_2(VAR_9, FUNC_0(VAR_13), VAR_12);
  }
 }


 FUNC_5(VAR_9);

 if (VAR_9->sc_xfer_complete != 0)
  VAR_10 = VAR_4;

 FUNC_4(&VAR_9->sc_bus);

 return (VAR_10);
}
