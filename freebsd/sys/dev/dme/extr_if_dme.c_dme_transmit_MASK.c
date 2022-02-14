
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dme_softc {int dme_txlen; int dme_txbusy; scalar_t__ dme_txready; TYPE_1__* dme_ifp; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int FUNC_0 (struct dme_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int,scalar_t__) ;
 int FUNC_2 (scalar_t__,char*) ;
 int VAR_4 ;
 int FUNC_3 (struct dme_softc*,int ) ;
 int FUNC_4 (struct dme_softc*,int ,int) ;

void
FUNC_5(struct dme_softc *VAR_5)
{

 FUNC_0(VAR_5);
 FUNC_2(VAR_5->dme_txready, ("transmit without txready"));

 FUNC_4(VAR_5, VAR_3, VAR_5->dme_txlen & 0xff);
 FUNC_4(VAR_5, VAR_2, (VAR_5->dme_txlen >> 8) & 0xff );


 FUNC_3(VAR_5, VAR_0);

 FUNC_4(VAR_5, VAR_1, VAR_4);

 VAR_5->dme_txready = 0;
 VAR_5->dme_txbusy = 1;
 FUNC_1("dme_transmit done, flags %#x busy %d ready %d",
     VAR_5->dme_ifp->if_drv_flags, VAR_5->dme_txbusy, VAR_5->dme_txready);
}
