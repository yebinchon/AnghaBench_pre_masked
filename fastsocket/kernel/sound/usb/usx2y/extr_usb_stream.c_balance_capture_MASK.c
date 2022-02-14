
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stream_kernel {int iso_frame_balance; } ;
struct urb {scalar_t__ number_of_packets; } ;


 int FUNC_0 (struct usb_stream_kernel*,struct urb*) ;

__attribute__((used)) static bool FUNC_1(struct usb_stream_kernel *VAR_0, struct urb *VAR_1)
{
 VAR_0->iso_frame_balance -= VAR_1->number_of_packets;
 return FUNC_0(VAR_0, VAR_1);
}
