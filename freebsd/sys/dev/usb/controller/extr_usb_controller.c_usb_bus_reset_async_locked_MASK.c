
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_bus {TYPE_3__* reset_msg; int parent; } ;
struct TYPE_6__ {int * tqe_prev; } ;
struct TYPE_5__ {TYPE_2__ pm_qentry; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,TYPE_3__*,TYPE_3__*) ;

void
FUNC_5(struct usb_bus *VAR_1)
{
 FUNC_2(VAR_1, VAR_0);

 FUNC_0("\n");

 if (VAR_1->reset_msg[0].hdr.pm_qentry.tqe_prev != ((void*)0) ||
     VAR_1->reset_msg[1].hdr.pm_qentry.tqe_prev != ((void*)0)) {
  FUNC_0("Reset already pending\n");
  return;
 }

 FUNC_3(VAR_1->parent, "Resetting controller\n");

 FUNC_4(FUNC_1(VAR_1),
     &VAR_1->reset_msg[0], &VAR_1->reset_msg[1]);
}
