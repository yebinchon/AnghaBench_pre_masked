
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_softc {scalar_t__ sge_timer; int sge_flags; struct ifnet* sge_ifp; int sge_dev; } ;
struct ifnet {int if_snd; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct sge_softc*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct sge_softc*) ;
 int FUNC_5 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_6(struct sge_softc *VAR_4)
{
 struct ifnet *VAR_5;

 FUNC_1(VAR_4);
 if (VAR_4->sge_timer == 0 || --VAR_4->sge_timer > 0)
  return;

 VAR_5 = VAR_4->sge_ifp;
 if ((VAR_4->sge_flags & VAR_2) == 0) {
  if (1 || VAR_3)
   FUNC_2(VAR_4->sge_dev,
       "watchdog timeout (lost link)\n");
  FUNC_3(VAR_5, VAR_0, 1);
  VAR_5->if_drv_flags &= ~VAR_1;
  FUNC_4(VAR_4);
  return;
 }
 FUNC_2(VAR_4->sge_dev, "watchdog timeout\n");
 FUNC_3(VAR_5, VAR_0, 1);

 VAR_5->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_4);
 if (!FUNC_0(&VAR_4->sge_ifp->if_snd))
  FUNC_5(VAR_5);
}
