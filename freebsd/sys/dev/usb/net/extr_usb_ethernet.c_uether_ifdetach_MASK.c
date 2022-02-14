
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_tq; int ue_unit; int ue_rxq; int ue_sysctl_ctx; int * ue_miibus; int ue_dev; int ue_watchdog; struct ifnet* ue_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_ether*) ;
 int FUNC_1 (struct usb_ether*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void
FUNC_13(struct usb_ether *VAR_3)
{
 struct ifnet *VAR_4;


 FUNC_11(&VAR_3->ue_tq);


 VAR_4 = VAR_3->ue_ifp;

 if (VAR_4 != ((void*)0)) {


  FUNC_0(VAR_3);
  VAR_4->if_drv_flags &= ~VAR_1;
  FUNC_1(VAR_3);


  FUNC_10(&VAR_3->ue_watchdog);


  if (VAR_3->ue_miibus != ((void*)0)) {
   FUNC_7(&VAR_0);
   FUNC_2(VAR_3->ue_dev, VAR_3->ue_miibus);
   FUNC_8(&VAR_0);
  }


  FUNC_3(VAR_4);


  FUNC_5(VAR_4);


  FUNC_9(&VAR_3->ue_sysctl_ctx);


  FUNC_6(&VAR_3->ue_rxq);


  FUNC_4(VAR_2, VAR_3->ue_unit);
 }


 FUNC_12(&VAR_3->ue_tq);
}
