
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct emac_softc {int emac_fifo_mask; scalar_t__ emac_watchdog_timer; struct ifnet* emac_ifp; } ;


 int FUNC_0 (struct emac_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct emac_softc *VAR_4, uint32_t VAR_5)
{
 struct ifnet *VAR_6;

 FUNC_0(VAR_4);

 VAR_6 = VAR_4->emac_ifp;
 VAR_5 &= (VAR_0 | VAR_1);
 VAR_4->emac_fifo_mask &= ~VAR_5;
 if (VAR_5 == (VAR_0 | VAR_1))
  FUNC_1(VAR_6, VAR_2, 2);
 else
  FUNC_1(VAR_6, VAR_2, 1);
 VAR_6->if_drv_flags &= ~VAR_3;


 VAR_4->emac_watchdog_timer = 0;
}
