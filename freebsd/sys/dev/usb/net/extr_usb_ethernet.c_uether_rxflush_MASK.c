
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int ue_rxq; struct ifnet* ue_ifp; } ;
struct mbuf {int * m_nextpkt; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct epoch_tracker {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 struct mbuf* FUNC_2 (struct mbuf*,int ) ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct usb_ether*,int ) ;
 int FUNC_5 (struct usb_ether*) ;
 int VAR_1 ;
 struct mbuf* FUNC_6 (int *) ;
 int FUNC_7 (struct ifnet*,struct mbuf*) ;

void
FUNC_8(struct usb_ether *VAR_2)
{
 struct ifnet *VAR_3 = VAR_2->ue_ifp;
 struct epoch_tracker VAR_4;
 struct mbuf *VAR_5, *VAR_6;

 FUNC_4(VAR_2, VAR_0);

 VAR_6 = FUNC_6(&VAR_2->ue_rxq);
 FUNC_5(VAR_2);
 FUNC_0(VAR_4);
 while ((VAR_5 = VAR_6) != ((void*)0)) {
  VAR_6 = FUNC_2(VAR_5, VAR_1);
  VAR_5->m_nextpkt = ((void*)0);
  VAR_3->if_input(VAR_3, VAR_5);
 }
 FUNC_1(VAR_4);
 FUNC_3(VAR_2);
}
