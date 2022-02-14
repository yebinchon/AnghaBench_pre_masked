
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; struct dme_softc* if_softc; } ;
struct dme_softc {scalar_t__ dme_txbusy; scalar_t__ dme_txready; TYPE_1__* dme_ifp; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int FUNC_0 (struct dme_softc*) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct dme_softc*) ;
 int FUNC_4 (struct dme_softc*) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_2)
{
 struct dme_softc *VAR_3;

 VAR_3 = VAR_2->if_softc;
 FUNC_0(VAR_3);

 if ((VAR_2->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1)
  return;

 FUNC_1("dme_start, flags %#x busy %d ready %d",
     VAR_3->dme_ifp->if_drv_flags, VAR_3->dme_txbusy, VAR_3->dme_txready);
 FUNC_2(VAR_3->dme_txbusy == 0 || VAR_3->dme_txready == 0,
     ("dme: send without empty queue\n"));

 FUNC_3(VAR_3);

 if (VAR_3->dme_txbusy == 0) {

  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
 }




 if (VAR_3->dme_txready != 0)
  VAR_2->if_drv_flags |= VAR_0;
}
