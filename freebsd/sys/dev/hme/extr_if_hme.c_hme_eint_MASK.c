
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct hme_softc {TYPE_1__* sc_ifp; int sc_dev; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hme_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct hme_softc*) ;

__attribute__((used)) static void
FUNC_4(struct hme_softc *VAR_6, u_int VAR_7)
{

 if ((VAR_7 & VAR_4) != 0) {
  FUNC_2(VAR_6->sc_dev, "XXXlink status changed: "
      "cfg=%#x, stat=%#x, sm=%#x\n",
      FUNC_0(VAR_6, VAR_0),
      FUNC_0(VAR_6, VAR_2),
      FUNC_0(VAR_6, VAR_1));
  return;
 }


 if ((VAR_7 & VAR_3) != 0) {
  FUNC_1(VAR_6->sc_dev, "error signaled, status=%#x\n", VAR_7);
  VAR_6->sc_ifp->if_drv_flags &= ~VAR_5;
  FUNC_3(VAR_6);
 }
}
