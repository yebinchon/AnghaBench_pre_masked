
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxp_softc {scalar_t__ watchdog_timer; int dev; int ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct fxp_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct fxp_softc*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct fxp_softc *VAR_3)
{
 if_t VAR_4 = VAR_3->ifp;

 FUNC_0(VAR_3, VAR_2);

 if (VAR_3->watchdog_timer == 0 || --VAR_3->watchdog_timer)
  return;

 FUNC_1(VAR_3->dev, "device timeout\n");
 FUNC_3(VAR_4, VAR_0, 1);

 FUNC_4(VAR_4, 0, VAR_1);
 FUNC_2(VAR_3, 1);
}
