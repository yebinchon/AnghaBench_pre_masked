
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {struct bridge_softc* if_bridge; } ;
struct bridge_softc {int sc_ifp; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bridge_softc*,struct ifnet*,struct mbuf*) ;
 scalar_t__ FUNC_2 (struct mbuf**,int ,struct ifnet*,int ) ;
 int FUNC_3 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_3, struct ifnet *VAR_4)
{
 struct bridge_softc *VAR_5;

 VAR_5 = VAR_4->if_bridge;






 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_3);
  return;
 }

 if (FUNC_0(VAR_2)



     ) {
  if (FUNC_2(&VAR_3, VAR_5->sc_ifp, VAR_4, VAR_0) != 0)
   return;
  if (VAR_3 == ((void*)0))
   return;
 }

 FUNC_1(VAR_5, VAR_4, VAR_3);
}
