
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct umidi_chan {int * xfer; } ;


 size_t VAR_0 ;
 struct umidi_chan* FUNC_0 (struct usb_fifo*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct usb_fifo *VAR_1)
{
 struct umidi_chan *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->xfer[VAR_0]);
}
