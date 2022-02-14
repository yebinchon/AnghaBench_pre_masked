
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int csum_flags; TYPE_1__* snd_tag; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct lagg_softc {scalar_t__ sc_proto; scalar_t__ sc_count; } ;
struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_3__ {struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct lagg_softc*,struct mbuf*) ;
 int FUNC_6 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_4, struct mbuf *VAR_5)
{
 struct lagg_softc *VAR_6 = (struct lagg_softc *)VAR_4->if_softc;
 int VAR_7;





 FUNC_1();

 if (VAR_6->sc_proto == VAR_3 || VAR_6->sc_count == 0) {
  FUNC_2();
  FUNC_6(VAR_5);
  FUNC_4(VAR_4, VAR_2, 1);
  return (VAR_1);
 }

 FUNC_0(VAR_4, VAR_5);

 VAR_7 = FUNC_5(VAR_6, VAR_5);
 FUNC_2();

 if (VAR_7 != 0)
  FUNC_4(VAR_4, VAR_2, 1);

 return (VAR_7);
}
