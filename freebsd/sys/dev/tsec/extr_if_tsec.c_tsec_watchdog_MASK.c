
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {scalar_t__ tsec_watchdog; struct ifnet* tsec_ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tsec_softc*) ;
 int FUNC_1 (struct ifnet*,int ,int) ;
 int FUNC_2 (struct ifnet*,char*) ;
 int FUNC_3 (struct tsec_softc*) ;
 int FUNC_4 (struct tsec_softc*) ;

__attribute__((used)) static void
FUNC_5(struct tsec_softc *VAR_1)
{
 struct ifnet *VAR_2;

 FUNC_0(VAR_1);

 if (VAR_1->tsec_watchdog == 0 || --VAR_1->tsec_watchdog > 0)
  return;

 VAR_2 = VAR_1->tsec_ifp;
 FUNC_1(VAR_2, VAR_0, 1);
 FUNC_2(VAR_2, "watchdog timeout\n");

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
}
