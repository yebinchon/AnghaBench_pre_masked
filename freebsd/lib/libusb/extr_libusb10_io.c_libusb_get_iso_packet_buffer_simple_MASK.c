
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct libusb_transfer {scalar_t__ num_iso_packets; TYPE_1__* iso_packet_desc; int * buffer; } ;
struct TYPE_2__ {int length; } ;



uint8_t *
FUNC_0(struct libusb_transfer *VAR_0, uint32_t VAR_1)
{
 uint8_t *VAR_2;

 if (VAR_0->num_iso_packets < 0)
  return (((void*)0));

 if (VAR_1 >= (uint32_t)VAR_0->num_iso_packets)
  return (((void*)0));

 VAR_2 = VAR_0->buffer;
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_2 += VAR_0->iso_packet_desc[0].length * VAR_1;

 return (VAR_2);
}
