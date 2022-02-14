
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; struct out_urb_context* context; } ;
struct snd_usb_midi_out_endpoint {int active_urbs; int drain_urbs; TYPE_1__* umidi; int buffer_lock; int drain_wait; struct out_urb_context* urbs; } ;
struct out_urb_context {struct snd_usb_midi_out_endpoint* ep; } ;
struct TYPE_2__ {int error_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct snd_usb_midi_out_endpoint*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct urb* VAR_3)
{
 struct out_urb_context *VAR_4 = VAR_3->context;
 struct snd_usb_midi_out_endpoint* VAR_5 = VAR_4->ep;
 unsigned int VAR_6;

 FUNC_3(&VAR_5->buffer_lock);
 VAR_6 = VAR_4 - VAR_5->urbs;
 VAR_5->active_urbs &= ~(1 << VAR_6);
 if (FUNC_5(VAR_5->drain_urbs)) {
  VAR_5->drain_urbs &= ~(1 << VAR_6);
  FUNC_6(&VAR_5->drain_wait);
 }
 FUNC_4(&VAR_5->buffer_lock);
 if (VAR_3->status < 0) {
  int VAR_7 = FUNC_2(VAR_3->status);
  if (VAR_7 < 0) {
   if (VAR_7 != -VAR_0)
    FUNC_0(&VAR_5->umidi->error_timer,
       VAR_2 + VAR_1);
   return;
  }
 }
 FUNC_1(VAR_5);
}
