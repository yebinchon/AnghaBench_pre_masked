
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {int ue_rxq; struct ifnet* ue_ifp; } ;
struct TYPE_2__ {unsigned int len; struct ifnet* rcvif; } ;
struct mbuf {unsigned int m_len; TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_ether*,int ) ;
 int FUNC_1 (struct ifnet*,int ,int) ;
 int FUNC_2 (int *,struct mbuf*) ;

int
FUNC_3(struct usb_ether *VAR_2, struct mbuf *VAR_3,
    unsigned int VAR_4)
{
 struct ifnet *VAR_5 = VAR_2->ue_ifp;

 FUNC_0(VAR_2, VAR_1);


 FUNC_1(VAR_5, VAR_0, 1);
 VAR_3->m_pkthdr.rcvif = VAR_5;
 VAR_3->m_pkthdr.len = VAR_3->m_len = VAR_4;


 (void)FUNC_2(&VAR_2->ue_rxq, VAR_3);
 return (0);
}
