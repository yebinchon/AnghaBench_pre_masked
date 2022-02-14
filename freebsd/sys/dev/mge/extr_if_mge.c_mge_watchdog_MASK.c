
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mge_softc {scalar_t__ wd_timer; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 int FUNC_1 (struct ifnet*,char*) ;
 int FUNC_2 (struct mge_softc*) ;
 int FUNC_3 (struct mge_softc*) ;

__attribute__((used)) static void
FUNC_4(struct mge_softc *VAR_1)
{
 struct ifnet *VAR_2;

 VAR_2 = VAR_1->ifp;

 if (VAR_1->wd_timer == 0 || --VAR_1->wd_timer) {
  return;
 }

 FUNC_0(VAR_2, VAR_0, 1);
 FUNC_1(VAR_2, "watchdog timeout\n");

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
