
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_xfer_flags_int {int open; int transferring; int did_dma_delay; int did_close; int draining; int started; int bandwidth_reclaimed; int control_xfr; int control_hdr; int control_act; int control_stall; int short_frames_ok; int short_xfer_ok; int bdma_enable; int bdma_no_post_sync; int bdma_setup; int isochronous_xfr; int curr_dma_set; int can_cancel_immed; int doing_callback; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static uint32_t
FUNC_0(struct usb_xfer_flags_int *VAR_20)
{
 uint32_t VAR_21 = 0;

 if (VAR_20->open == 1)
  VAR_21 |= VAR_15;
 if (VAR_20->transferring == 1)
  VAR_21 |= VAR_19;
 if (VAR_20->did_dma_delay == 1)
  VAR_21 |= VAR_11;
 if (VAR_20->did_close == 1)
  VAR_21 |= VAR_10;
 if (VAR_20->draining == 1)
  VAR_21 |= VAR_13;
 if (VAR_20->started == 1)
  VAR_21 |= VAR_18;
 if (VAR_20->bandwidth_reclaimed == 1)
  VAR_21 |= VAR_3;
 if (VAR_20->control_xfr == 1)
  VAR_21 |= VAR_8;
 if (VAR_20->control_hdr == 1)
  VAR_21 |= VAR_6;
 if (VAR_20->control_act == 1)
  VAR_21 |= VAR_5;
 if (VAR_20->control_stall == 1)
  VAR_21 |= VAR_7;
 if (VAR_20->short_frames_ok == 1)
  VAR_21 |= VAR_16;
 if (VAR_20->short_xfer_ok == 1)
  VAR_21 |= VAR_17;
 if (VAR_20->isochronous_xfr == 1)
  VAR_21 |= VAR_14;
 if (VAR_20->curr_dma_set == 1)
  VAR_21 |= VAR_9;
 if (VAR_20->can_cancel_immed == 1)
  VAR_21 |= VAR_4;
 if (VAR_20->doing_callback == 1)
  VAR_21 |= VAR_12;

 return (VAR_21);
}
