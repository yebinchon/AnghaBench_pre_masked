
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; struct mbuf* m_nextpkt; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_4__ {scalar_t__ teardown; scalar_t__ running; } ;
struct cpsw_softc {TYPE_2__ rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_softc*) ;
 int FUNC_1 (struct cpsw_softc*) ;
 int VAR_1 ;
 struct mbuf* FUNC_2 (struct cpsw_softc*) ;
 int FUNC_3 (struct cpsw_softc*) ;
 int FUNC_4 (struct cpsw_softc*,int ,int) ;
 int FUNC_5 (struct cpsw_softc*,TYPE_2__*,int) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 struct cpsw_softc *VAR_3;
 struct ifnet *VAR_4;
 struct mbuf *VAR_5, *VAR_6;

 VAR_3 = (struct cpsw_softc *)VAR_2;
 FUNC_0(VAR_3);
 if (VAR_3->rx.teardown) {
  VAR_3->rx.running = 0;
  VAR_3->rx.teardown = 0;
  FUNC_5(VAR_3, &VAR_3->rx, 0xfffffffc);
 }
 VAR_5 = FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3, VAR_0, 1);
 FUNC_1(VAR_3);

 while (VAR_5 != ((void*)0)) {
  VAR_6 = VAR_5->m_nextpkt;
  VAR_5->m_nextpkt = ((void*)0);
  VAR_4 = VAR_5->m_pkthdr.rcvif;
  (*VAR_4->if_input)(VAR_4, VAR_5);
  FUNC_6(VAR_4, VAR_1, 1);
  VAR_5 = VAR_6;
 }
}
