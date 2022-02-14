
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {int dummy; } ;
struct lagg_port {struct lagg_softc* lp_softc; } ;
struct ifnet {scalar_t__ if_lagg; } ;


 int FUNC_0 (struct lagg_softc*) ;
 int FUNC_1 (struct lagg_softc*) ;
 int FUNC_2 (struct lagg_softc*) ;
 int FUNC_3 (struct lagg_softc*,struct lagg_port*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_0, int VAR_1)
{
 struct lagg_port *VAR_2 = (struct lagg_port *)VAR_0->if_lagg;
 struct lagg_softc *VAR_3 = ((void*)0);

 if (VAR_2 != ((void*)0))
  VAR_3 = VAR_2->lp_softc;
 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 FUNC_3(VAR_3, VAR_2);
 FUNC_1(VAR_3);
}
