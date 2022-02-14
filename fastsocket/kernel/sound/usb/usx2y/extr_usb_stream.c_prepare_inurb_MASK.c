
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {int length; scalar_t__ offset; } ;
struct urb {int number_of_packets; int transfer_buffer_length; struct usb_iso_packet_descriptor* iso_frame_desc; } ;



__attribute__((used)) static void FUNC_0(int VAR_0, struct urb *VAR_1)
{
 struct usb_iso_packet_descriptor *VAR_2;
 int VAR_3;

 VAR_1->number_of_packets = VAR_0;
 VAR_2 = VAR_1->iso_frame_desc;
 VAR_2->offset = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->number_of_packets - 1; ++VAR_3)
  VAR_2[VAR_3 + 1].offset = VAR_2[VAR_3].offset + VAR_2[VAR_3].length;

 VAR_1->transfer_buffer_length =
  VAR_2[0].length * VAR_1->number_of_packets;
}
