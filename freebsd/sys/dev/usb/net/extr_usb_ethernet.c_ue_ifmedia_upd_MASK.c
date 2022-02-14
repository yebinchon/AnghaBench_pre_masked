
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {TYPE_1__* ue_media_task; } ;
struct ifnet {struct usb_ether* if_softc; } ;
struct TYPE_2__ {int hdr; } ;


 int FUNC_0 (struct usb_ether*) ;
 int FUNC_1 (struct usb_ether*) ;
 int VAR_0 ;
 int FUNC_2 (struct usb_ether*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_1)
{
 struct usb_ether *VAR_2 = VAR_1->if_softc;


 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_0,
     &VAR_2->ue_media_task[0].hdr,
     &VAR_2->ue_media_task[1].hdr);
 FUNC_1(VAR_2);

 return (0);
}
