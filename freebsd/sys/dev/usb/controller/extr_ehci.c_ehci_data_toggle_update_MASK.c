
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct usb_xfer {int max_packet_size; TYPE_1__* endpoint; } ;
struct TYPE_2__ {int toggle_next; } ;



__attribute__((used)) static void
FUNC_0(struct usb_xfer *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 uint16_t VAR_3;
 uint8_t VAR_4;


 VAR_4 = (VAR_1 / VAR_0->max_packet_size) & 1;


 VAR_3 = VAR_1 % VAR_0->max_packet_size;

 if (VAR_3 > 0)
  VAR_4 ^= 1;
 else if (VAR_1 != VAR_2)
  VAR_4 ^= 1;
 else if (VAR_2 == 0)
  VAR_4 ^= 1;

 VAR_0->endpoint->toggle_next ^= VAR_4;
}
