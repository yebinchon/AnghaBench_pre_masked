
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct TYPE_6__ {int bus_mtx; int * methods; int usbrev; } ;
struct TYPE_5__ {int status_vbus; int mcsr_feat; } ;
struct uss820dci_softc {TYPE_2__ sc_bus; TYPE_1__ sc_flags; } ;
struct usb_hw_ep_profile {int max_in_frame_size; int max_out_frame_size; scalar_t__ support_control; scalar_t__ support_isochronous; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct uss820dci_softc*,int ) ;
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
 int FUNC_5 (struct uss820dci_softc*,int ,int) ;
 int VAR_34 ;
 int FUNC_6 (int *,int) ;
 int VAR_35 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,struct usb_hw_ep_profile const**,int) ;
 int FUNC_9 (struct uss820dci_softc*) ;
 int FUNC_10 (struct uss820dci_softc*,int ,int ,int) ;

usb_error_t
FUNC_11(struct uss820dci_softc *VAR_36)
{
 const struct usb_hw_ep_profile *VAR_37;
 uint8_t VAR_38;
 uint8_t VAR_39;

 FUNC_1("start\n");


 VAR_36->sc_bus.usbrev = VAR_1;
 VAR_36->sc_bus.methods = &VAR_35;

 FUNC_2(&VAR_36->sc_bus);


 VAR_36->sc_flags.status_vbus = 1;


 FUNC_5(VAR_36, VAR_19, VAR_25);
 FUNC_0(100);
 FUNC_5(VAR_36, VAR_19, 0);


 for (VAR_38 = 0;; VAR_38++) {

  VAR_39 = FUNC_4(VAR_36, VAR_11);

  if (VAR_39 & VAR_14) {
   break;
  }
  if (VAR_38 == 100) {
   FUNC_3(&VAR_36->sc_bus);
   return (VAR_0);
  }

  FUNC_0(100);
 }


 FUNC_9(VAR_36);


 FUNC_6(&VAR_36->sc_bus.bus_mtx, VAR_34 / 100);


 VAR_39 = FUNC_4(VAR_36, VAR_15);

 if (VAR_39 < 0x13) {
  FUNC_3(&VAR_36->sc_bus);
  return (VAR_0);
 }

 FUNC_5(VAR_36, VAR_19,
     VAR_26 |
     VAR_22 |

     VAR_23 |
     VAR_24);


 FUNC_5(VAR_36, VAR_20,
     VAR_21);


 FUNC_5(VAR_36, VAR_11,
     VAR_12 |
     VAR_13);

 VAR_36->sc_flags.mcsr_feat = 1;


 FUNC_5(VAR_36, VAR_17, 0);


 FUNC_5(VAR_36, VAR_18, 0);


 for (VAR_38 = 0; VAR_38 != VAR_10; VAR_38++) {


  FUNC_5(VAR_36, VAR_9, VAR_38);


  FUNC_10(VAR_36, VAR_2, 0, 0);
 }





 for (VAR_38 = 0; VAR_38 != VAR_10; VAR_38++) {

  FUNC_8(((void*)0), &VAR_37, VAR_38);


  if (VAR_37->max_in_frame_size != VAR_37->max_out_frame_size) {
   FUNC_1("Max frame size mismatch %u != %u\n",
       VAR_37->max_in_frame_size, VAR_37->max_out_frame_size);
  }
  if (VAR_37->support_isochronous) {
   if (VAR_37->max_in_frame_size <= 64) {
    VAR_39 = (VAR_29 |
        VAR_33 |
        VAR_28);
   } else if (VAR_37->max_in_frame_size <= 256) {
    VAR_39 = (VAR_31 |
        VAR_33 |
        VAR_28);
   } else if (VAR_37->max_in_frame_size <= 512) {
    VAR_39 = (VAR_32 |
        VAR_33 |
        VAR_28);
   } else {
    VAR_39 = (VAR_30 |
        VAR_33 |
        VAR_28);
   }
  } else {
   if ((VAR_37->max_in_frame_size <= 8) &&
       (VAR_36->sc_flags.mcsr_feat)) {
    VAR_39 = (VAR_32 |
        VAR_28);
   } else if (VAR_37->max_in_frame_size <= 16) {
    VAR_39 = (VAR_29 |
        VAR_28);
   } else if ((VAR_37->max_in_frame_size <= 32) &&
       (VAR_36->sc_flags.mcsr_feat)) {
    VAR_39 = (VAR_30 |
        VAR_28);
   } else {
    VAR_39 = (VAR_31 |
        VAR_28);
   }
  }



  FUNC_5(VAR_36, VAR_9, VAR_38);
  FUNC_5(VAR_36, VAR_27, VAR_39);
  FUNC_5(VAR_36, VAR_16, VAR_39);

  if (VAR_37->support_control) {
   VAR_39 = VAR_3 |
       VAR_6 |
       VAR_5 |
       VAR_4 |
       VAR_8 |
       VAR_7;
  } else {
   VAR_39 = VAR_4 | VAR_7;
  }

  FUNC_10(VAR_36, VAR_2, 0, VAR_39);
 }

 FUNC_3(&VAR_36->sc_bus);



 FUNC_7(&VAR_36->sc_bus);

 return (0);
}
