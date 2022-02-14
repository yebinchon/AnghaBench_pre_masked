
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct dme_softc {scalar_t__ dme_txready; scalar_t__ dme_txbusy; struct ifnet* dme_ifp; int dme_tick_ch; } ;


 int FUNC_0 (struct dme_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dme_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct dme_softc *VAR_4)
{
 struct ifnet *VAR_5;

 FUNC_0(VAR_4);

 FUNC_3(VAR_4, VAR_1, 0x00);

 FUNC_3(VAR_4, VAR_0, 0x00);

 FUNC_2(&VAR_4->dme_tick_ch);

 VAR_5 = VAR_4->dme_ifp;
 VAR_5->if_drv_flags &= ~(VAR_3 | VAR_2);

 FUNC_1("dme_stop, flags %#x busy %d ready %d",
     VAR_4->dme_ifp->if_drv_flags, VAR_4->dme_txbusy, VAR_4->dme_txready);
 VAR_4->dme_txbusy = 0;
 VAR_4->dme_txready = 0;
}
