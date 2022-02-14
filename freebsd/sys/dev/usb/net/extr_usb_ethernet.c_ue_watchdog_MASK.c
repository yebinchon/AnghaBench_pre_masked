
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {int ue_watchdog; TYPE_1__* ue_tick_task; struct ifnet* ue_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_ether*,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,void (*) (void*),struct usb_ether*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3)
{
 struct usb_ether *VAR_4 = VAR_3;
 struct ifnet *VAR_5 = VAR_4->ue_ifp;

 if ((VAR_5->if_drv_flags & VAR_0) == 0)
  return;

 FUNC_0(VAR_4, VAR_2,
     &VAR_4->ue_tick_task[0].hdr,
     &VAR_4->ue_tick_task[1].hdr);

 FUNC_1(&VAR_4->ue_watchdog, VAR_1, FUNC_2, VAR_4);
}
