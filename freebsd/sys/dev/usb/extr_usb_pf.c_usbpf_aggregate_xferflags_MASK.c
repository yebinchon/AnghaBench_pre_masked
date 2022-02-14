
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_xfer_flags {int force_short_xfer; int short_xfer_ok; int short_frames_ok; int pipe_bof; int proxy_buffer; int ext_buffer; int manual_status; int no_pipe_ok; int stall_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static uint32_t
FUNC_0(struct usb_xfer_flags *VAR_9)
{
 uint32_t VAR_10 = 0;

 if (VAR_9->force_short_xfer == 1)
  VAR_10 |= VAR_1;
 if (VAR_9->short_xfer_ok == 1)
  VAR_10 |= VAR_7;
 if (VAR_9->short_frames_ok == 1)
  VAR_10 |= VAR_6;
 if (VAR_9->pipe_bof == 1)
  VAR_10 |= VAR_4;
 if (VAR_9->proxy_buffer == 1)
  VAR_10 |= VAR_5;
 if (VAR_9->ext_buffer == 1)
  VAR_10 |= VAR_0;
 if (VAR_9->manual_status == 1)
  VAR_10 |= VAR_2;
 if (VAR_9->no_pipe_ok == 1)
  VAR_10 |= VAR_3;
 if (VAR_9->stall_pipe == 1)
  VAR_10 |= VAR_8;
 return (VAR_10);
}
