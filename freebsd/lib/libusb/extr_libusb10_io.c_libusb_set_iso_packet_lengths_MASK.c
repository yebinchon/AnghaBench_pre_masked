
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct libusb_transfer {int num_iso_packets; TYPE_1__* iso_packet_desc; } ;
struct TYPE_2__ {int length; } ;



void
FUNC_0(struct libusb_transfer *VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 if (VAR_0->num_iso_packets < 0)
  return;

 for (VAR_2 = 0; VAR_2 != VAR_0->num_iso_packets; VAR_2++)
  VAR_0->iso_packet_desc[VAR_2].length = VAR_1;
}
