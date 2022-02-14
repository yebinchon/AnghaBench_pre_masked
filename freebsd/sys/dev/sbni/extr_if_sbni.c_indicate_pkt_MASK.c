
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbni_softc {struct mbuf* rx_buf_p; int inppos; struct ifnet* ifp; } ;
struct TYPE_2__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 int FUNC_0 (struct sbni_softc*) ;
 int FUNC_1 (struct sbni_softc*) ;
 int FUNC_2 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_3(struct sbni_softc *VAR_0)
{
 struct ifnet *VAR_1 = VAR_0->ifp;
 struct mbuf *VAR_2;

 VAR_2 = VAR_0->rx_buf_p;
 VAR_2->m_pkthdr.rcvif = VAR_1;
 VAR_2->m_pkthdr.len = VAR_2->m_len = VAR_0->inppos;
 VAR_0->rx_buf_p = ((void*)0);

 FUNC_1(VAR_0);
 (*VAR_1->if_input)(VAR_1, VAR_2);
 FUNC_0(VAR_0);
}
