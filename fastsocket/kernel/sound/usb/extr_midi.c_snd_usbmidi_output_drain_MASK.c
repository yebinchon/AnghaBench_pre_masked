
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbmidi_out_port {struct snd_usb_midi_out_endpoint* ep; } ;
struct snd_usb_midi_out_endpoint {unsigned int active_urbs; unsigned int drain_urbs; int buffer_lock; int drain_wait; TYPE_2__* umidi; } ;
struct snd_rawmidi_substream {TYPE_1__* runtime; } ;
struct TYPE_4__ {scalar_t__ disconnected; } ;
struct TYPE_3__ {struct usbmidi_out_port* private_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 long FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int ) ;
 long FUNC_4 (long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct snd_rawmidi_substream *VAR_2)
{
 struct usbmidi_out_port* VAR_3 = VAR_2->runtime->private_data;
 struct snd_usb_midi_out_endpoint *VAR_4 = VAR_3->ep;
 unsigned int VAR_5;
 FUNC_0(VAR_1);
 long VAR_6 = FUNC_2(50);

 if (VAR_4->umidi->disconnected)
  return;




 FUNC_5(&VAR_4->buffer_lock);
 VAR_5 = VAR_4->active_urbs;
 if (VAR_5) {
  VAR_4->drain_urbs |= VAR_5;
  do {
   FUNC_3(&VAR_4->drain_wait, &VAR_1,
     VAR_0);
   FUNC_6(&VAR_4->buffer_lock);
   VAR_6 = FUNC_4(VAR_6);
   FUNC_5(&VAR_4->buffer_lock);
   VAR_5 &= VAR_4->drain_urbs;
  } while (VAR_5 && VAR_6);
  FUNC_1(&VAR_4->drain_wait, &VAR_1);
 }
 FUNC_6(&VAR_4->buffer_lock);
}
