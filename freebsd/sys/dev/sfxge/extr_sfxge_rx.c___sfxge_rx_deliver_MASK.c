
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_softc {struct ifnet* ifnet; } ;
struct TYPE_2__ {int csum_data; struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void FUNC_1(struct sfxge_softc *VAR_0, struct mbuf *VAR_1)
{
 struct ifnet *VAR_2 = VAR_0->ifnet;

 VAR_1->m_pkthdr.rcvif = VAR_2;
 VAR_1->m_pkthdr.csum_data = 0xffff;
 VAR_2->if_input(VAR_2, VAR_1);
}
