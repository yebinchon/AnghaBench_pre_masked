
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int status_device_mode; int status_bus_reset; int change_connect; int status_low_speed; int port_enabled; int status_high_speed; int change_enabled; int change_over_current; int port_over_current; int port_powered; scalar_t__ change_suspend; scalar_t__ status_suspend; } ;
struct dwc_otg_softc {int sc_irq_mask; int sc_hprt_val; scalar_t__ sc_xfer_complete; int sc_bus; TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct dwc_otg_softc*,int ) ;
 int FUNC_3 (struct dwc_otg_softc*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dwc_otg_softc*,int ) ;
 int FUNC_9 (struct dwc_otg_softc*) ;
 int FUNC_10 (struct dwc_otg_softc*) ;
 int FUNC_11 (struct dwc_otg_softc*) ;
 int FUNC_12 (struct dwc_otg_softc*,int ) ;
 int FUNC_13 (struct dwc_otg_softc*) ;
 int FUNC_14 (struct dwc_otg_softc*) ;
 int FUNC_15 (struct dwc_otg_softc*,int) ;

void
FUNC_16(void *VAR_34)
{
 struct dwc_otg_softc *VAR_35 = VAR_34;
 uint32_t VAR_36;

 FUNC_4(&VAR_35->sc_bus);
 FUNC_5(&VAR_35->sc_bus);


 VAR_36 = FUNC_2(VAR_35, VAR_2);


 FUNC_3(VAR_35, VAR_2, VAR_36 & VAR_9);

 FUNC_0(14, "GINTSTS=0x%08x HAINT=0x%08x HFNUM=0x%08x\n",
     VAR_36, FUNC_2(VAR_35, VAR_4),
     FUNC_2(VAR_35, VAR_5));

 if (VAR_36 & VAR_17) {


  VAR_35->sc_flags.status_device_mode = 1;
  VAR_35->sc_flags.status_bus_reset = 0;
  VAR_35->sc_flags.status_suspend = 0;
  VAR_35->sc_flags.change_suspend = 0;
  VAR_35->sc_flags.change_connect = 1;


  VAR_35->sc_irq_mask &= ~VAR_11;
  FUNC_3(VAR_35, VAR_1, VAR_35->sc_irq_mask);


  FUNC_11(VAR_35);
 }


 if (VAR_36 & VAR_14) {

  uint32_t VAR_37;

  FUNC_0(5, "end of reset\n");


  VAR_35->sc_flags.status_device_mode = 1;
  VAR_35->sc_flags.status_bus_reset = 1;
  VAR_35->sc_flags.status_suspend = 0;
  VAR_35->sc_flags.change_suspend = 0;
  VAR_35->sc_flags.change_connect = 1;
  VAR_35->sc_flags.status_low_speed = 0;
  VAR_35->sc_flags.port_enabled = 1;


  (void) FUNC_8(VAR_35, VAR_8);


  FUNC_12(VAR_35, 0);


  VAR_37 = FUNC_2(VAR_35, VAR_0);
  if (FUNC_1(VAR_37) == VAR_7)
   VAR_35->sc_flags.status_high_speed = 1;
  else
   VAR_35->sc_flags.status_high_speed = 0;





  VAR_35->sc_irq_mask &= ~(VAR_13 | VAR_11);
  VAR_35->sc_irq_mask |= VAR_12;
  FUNC_3(VAR_35, VAR_1, VAR_35->sc_irq_mask);


  FUNC_11(VAR_35);
 }

 if (VAR_36 & VAR_15) {
  uint32_t VAR_38;

  VAR_38 = FUNC_2(VAR_35, VAR_6);


  FUNC_3(VAR_35, VAR_6, (VAR_38 & (
      VAR_28 | VAR_25 |
      VAR_22 | VAR_27)) |
      VAR_35->sc_hprt_val);

  FUNC_0(12, "GINTSTS=0x%08x, HPRT=0x%08x\n", VAR_36, VAR_38);

  VAR_35->sc_flags.status_device_mode = 0;

  if (VAR_38 & VAR_23)
   VAR_35->sc_flags.status_bus_reset = 1;
  else
   VAR_35->sc_flags.status_bus_reset = 0;

  if ((VAR_38 & VAR_25) &&
      (VAR_38 & VAR_24) == 0)
   VAR_35->sc_flags.change_enabled = 1;

  if (VAR_38 & VAR_24)
   VAR_35->sc_flags.port_enabled = 1;
  else
   VAR_35->sc_flags.port_enabled = 0;

  if (VAR_38 & VAR_27)
   VAR_35->sc_flags.change_over_current = 1;

  if (VAR_38 & VAR_26)
   VAR_35->sc_flags.port_over_current = 1;
  else
   VAR_35->sc_flags.port_over_current = 0;

  if (VAR_38 & VAR_28)
   VAR_35->sc_flags.port_powered = 1;
  else
   VAR_35->sc_flags.port_powered = 0;

  if (((VAR_38 & VAR_31)
      >> VAR_32) == VAR_30)
   VAR_35->sc_flags.status_low_speed = 1;
  else
   VAR_35->sc_flags.status_low_speed = 0;

  if (((VAR_38 & VAR_31)
      >> VAR_32) == VAR_29)
   VAR_35->sc_flags.status_high_speed = 1;
  else
   VAR_35->sc_flags.status_high_speed = 0;

  if (VAR_38 & VAR_22)
   VAR_35->sc_flags.change_connect = 1;

  if (VAR_38 & VAR_33)
   FUNC_13(VAR_35);
  else
   FUNC_10(VAR_35);


  FUNC_11(VAR_35);


  FUNC_14(VAR_35);
 }






 if (VAR_36 & VAR_19) {

  FUNC_0(5, "resume interrupt\n");

  FUNC_10(VAR_35);

 } else if (VAR_36 & VAR_18) {

  FUNC_0(5, "suspend interrupt\n");

  FUNC_13(VAR_35);
 }

 if (VAR_36 & (VAR_18 |
     VAR_17 |
     VAR_10 |
     VAR_16)) {
  uint32_t VAR_39;

  VAR_39 = FUNC_2(VAR_35, VAR_3);

  FUNC_0(5, "GOTGCTL=0x%08x\n", VAR_39);

  FUNC_15(VAR_35,
      (VAR_39 & (VAR_20 | VAR_21)) ? 1 : 0);
 }

 if (VAR_35->sc_xfer_complete != 0) {
  VAR_35->sc_xfer_complete = 0;


  FUNC_9(VAR_35);
 }
 FUNC_6(&VAR_35->sc_bus);
 FUNC_7(&VAR_35->sc_bus);
}
