
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct umidi_sub_chan {scalar_t__ write_open; } ;
struct umidi_chan {scalar_t__ write_open_refcount; int * xfer; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 struct umidi_sub_chan* FUNC_1 (struct usb_fifo*) ;
 struct umidi_chan* FUNC_2 (struct usb_fifo*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_fifo *VAR_1)
{
 struct umidi_chan *VAR_2 = FUNC_2(VAR_1);
 struct umidi_sub_chan *VAR_3 = FUNC_1(VAR_1);

 FUNC_0("\n");

 VAR_3->write_open = 0;

 if (--(VAR_2->write_open_refcount) == 0) {
  FUNC_0("(stopping write transfer)\n");
  FUNC_3(VAR_2->xfer[VAR_0]);
 }
}
