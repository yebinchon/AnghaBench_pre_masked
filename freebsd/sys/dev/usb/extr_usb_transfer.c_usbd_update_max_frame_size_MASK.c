
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int max_frame_size; int max_packet_size; int max_packet_count; } ;



__attribute__((used)) static void
FUNC_0(struct usb_xfer *VAR_0)
{




 VAR_0->max_frame_size = VAR_0->max_packet_size * VAR_0->max_packet_count;
}
