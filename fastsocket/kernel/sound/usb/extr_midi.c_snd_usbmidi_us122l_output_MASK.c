
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {scalar_t__ transfer_buffer_length; scalar_t__ transfer_buffer; } ;
struct snd_usb_midi_out_endpoint {scalar_t__ max_transfer; TYPE_2__* ports; TYPE_1__* umidi; } ;
struct TYPE_4__ {scalar_t__ active; int substream; } ;
struct TYPE_3__ {int dev; } ;




 int FUNC_0 (scalar_t__,int,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_midi_out_endpoint *VAR_0,
          struct urb *VAR_1)
{
 int VAR_2;

 if (!VAR_0->ports[0].active)
  return;
 switch (FUNC_2(VAR_0->umidi->dev)) {
 case 129:
 case 128:
  VAR_2 = 1;
  break;
 default:
  VAR_2 = 2;
 }
 VAR_2 = FUNC_1(VAR_0->ports[0].substream,
         VAR_1->transfer_buffer,
         VAR_2);
 if (VAR_2 < 1) {
  VAR_0->ports[0].active = 0;
  return;
 }

 FUNC_0(VAR_1->transfer_buffer + VAR_2, 0xFD, VAR_0->max_transfer - VAR_2);
 VAR_1->transfer_buffer_length = VAR_0->max_transfer;
}
