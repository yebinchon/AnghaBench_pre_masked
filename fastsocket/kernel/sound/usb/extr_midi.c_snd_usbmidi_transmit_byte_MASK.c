
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct usbmidi_out_port {int cable; int* data; int state; TYPE_3__* ep; } ;
struct urb {int dummy; } ;
struct TYPE_6__ {TYPE_2__* umidi; } ;
struct TYPE_5__ {TYPE_1__* usb_protocol_ops; } ;
struct TYPE_4__ {void (* output_packet ) (struct urb*,int,int,int,int) ;} ;
 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct usbmidi_out_port* VAR_1,
          uint8_t VAR_2, struct urb* VAR_3)
{
 uint8_t VAR_4 = VAR_1->cable;
 void (*VAR_5)(struct urb*, uint8_t, uint8_t, uint8_t, uint8_t) =
  VAR_1->ep->umidi->usb_protocol_ops->output_packet;

 if (VAR_2 >= 0xf8) {
  VAR_5(VAR_3, VAR_4 | 0x0f, VAR_2, 0, 0);
 } else if (VAR_2 >= 0xf0) {
  switch (VAR_2) {
  case 0xf0:
   VAR_1->data[0] = VAR_2;
   VAR_1->state = 129;
   break;
  case 0xf1:
  case 0xf3:
   VAR_1->data[0] = VAR_2;
   VAR_1->state = 133;
   break;
  case 0xf2:
   VAR_1->data[0] = VAR_2;
   VAR_1->state = 132;
   break;
  case 0xf4:
  case 0xf5:
   VAR_1->state = VAR_0;
   break;
  case 0xf6:
   VAR_5(VAR_3, VAR_4 | 0x05, 0xf6, 0, 0);
   VAR_1->state = VAR_0;
   break;
  case 0xf7:
   switch (VAR_1->state) {
   case 130:
    VAR_5(VAR_3, VAR_4 | 0x05, 0xf7, 0, 0);
    break;
   case 129:
    VAR_5(VAR_3, VAR_4 | 0x06, VAR_1->data[0], 0xf7, 0);
    break;
   case 128:
    VAR_5(VAR_3, VAR_4 | 0x07, VAR_1->data[0], VAR_1->data[1], 0xf7);
    break;
   }
   VAR_1->state = VAR_0;
   break;
  }
 } else if (VAR_2 >= 0x80) {
  VAR_1->data[0] = VAR_2;
  if (VAR_2 >= 0xc0 && VAR_2 <= 0xdf)
   VAR_1->state = 133;
  else
   VAR_1->state = 132;
 } else {
  switch (VAR_1->state) {
  case 133:
   if (VAR_1->data[0] < 0xf0) {
    VAR_4 |= VAR_1->data[0] >> 4;
   } else {
    VAR_4 |= 0x02;
    VAR_1->state = VAR_0;
   }
   VAR_5(VAR_3, VAR_4, VAR_1->data[0], VAR_2, 0);
   break;
  case 132:
   VAR_1->data[1] = VAR_2;
   VAR_1->state = 131;
   break;
  case 131:
   if (VAR_1->data[0] < 0xf0) {
    VAR_4 |= VAR_1->data[0] >> 4;
    VAR_1->state = 132;
   } else {
    VAR_4 |= 0x03;
    VAR_1->state = VAR_0;
   }
   VAR_5(VAR_3, VAR_4, VAR_1->data[0], VAR_1->data[1], VAR_2);
   break;
  case 130:
   VAR_1->data[0] = VAR_2;
   VAR_1->state = 129;
   break;
  case 129:
   VAR_1->data[1] = VAR_2;
   VAR_1->state = 128;
   break;
  case 128:
   VAR_5(VAR_3, VAR_4 | 0x04, VAR_1->data[0], VAR_1->data[1], VAR_2);
   VAR_1->state = 130;
   break;
  }
 }
}
