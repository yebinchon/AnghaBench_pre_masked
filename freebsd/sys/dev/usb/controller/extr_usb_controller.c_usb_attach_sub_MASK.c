
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct usb_bus {TYPE_16__* attach_msg; int bus_mtx; TYPE_14__* cleanup_msg; int pd_cleanup_list; TYPE_13__* shutdown_msg; TYPE_11__* reset_msg; TYPE_9__* resume_msg; TYPE_7__* suspend_msg; TYPE_4__* detach_msg; TYPE_2__* explore_msg; } ;
typedef int device_t ;
struct TYPE_32__ {int * pm_callback; } ;
struct TYPE_33__ {struct usb_bus* bus; TYPE_8__ hdr; } ;
struct TYPE_30__ {int * pm_callback; } ;
struct TYPE_31__ {struct usb_bus* bus; TYPE_6__ hdr; } ;
struct TYPE_29__ {int * pm_callback; } ;
struct TYPE_27__ {int * pm_callback; } ;
struct TYPE_28__ {struct usb_bus* bus; TYPE_3__ hdr; } ;
struct TYPE_25__ {int * pm_callback; } ;
struct TYPE_26__ {struct usb_bus* bus; TYPE_1__ hdr; } ;
struct TYPE_24__ {struct usb_bus* bus; TYPE_5__ hdr; } ;
struct TYPE_23__ {int * pm_callback; } ;
struct TYPE_22__ {struct usb_bus* bus; TYPE_15__ hdr; } ;
struct TYPE_20__ {int * pm_callback; } ;
struct TYPE_21__ {struct usb_bus* bus; TYPE_12__ hdr; } ;
struct TYPE_18__ {int * pm_callback; } ;
struct TYPE_19__ {struct usb_bus* bus; TYPE_10__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct usb_bus*) ;
 int FUNC_4 (struct usb_bus*) ;
 int FUNC_5 (struct usb_bus*) ;
 int FUNC_6 (struct usb_bus*) ;
 int FUNC_7 (struct usb_bus*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_13 (struct usb_bus*,int) ;
 scalar_t__ FUNC_14 (int ,int *,int ,int ) ;
 int FUNC_15 (int ,TYPE_16__*,TYPE_16__*) ;
 int FUNC_16 (struct usb_bus*) ;

__attribute__((used)) static void
FUNC_17(device_t VAR_13, struct usb_bus *VAR_14)
{
 FUNC_11(&VAR_0);
 if (VAR_12 == ((void*)0))
  VAR_12 = FUNC_8("usbus");
 FUNC_12(&VAR_0);





 VAR_14->explore_msg[0].hdr.pm_callback = &VAR_7;
 VAR_14->explore_msg[0].bus = VAR_14;
 VAR_14->explore_msg[1].hdr.pm_callback = &VAR_7;
 VAR_14->explore_msg[1].bus = VAR_14;

 VAR_14->detach_msg[0].hdr.pm_callback = &VAR_6;
 VAR_14->detach_msg[0].bus = VAR_14;
 VAR_14->detach_msg[1].hdr.pm_callback = &VAR_6;
 VAR_14->detach_msg[1].bus = VAR_14;

 VAR_14->attach_msg[0].hdr.pm_callback = &VAR_4;
 VAR_14->attach_msg[0].bus = VAR_14;
 VAR_14->attach_msg[1].hdr.pm_callback = &VAR_4;
 VAR_14->attach_msg[1].bus = VAR_14;

 VAR_14->suspend_msg[0].hdr.pm_callback = &VAR_11;
 VAR_14->suspend_msg[0].bus = VAR_14;
 VAR_14->suspend_msg[1].hdr.pm_callback = &VAR_11;
 VAR_14->suspend_msg[1].bus = VAR_14;

 VAR_14->resume_msg[0].hdr.pm_callback = &VAR_9;
 VAR_14->resume_msg[0].bus = VAR_14;
 VAR_14->resume_msg[1].hdr.pm_callback = &VAR_9;
 VAR_14->resume_msg[1].bus = VAR_14;

 VAR_14->reset_msg[0].hdr.pm_callback = &VAR_8;
 VAR_14->reset_msg[0].bus = VAR_14;
 VAR_14->reset_msg[1].hdr.pm_callback = &VAR_8;
 VAR_14->reset_msg[1].bus = VAR_14;

 VAR_14->shutdown_msg[0].hdr.pm_callback = &VAR_10;
 VAR_14->shutdown_msg[0].bus = VAR_14;
 VAR_14->shutdown_msg[1].hdr.pm_callback = &VAR_10;
 VAR_14->shutdown_msg[1].bus = VAR_14;
 {

  FUNC_4(VAR_14);
  FUNC_15(FUNC_2(VAR_14),
      &VAR_14->attach_msg[0], &VAR_14->attach_msg[1]);
  FUNC_7(VAR_14);


  FUNC_13(VAR_14, 1);
 }
}
