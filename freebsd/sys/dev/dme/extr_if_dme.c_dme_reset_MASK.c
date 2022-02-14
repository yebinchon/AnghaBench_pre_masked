
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct dme_softc {scalar_t__ dme_txready; scalar_t__ dme_txbusy; TYPE_1__* dme_ifp; int dme_dev; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dme_softc*,int ) ;
 int FUNC_4 (struct dme_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct dme_softc *VAR_3)
{
 u_int VAR_4;


 FUNC_4(VAR_3, VAR_0, VAR_2 | VAR_1);
 FUNC_0(100);
 VAR_4 = FUNC_3(VAR_3, VAR_0);
 if (VAR_4 & VAR_2)
  FUNC_2(VAR_3->dme_dev, "device did not complete first reset\n");


 FUNC_4(VAR_3, VAR_0, 0);
 FUNC_4(VAR_3, VAR_0, VAR_2 | VAR_1);
 FUNC_0(100);
 VAR_4 = FUNC_3(VAR_3, VAR_0);
 if (VAR_4 & VAR_2)
  FUNC_2(VAR_3->dme_dev, "device did not complete second reset\n");


 VAR_3->dme_txbusy = 0;
 VAR_3->dme_txready = 0;

 FUNC_1("dme_reset, flags %#x busy %d ready %d",
     VAR_3->dme_ifp ? VAR_3->dme_ifp->if_drv_flags : 0,
     VAR_3->dme_txbusy, VAR_3->dme_txready);
}
