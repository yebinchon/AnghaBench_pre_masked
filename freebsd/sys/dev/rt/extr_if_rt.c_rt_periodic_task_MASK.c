
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int periodic_round; int periodic_ch; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt_softc*,int ,char*,int) ;
 int FUNC_1 (struct rt_softc*) ;
 int FUNC_2 (struct rt_softc*) ;
 int FUNC_3 (int *,int,int ,struct rt_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct rt_softc*) ;
 int FUNC_5 (struct rt_softc*) ;
 int FUNC_6 (struct rt_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4, int VAR_5)
{
 struct rt_softc *VAR_6;
 struct ifnet *VAR_7;

 VAR_6 = VAR_4;
 VAR_7 = VAR_6->ifp;

 FUNC_0(VAR_6, VAR_1, "periodic task: round=%lu\n",
     VAR_6->periodic_round);

 if (!(VAR_7->if_drv_flags & VAR_0))
  return;

 FUNC_1(VAR_6);
 VAR_6->periodic_round++;
 FUNC_5(VAR_6);

 if ((VAR_6->periodic_round % 10) == 0) {
  FUNC_4(VAR_6);
  FUNC_6(VAR_6);
 }

 FUNC_2(VAR_6);
 FUNC_3(&VAR_6->periodic_ch, VAR_2 / 10, VAR_3, VAR_6);
}
