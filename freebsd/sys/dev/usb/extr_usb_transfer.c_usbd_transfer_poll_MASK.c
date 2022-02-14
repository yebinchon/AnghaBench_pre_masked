
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef size_t uint16_t ;
struct usb_xfer_root {int * xfer_mtx; int bus; TYPE_6__* done_m; struct usb_device* udev; } ;
struct usb_xfer {struct usb_xfer_root* xroot; } ;
struct usb_proc_msg {int (* pm_callback ) (struct usb_proc_msg*) ;} ;
struct usb_device {TYPE_5__** ctrl_xfer; TYPE_2__* cs_msg; struct usb_bus* bus; } ;
struct usb_bus {int bus_spin_lock; int bus_mtx; TYPE_1__* methods; } ;
struct TYPE_22__ {scalar_t__ up_msleep; } ;
struct TYPE_21__ {scalar_t__ up_msleep; } ;
struct TYPE_20__ {scalar_t__ up_msleep; } ;
struct TYPE_19__ {struct usb_proc_msg hdr; } ;
struct TYPE_18__ {TYPE_4__* xroot; } ;
struct TYPE_17__ {TYPE_3__* done_m; } ;
struct TYPE_16__ {struct usb_proc_msg hdr; } ;
struct TYPE_15__ {struct usb_proc_msg hdr; } ;
struct TYPE_14__ {int (* xfer_poll ) (struct usb_bus*) ;} ;
struct TYPE_13__ {scalar_t__ up_msleep; } ;
struct TYPE_12__ {scalar_t__ up_msleep; } ;


 TYPE_11__* FUNC_0 (struct usb_bus*) ;
 TYPE_10__* FUNC_1 (struct usb_bus*) ;
 TYPE_9__* FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (int ) ;
 TYPE_8__* FUNC_4 (struct usb_bus*) ;
 TYPE_7__* FUNC_5 (struct usb_bus*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct usb_bus*) ;
 int FUNC_14 (struct usb_proc_msg*) ;
 int FUNC_15 (struct usb_proc_msg*) ;
 int FUNC_16 (struct usb_proc_msg*) ;

void
FUNC_17(struct usb_xfer **VAR_0, uint16_t VAR_1)
{
 struct usb_xfer *VAR_2;
 struct usb_xfer_root *VAR_3;
 struct usb_device *VAR_4;
 struct usb_proc_msg *VAR_5;
 struct usb_bus *VAR_6;
 uint16_t VAR_7;
 uint16_t VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;

 for (VAR_7 = 0; VAR_7 != VAR_1; VAR_7++) {

  VAR_2 = VAR_0[VAR_7];
  if (VAR_2 == ((void*)0))
   continue;
  VAR_3 = VAR_2->xroot;
  if (VAR_3 == ((void*)0))
   continue;
  VAR_4 = VAR_3->udev;
  if (VAR_4 == ((void*)0))
   continue;
  VAR_6 = VAR_4->bus;
  if (VAR_6 == ((void*)0))
   continue;
  if (VAR_6->methods == ((void*)0))
   continue;
  if (VAR_6->methods->xfer_poll == ((void*)0))
   continue;

  VAR_8 = 0;
  VAR_9 = 0;
  VAR_10 = 0;

  if (FUNC_7() == 0) {

   while (FUNC_10(&VAR_6->bus_spin_lock)) {
    FUNC_12(&VAR_6->bus_spin_lock);
    VAR_8++;
   }


   while (FUNC_10(&VAR_6->bus_mtx)) {
    FUNC_11(&VAR_6->bus_mtx);
    VAR_9++;
   }


   while (FUNC_10(VAR_3->xfer_mtx)) {
    FUNC_11(VAR_3->xfer_mtx);
    VAR_10++;
   }
  }


  FUNC_0(VAR_6)->up_msleep = 0;
  FUNC_1(VAR_6)->up_msleep = 0;
  FUNC_2(VAR_6)->up_msleep = 0;
  FUNC_5(VAR_6)->up_msleep = 0;
  FUNC_4(VAR_6)->up_msleep = 0;


  (VAR_6->methods->xfer_poll) (VAR_6);

  FUNC_3(VAR_3->bus);


  if (VAR_4->ctrl_xfer[1] != ((void*)0)) {


   VAR_5 = &VAR_4->cs_msg[0].hdr;
   (VAR_5->pm_callback) (VAR_5);

   VAR_5 = &VAR_4->ctrl_xfer[1]->
       xroot->done_m[0].hdr;
   (VAR_5->pm_callback) (VAR_5);
  }


  VAR_5 = &VAR_3->done_m[0].hdr;
  (VAR_5->pm_callback) (VAR_5);

  FUNC_6(VAR_3->bus);


  while (VAR_10--)
   FUNC_8(VAR_3->xfer_mtx);


  while (VAR_9--)
   FUNC_8(&VAR_6->bus_mtx);


  while (VAR_8--)
   FUNC_9(&VAR_6->bus_spin_lock);
 }
}
