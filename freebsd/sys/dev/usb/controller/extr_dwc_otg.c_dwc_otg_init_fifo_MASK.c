
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct dwc_otg_softc {int sc_fifo_size; int sc_active_rx_ep; scalar_t__ sc_host_ch_max; int sc_irq_mask; scalar_t__ sc_dev_ep_max; scalar_t__ sc_dev_in_ep_max; int sc_chan_state; struct dwc_otg_profile* sc_hw_ep_profile; } ;
struct TYPE_2__ {int max_out_frame_size; int is_simplex; int support_bulk; int support_interrupt; int support_isochronous; int support_out; int support_in; int max_in_frame_size; } ;
struct dwc_otg_profile {int max_buffer; TYPE_1__ usb; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct dwc_otg_softc*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int VAR_15 ;
 int FUNC_6 (int,int) ;
 TYPE_1__* VAR_16 ;
 int FUNC_7 (struct dwc_otg_softc*,int) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct dwc_otg_softc *VAR_17, uint8_t VAR_18)
{
 struct dwc_otg_profile *VAR_19;
 uint32_t VAR_20;
 uint32_t VAR_21;
 uint32_t VAR_22;
 uint8_t VAR_23;

 VAR_20 = VAR_17->sc_fifo_size;





 VAR_21 = 4 * 16;

 if (VAR_20 < VAR_21) {
  FUNC_2("Too little FIFO\n");
  return (VAR_10);
 }


 VAR_20 -= VAR_21;


 VAR_20 /= 2;


 VAR_20 &= ~3;


 FUNC_4(VAR_17, VAR_2, VAR_20 / 4);

 VAR_22 = VAR_20;

 if (VAR_20 < 64) {
  FUNC_3(-1, "Not enough data space for EP0 FIFO.\n");
  return (VAR_10);
 }

 if (VAR_18 == VAR_6) {


  VAR_17->sc_active_rx_ep = 0;


  VAR_20 /= 2;

  FUNC_2("PTX/NPTX FIFO=%u\n", VAR_20);


  VAR_20 &= ~3;

  FUNC_4(VAR_17, VAR_1,
      ((VAR_20 / 4) << 16) |
      (VAR_22 / 4));

  VAR_22 += VAR_20;

  for (VAR_23 = 0; VAR_23 != VAR_17->sc_host_ch_max; VAR_23++) {

   FUNC_4(VAR_17, FUNC_1(VAR_23),
       VAR_15);
  }

  FUNC_4(VAR_17, VAR_4,
      ((VAR_20 / 4) << 16) |
      (VAR_22 / 4));


  FUNC_8(VAR_17->sc_chan_state, 0, sizeof(VAR_17->sc_chan_state));


  FUNC_4(VAR_17, VAR_3,
      (1U << VAR_17->sc_host_ch_max) - 1U);


  VAR_17->sc_irq_mask |= VAR_11;
  VAR_17->sc_irq_mask &= ~VAR_12;
  FUNC_4(VAR_17, VAR_0, VAR_17->sc_irq_mask);
 }

 if (VAR_18 == VAR_5) {

     FUNC_4(VAR_17, VAR_1,
  (0x10 << 16) | (VAR_22 / 4));
     VAR_20 -= 0x40;
     VAR_22 += 0x40;


     VAR_17->sc_hw_ep_profile[0].usb = VAR_16[0];


     VAR_17->sc_active_rx_ep = 1;

     for (VAR_23 = 1; VAR_23 != VAR_17->sc_dev_ep_max; VAR_23++) {

  VAR_19 = VAR_17->sc_hw_ep_profile + VAR_23;

  VAR_19->usb.max_out_frame_size = 1024 * 3;
  VAR_19->usb.is_simplex = 0;
  VAR_19->usb.support_bulk = 1;
  VAR_19->usb.support_interrupt = 1;
  VAR_19->usb.support_isochronous = 1;
  VAR_19->usb.support_out = 1;

  if (VAR_23 < VAR_17->sc_dev_in_ep_max) {
   uint32_t VAR_24;

   VAR_24 = (VAR_23 == 1) ? FUNC_6(VAR_9,
       VAR_8) : FUNC_6(VAR_8 / 2,
       VAR_9);


   if (VAR_24 <= VAR_20) {
    VAR_19->max_buffer = VAR_24;
    VAR_19->usb.support_in = 1;
   } else {
    VAR_24 = FUNC_6(VAR_9, 0x40);
    if (VAR_24 <= VAR_20) {
     VAR_19->usb.support_in = 1;
    } else {
     VAR_19->usb.is_simplex = 1;
     VAR_24 = 0;
    }
   }

   FUNC_4(VAR_17, FUNC_0(VAR_23),
       ((VAR_24 / 4) << 16) | (VAR_22 / 4));
   VAR_22 += VAR_24;
   VAR_20 -= VAR_24;
   VAR_19->usb.max_in_frame_size = VAR_24;
  } else {
   VAR_19->usb.is_simplex = 1;
  }

  FUNC_2("FIFO%d = IN:%d / OUT:%d\n", VAR_23,
      VAR_19->usb.max_in_frame_size,
      VAR_19->usb.max_out_frame_size);
     }


     VAR_17->sc_irq_mask &= ~VAR_11;
     VAR_17->sc_irq_mask |= VAR_12;
     FUNC_4(VAR_17, VAR_0, VAR_17->sc_irq_mask);
 }


 FUNC_7(VAR_17, VAR_13);

 if (VAR_18 != VAR_7) {

  FUNC_7(VAR_17,
      FUNC_5(0x10) |
      VAR_14);
 } else {

  VAR_17->sc_active_rx_ep = 0;


  FUNC_8(VAR_17->sc_chan_state, 0, sizeof(VAR_17->sc_chan_state));
 }
 return (0);
}
