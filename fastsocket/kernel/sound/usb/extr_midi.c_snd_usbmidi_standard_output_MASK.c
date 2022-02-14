
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usbmidi_out_port {scalar_t__ active; int substream; } ;
struct urb {scalar_t__ transfer_buffer_length; } ;
struct snd_usb_midi_out_endpoint {scalar_t__ max_transfer; struct usbmidi_out_port* ports; } ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct usbmidi_out_port*,int ,struct urb*) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_midi_out_endpoint* VAR_0,
     struct urb *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < 0x10; ++VAR_2) {
  struct usbmidi_out_port* VAR_3 = &VAR_0->ports[VAR_2];
  if (!VAR_3->active)
   continue;
  while (VAR_1->transfer_buffer_length + 3 < VAR_0->max_transfer) {
   uint8_t VAR_4;
   if (FUNC_0(VAR_3->substream, &VAR_4, 1) != 1) {
    VAR_3->active = 0;
    break;
   }
   FUNC_1(VAR_3, VAR_4, VAR_1);
  }
 }
}
