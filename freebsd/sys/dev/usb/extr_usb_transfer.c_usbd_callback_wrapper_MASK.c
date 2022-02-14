
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct usb_xfer* curr; } ;
struct usb_xfer_root {TYPE_2__ done_q; int cv_drain; int bus; int * done_m; int done_p; int xfer_mtx; } ;
struct usb_xfer_queue {scalar_t__ recurse_3; struct usb_xfer* curr; } ;
struct TYPE_3__ {int doing_callback; scalar_t__ draining; scalar_t__ transferring; scalar_t__ started; int open; int bdma_no_post_sync; scalar_t__ bdma_enable; } ;
struct usb_xfer {scalar_t__ usb_state; TYPE_1__ flags_int; scalar_t__ error; int (* callback ) (struct usb_xfer*,scalar_t__) ;struct usb_xfer_root* xroot; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct usb_xfer*,scalar_t__) ;
 int FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (TYPE_2__*,struct usb_xfer*) ;
 int FUNC_10 (int ,int *,int *) ;
 scalar_t__ FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int) ;
 int FUNC_13 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_14(struct usb_xfer_queue *VAR_6)
{
 struct usb_xfer *VAR_7 = VAR_6->curr;
 struct usb_xfer_root *VAR_8 = VAR_7->xroot;

 FUNC_2(VAR_8->bus, VAR_1);
 if ((VAR_6->recurse_3 != 0 || FUNC_6(VAR_8->xfer_mtx) == 0) &&
     FUNC_4() == 0) {






  FUNC_0(3, "case 5 and 6\n");
  (void) FUNC_10(VAR_8->done_p,
      &VAR_8->done_m[0], &VAR_8->done_m[1]);
  return;
 }
 FUNC_0(3, "case 1-4\n");

 VAR_8->done_q.curr = ((void*)0);


 VAR_7->flags_int.doing_callback = 1;

 FUNC_3(VAR_8->bus);
 FUNC_2(VAR_8->bus, VAR_0);


 if (!VAR_7->flags_int.transferring) {
  VAR_7->usb_state = VAR_4;
  if (!VAR_7->flags_int.started) {

   FUNC_1(VAR_8->bus);
   goto done;
  }
 } else {

  if (FUNC_11(VAR_7)) {

   FUNC_1(VAR_8->bus);
   goto done;
  }




  VAR_7->flags_int.transferring = 0;

  if (VAR_7->error) {
   VAR_7->usb_state = VAR_3;
  } else {

   VAR_7->usb_state = VAR_5;







  }
 }
 (VAR_7->callback) (VAR_7, VAR_7->error);


 FUNC_1(VAR_8->bus);





 if ((!VAR_7->flags_int.open) &&
     (VAR_7->flags_int.started) &&
     (VAR_7->usb_state == VAR_3)) {

  VAR_7->flags_int.doing_callback = 0;

  FUNC_9(&VAR_8->done_q, VAR_7);
  return;
 }

done:

 VAR_7->flags_int.doing_callback = 0;




 if (VAR_7->flags_int.draining &&
     (!VAR_7->flags_int.transferring)) {

  VAR_7->flags_int.draining = 0;
  FUNC_5(&VAR_8->cv_drain);
 }


 FUNC_9(&VAR_8->done_q,
     VAR_8->done_q.curr);
}
