
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_buffer_length; int transfer_buffer; } ;
struct snd_usb_midi_out_endpoint {TYPE_1__* ports; int max_transfer; } ;
struct TYPE_2__ {scalar_t__ active; int substream; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_out_endpoint* VAR_0,
       struct urb *VAR_1)
{
 int VAR_2;

 if (!VAR_0->ports[0].active)
  return;
 VAR_2 = FUNC_0(VAR_0->ports[0].substream,
         VAR_1->transfer_buffer,
         VAR_0->max_transfer);
 if (VAR_2 < 1) {
  VAR_0->ports[0].active = 0;
  return;
 }
 VAR_1->transfer_buffer_length = VAR_2;
}
