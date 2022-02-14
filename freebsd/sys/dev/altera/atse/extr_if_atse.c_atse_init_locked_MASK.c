
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct atse_softc {int atse_tick; int atse_flags; int atse_miibus; int atse_eth_addr; struct ifnet* atse_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct atse_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct atse_softc*) ;
 int FUNC_3 (struct atse_softc*) ;
 int FUNC_4 (struct atse_softc*) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int ,int ,struct atse_softc*) ;
 struct mii_data* FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_9(struct atse_softc *VAR_6)
{
 struct ifnet *VAR_7;
 struct mii_data *VAR_8;
 uint8_t *VAR_9;

 FUNC_0(VAR_6);
 VAR_7 = VAR_6->atse_ifp;

 if ((VAR_7->if_drv_flags & VAR_3) != 0) {
  return;
 }






 VAR_9 = FUNC_1(VAR_6->atse_ifp);
 FUNC_5(VAR_9, &VAR_6->atse_eth_addr, VAR_1);


 FUNC_4(VAR_6);

 FUNC_2(VAR_6);


 FUNC_3(VAR_6);

 VAR_6->atse_flags &= VAR_0;

 VAR_8 = FUNC_7(VAR_6->atse_miibus);

 VAR_6->atse_flags &= ~VAR_0;
 FUNC_8(VAR_8);

 VAR_7->if_drv_flags |= VAR_3;
 VAR_7->if_drv_flags &= ~VAR_2;

 FUNC_6(&VAR_6->atse_tick, VAR_5, VAR_4, VAR_6);
}
