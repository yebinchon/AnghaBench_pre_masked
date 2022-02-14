
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int * an_tx_fids; } ;
struct an_softc {int * an_flash_buffer; int an_stat_ch; TYPE_1__ an_rdata; int mpi350; struct ifnet* an_ifp; scalar_t__ an_gone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct an_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct an_softc*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(struct an_softc *VAR_7)
{
 struct ifnet *VAR_8;
 int VAR_9;

 FUNC_1(VAR_7);

 if (VAR_7->an_gone)
  return;

 VAR_8 = VAR_7->an_ifp;

 FUNC_3(VAR_7, VAR_2, 0);
 FUNC_2(VAR_7, FUNC_0(VAR_7->mpi350), 0);
 FUNC_3(VAR_7, VAR_1, 0);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_3(VAR_7, VAR_0, VAR_7->an_rdata.an_tx_fids[VAR_9]);

 FUNC_4(&VAR_7->an_stat_ch);

 VAR_8->if_drv_flags &= ~(VAR_5|VAR_4);

 if (VAR_7->an_flash_buffer) {
  FUNC_5(VAR_7->an_flash_buffer, VAR_6);
  VAR_7->an_flash_buffer = ((void*)0);
 }
}
