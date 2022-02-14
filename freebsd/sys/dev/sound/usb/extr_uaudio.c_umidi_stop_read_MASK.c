
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct umidi_sub_chan {scalar_t__ read_open; } ;
struct umidi_chan {scalar_t__ read_open_refcount; } ;


 int FUNC_0 (char*) ;
 struct umidi_sub_chan* FUNC_1 (struct usb_fifo*) ;
 struct umidi_chan* FUNC_2 (struct usb_fifo*) ;

__attribute__((used)) static void
FUNC_3(struct usb_fifo *VAR_0)
{
 struct umidi_chan *VAR_1 = FUNC_2(VAR_0);
 struct umidi_sub_chan *VAR_2 = FUNC_1(VAR_0);

 FUNC_0("\n");

 VAR_2->read_open = 0;

 if (--(VAR_1->read_open_refcount) == 0) {




  FUNC_0("(stopping read transfer)\n");
 }
}
