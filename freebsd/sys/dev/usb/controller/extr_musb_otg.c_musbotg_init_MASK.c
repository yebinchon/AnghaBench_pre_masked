
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_hw_ep_profile {int max_in_frame_size; int max_out_frame_size; int is_simplex; int support_multi_buffer; int support_bulk; int support_interrupt; int support_isochronous; int support_in; int support_out; } ;
struct TYPE_4__ {int bdev; int bus_mtx; int * methods; int usbrev; } ;
struct musbotg_softc {scalar_t__ sc_mode; int sc_ep_max; int sc_conf_data; TYPE_1__ sc_bus; struct musb_otg_ep_cfg* sc_ep_cfg; struct usb_hw_ep_profile* sc_hw_ep_profile; int sc_clocks_arg; int (* sc_clocks_on ) (int ) ;} ;
struct musb_otg_ep_cfg {scalar_t__ ep_end; int ep_fifosz_shift; int ep_fifosz_reg; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct musbotg_softc*,int ) ;
 int VAR_9 ;
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
 int FUNC_3 (struct musbotg_softc*,int ,int) ;
 int FUNC_4 (struct musbotg_softc*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_27 ;
 int FUNC_7 (int ,char*) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_8 (struct musbotg_softc*) ;
 int FUNC_9 (TYPE_1__*) ;
 struct musb_otg_ep_cfg* VAR_30 ;
 int FUNC_10 (struct musbotg_softc*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int) ;

usb_error_t
FUNC_13(struct musbotg_softc *VAR_31)
{
 const struct musb_otg_ep_cfg *VAR_32;
 struct usb_hw_ep_profile *VAR_33;
 int VAR_34;
 uint16_t VAR_35;
 uint8_t VAR_36;
 uint8_t VAR_37;
 uint8_t VAR_38;
 uint8_t VAR_39;
 uint8_t VAR_40;
 uint8_t VAR_41;
 uint8_t VAR_42;

 FUNC_1(1, "start\n");


 VAR_31->sc_bus.usbrev = VAR_27;
 VAR_31->sc_bus.methods = &VAR_29;


 if (VAR_31->sc_ep_cfg == ((void*)0))
  VAR_31->sc_ep_cfg = VAR_30;

 FUNC_5(&VAR_31->sc_bus);



 if (VAR_31->sc_clocks_on) {
  (VAR_31->sc_clocks_on) (VAR_31->sc_clocks_arg);
 }


 FUNC_12(&VAR_31->sc_bus.bus_mtx, VAR_28 / 1000);



 VAR_38 = FUNC_2(VAR_31, VAR_10);
 FUNC_0("pre-DEVCTL=0x%02x\n", VAR_38);

 FUNC_3(VAR_31, VAR_17, 0);
 FUNC_4(VAR_31, VAR_16, 0);
 FUNC_4(VAR_31, VAR_15, 0);



 FUNC_10(VAR_31, 0);


 FUNC_12(&VAR_31->sc_bus.bus_mtx, VAR_28 / 100);



 FUNC_4(VAR_31, VAR_20, 0xFFFF);
 FUNC_4(VAR_31, VAR_24, 0xFFFF);



 FUNC_3(VAR_31, VAR_19,
     VAR_3 | VAR_5);

 if (VAR_31->sc_mode == VAR_0) {

  VAR_38 = FUNC_2(VAR_31, VAR_10);
  VAR_38 &= ~VAR_7;
  FUNC_3(VAR_31, VAR_10, VAR_38);
 } else {

  VAR_38 = FUNC_2(VAR_31, VAR_10);
  VAR_38 |= VAR_7;
  FUNC_3(VAR_31, VAR_10, VAR_38);
 }


 FUNC_12(&VAR_31->sc_bus.bus_mtx, VAR_28 / 10);

 FUNC_0("DEVCTL=0x%02x\n", VAR_38);



 FUNC_3(VAR_31, VAR_23, 0);



 FUNC_3(VAR_31, VAR_18, 0);



 FUNC_3(VAR_31, VAR_11, 0);

 if (VAR_31->sc_ep_max == 0) {


  VAR_36 =
      (FUNC_2(VAR_31, VAR_12) / 16);

  VAR_37 =
      (FUNC_2(VAR_31, VAR_12) % 16);

  VAR_31->sc_ep_max = (VAR_36 > VAR_37) ? VAR_36 : VAR_37;
 } else {
  VAR_36 = VAR_37 = VAR_31->sc_ep_max;
 }



 FUNC_1(2, "RX/TX endpoints: %u/%u\n", VAR_36, VAR_37);

 if (VAR_31->sc_ep_max == 0) {
  FUNC_1(2, "ERROR: Looks like the clocks are off!\n");
 }


 VAR_31->sc_conf_data = FUNC_2(VAR_31, VAR_9);

 FUNC_1(2, "Config Data: 0x%02x\n",
     VAR_31->sc_conf_data);

 VAR_42 = (VAR_31->sc_conf_data & VAR_2) ? 1 : 0;

 if (VAR_42) {
  FUNC_7(VAR_31->sc_bus.bdev, "Dynamic FIFO sizing detected, "
      "assuming 16Kbytes of FIFO RAM\n");
 }

 FUNC_1(2, "HW version: 0x%04x\n",
     FUNC_2(VAR_31, VAR_14));



 VAR_35 = 0;

 for (VAR_38 = 1; VAR_38 <= VAR_31->sc_ep_max; VAR_38++) {
  VAR_33 = VAR_31->sc_hw_ep_profile + VAR_38;


  FUNC_3(VAR_31, VAR_11, VAR_38);

  VAR_39 = FUNC_2(VAR_31, VAR_13);
  VAR_40 = (VAR_39 & VAR_6) / 16;
  VAR_41 = (VAR_39 & VAR_8);

  FUNC_0("Endpoint %u FIFO size: IN=%u, OUT=%u, DYN=%d\n",
      VAR_38, VAR_41, VAR_40, VAR_42);

  if (VAR_42) {
   if (VAR_40 && (VAR_38 <= VAR_36)) {
    for (VAR_34 = 0; VAR_31->sc_ep_cfg[VAR_34].ep_end >= 0; VAR_34++) {
     VAR_32 = &VAR_31->sc_ep_cfg[VAR_34];
     if (VAR_38 <= VAR_32->ep_end) {
      VAR_40 = VAR_32->ep_fifosz_shift;
      FUNC_3(VAR_31,
          VAR_22,
          VAR_32->ep_fifosz_reg);
      break;
     }
    }

    FUNC_4(VAR_31, VAR_21,
        VAR_35 >> 3);

    VAR_35 += (1 << VAR_40);
   }
   if (VAR_41 && (VAR_38 <= VAR_37)) {
    for (VAR_34 = 0; VAR_31->sc_ep_cfg[VAR_34].ep_end >= 0; VAR_34++) {
     VAR_32 = &VAR_31->sc_ep_cfg[VAR_34];
     if (VAR_38 <= VAR_32->ep_end) {
      VAR_41 = VAR_32->ep_fifosz_shift;
      FUNC_3(VAR_31,
          VAR_26,
          VAR_32->ep_fifosz_reg);
      break;
     }
    }

    FUNC_4(VAR_31, VAR_25,
        VAR_35 >> 3);

    VAR_35 += (1 << VAR_41);
   }
  }

  if (VAR_40 && VAR_41 && (VAR_38 <= VAR_36) && (VAR_38 <= VAR_37)) {
   VAR_33->max_in_frame_size = 1 << VAR_41;
   VAR_33->max_out_frame_size = 1 << VAR_40;
   VAR_33->is_simplex = 0;
   VAR_33->support_multi_buffer = 1;
   VAR_33->support_bulk = 1;
   VAR_33->support_interrupt = 1;
   VAR_33->support_isochronous = 1;
   VAR_33->support_in = 1;
   VAR_33->support_out = 1;
  } else if (VAR_40 && (VAR_38 <= VAR_36)) {
   VAR_33->max_out_frame_size = 1 << VAR_40;
   VAR_33->max_in_frame_size = 0;
   VAR_33->is_simplex = 1;
   VAR_33->support_multi_buffer = 1;
   VAR_33->support_bulk = 1;
   VAR_33->support_interrupt = 1;
   VAR_33->support_isochronous = 1;
   VAR_33->support_out = 1;
  } else if (VAR_41 && (VAR_38 <= VAR_37)) {
   VAR_33->max_in_frame_size = 1 << VAR_41;
   VAR_33->max_out_frame_size = 0;
   VAR_33->is_simplex = 1;
   VAR_33->support_multi_buffer = 1;
   VAR_33->support_bulk = 1;
   VAR_33->support_interrupt = 1;
   VAR_33->support_isochronous = 1;
   VAR_33->support_in = 1;
  }
 }

 FUNC_1(2, "Dynamic FIFO size = %d bytes\n", VAR_35);



 if (VAR_31->sc_mode == VAR_1)
  FUNC_3(VAR_31, VAR_17, 0xff);
 else
  FUNC_3(VAR_31, VAR_17,
      VAR_4);

 FUNC_8(VAR_31);

 FUNC_6(&VAR_31->sc_bus);



 FUNC_9(&VAR_31->sc_bus);

 return (0);
}
