
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {scalar_t__ status; int dev; int actual_length; int transfer_buffer; struct snd_usb_midi_in_endpoint* context; } ;
struct snd_usb_midi_in_endpoint {int error_resubmit; TYPE_2__* umidi; } ;
struct TYPE_4__ {int dev; int error_timer; TYPE_1__* usb_protocol_ops; } ;
struct TYPE_3__ {int (* input ) (struct snd_usb_midi_in_endpoint*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct urb*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct snd_usb_midi_in_endpoint*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct urb* VAR_4)
{
 struct snd_usb_midi_in_endpoint* VAR_5 = VAR_4->context;

 if (VAR_4->status == 0) {
  FUNC_0("received", VAR_4->transfer_buffer, VAR_4->actual_length);
  VAR_5->umidi->usb_protocol_ops->input(VAR_5, VAR_4->transfer_buffer,
         VAR_4->actual_length);
 } else {
  int VAR_6 = FUNC_3(VAR_4->status);
  if (VAR_6 < 0) {
   if (VAR_6 != -VAR_0) {
    VAR_5->error_resubmit = 1;
    FUNC_1(&VAR_5->umidi->error_timer,
       VAR_3 + VAR_1);
   }
   return;
  }
 }

 VAR_4->dev = VAR_5->umidi->dev;
 FUNC_2(VAR_4, VAR_2);
}
