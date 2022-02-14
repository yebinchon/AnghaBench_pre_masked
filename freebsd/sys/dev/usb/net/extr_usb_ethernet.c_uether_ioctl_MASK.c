
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct usb_ether {int * ue_miibus; TYPE_3__* ue_multi_task; TYPE_2__* ue_sync_task; TYPE_1__* ue_promisc_task; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct usb_ether* if_softc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_6__ {int hdr; } ;
struct TYPE_5__ {int hdr; } ;
struct TYPE_4__ {int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct usb_ether*) ;
 int FUNC_1 (struct usb_ether*) ;
 struct mii_data* FUNC_2 (int *) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*,struct ifreq*,int *,int) ;
 int VAR_2 ;
 int FUNC_5 (struct usb_ether*,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_6(struct ifnet *VAR_6, u_long VAR_7, caddr_t VAR_8)
{
 struct usb_ether *VAR_9 = VAR_6->if_softc;
 struct ifreq *VAR_10 = (struct ifreq *)VAR_8;
 struct mii_data *VAR_11;
 int VAR_12 = 0;

 switch (VAR_7) {
 case 129:
  FUNC_0(VAR_9);
  if (VAR_6->if_flags & VAR_1) {
   if (VAR_6->if_drv_flags & VAR_0)
    FUNC_5(VAR_9, VAR_2,
        &VAR_9->ue_promisc_task[0].hdr,
        &VAR_9->ue_promisc_task[1].hdr);
   else
    FUNC_5(VAR_9, VAR_4,
        &VAR_9->ue_sync_task[0].hdr,
        &VAR_9->ue_sync_task[1].hdr);
  } else {
   FUNC_5(VAR_9, VAR_5,
       &VAR_9->ue_sync_task[0].hdr,
       &VAR_9->ue_sync_task[1].hdr);
  }
  FUNC_1(VAR_9);
  break;
 case 132:
 case 131:
  FUNC_0(VAR_9);
  FUNC_5(VAR_9, VAR_3,
      &VAR_9->ue_multi_task[0].hdr,
      &VAR_9->ue_multi_task[1].hdr);
  FUNC_1(VAR_9);
  break;
 case 130:
 case 128:
  if (VAR_9->ue_miibus != ((void*)0)) {
   VAR_11 = FUNC_2(VAR_9->ue_miibus);
   VAR_12 = FUNC_4(VAR_6, VAR_10, &VAR_11->mii_media, VAR_7);
  } else
   VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8);
  break;
 default:
  VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8);
  break;
 }
 return (VAR_12);
}
