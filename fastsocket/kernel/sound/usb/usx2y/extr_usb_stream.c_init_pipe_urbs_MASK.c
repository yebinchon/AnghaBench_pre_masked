
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stream_kernel {int n_o_ps; } ;
struct usb_iso_packet_descriptor {int length; scalar_t__ offset; } ;
struct usb_device {int dummy; } ;
struct urb {char* transfer_buffer; int pipe; int number_of_packets; int interval; int transfer_buffer_length; struct usb_iso_packet_descriptor* iso_frame_desc; struct usb_stream_kernel* context; struct usb_device* dev; int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct usb_device*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct usb_stream_kernel *VAR_2, unsigned VAR_3,
      struct urb **VAR_4, char *VAR_5,
      struct usb_device *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10 = VAR_3 ?
  VAR_3 : FUNC_0(VAR_6, VAR_7, FUNC_1(VAR_7));
 int VAR_11 = VAR_10 * VAR_2->n_o_ps;

 for (VAR_8 = 0; VAR_8 < VAR_1;
      ++VAR_8, VAR_5 += VAR_11) {
  struct urb *VAR_12 = VAR_4[VAR_8];
  struct usb_iso_packet_descriptor *VAR_13;
  VAR_12->transfer_flags = VAR_0;
  VAR_12->transfer_buffer = VAR_5;
  VAR_12->dev = VAR_6;
  VAR_12->pipe = VAR_7;
  VAR_12->number_of_packets = VAR_2->n_o_ps;
  VAR_12->context = VAR_2;
  VAR_12->interval = 1;
  if (FUNC_1(VAR_7))
   continue;

  VAR_12->transfer_buffer_length = VAR_11;
  VAR_13 = VAR_12->iso_frame_desc;
  VAR_13->offset = 0;
  VAR_13->length = VAR_10;
  for (VAR_9 = 1; VAR_9 < VAR_2->n_o_ps; ++VAR_9) {
   VAR_13[VAR_9].offset = VAR_13[VAR_9 - 1].offset + VAR_10;
   VAR_13[VAR_9].length = VAR_10;
  }
 }
}
