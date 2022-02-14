
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer_queue {int recurse_1; int recurse_3; int recurse_2; struct usb_xfer* curr; int (* command ) (struct usb_xfer_queue*) ;int head; } ;
struct usb_xfer {int * wait_queue; } ;


 int FUNC_0 (int,char*,struct usb_xfer*) ;
 struct usb_xfer* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct usb_xfer*,int ) ;
 int FUNC_3 (struct usb_xfer_queue*) ;
 int FUNC_4 (struct usb_xfer_queue*,struct usb_xfer*) ;
 int VAR_0 ;

void
FUNC_5(struct usb_xfer_queue *VAR_1, struct usb_xfer *VAR_2)
{
 if (VAR_2) {




  if (VAR_1->curr != VAR_2) {
   FUNC_4(VAR_1, VAR_2);
   if (VAR_1->curr != ((void*)0)) {

    FUNC_0(6, "busy %p\n", VAR_1->curr);
    return;
   }
  }
 } else {

  VAR_1->curr = ((void*)0);
 }

 if (!VAR_1->recurse_1) {


  VAR_1->recurse_3 = 0;

  do {

   VAR_1->recurse_1 = 1;
   VAR_1->recurse_2 = 1;

   if (VAR_1->curr == ((void*)0)) {
    VAR_2 = FUNC_1(&VAR_1->head);
    if (VAR_2) {
     FUNC_2(&VAR_1->head, VAR_2,
         VAR_0);
     VAR_2->wait_queue = ((void*)0);
     VAR_1->curr = VAR_2;
    } else {
     break;
    }
   }
   FUNC_0(6, "cb %p (enter)\n", VAR_1->curr);
   (VAR_1->command) (VAR_1);
   FUNC_0(6, "cb %p (leave)\n", VAR_1->curr);





   VAR_1->recurse_3 = 1;

  } while (!VAR_1->recurse_2);


  VAR_1->recurse_1 = 0;

 } else {

  VAR_1->recurse_2 = 0;
 }
}
