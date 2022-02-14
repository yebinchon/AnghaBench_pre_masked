
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_act_vq_pairs; int vtnet_tick_ch; int * vtnet_txqs; struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct vtnet_softc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct vtnet_softc *VAR_3;
 struct ifnet *VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = VAR_2;
 VAR_4 = VAR_3->vtnet_ifp;
 VAR_6 = 0;

 FUNC_0(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_3->vtnet_act_vq_pairs; VAR_5++)
  VAR_6 |= FUNC_3(&VAR_3->vtnet_txqs[VAR_5]);

 if (VAR_6 != 0) {
  VAR_4->if_drv_flags &= ~VAR_0;
  FUNC_2(VAR_3);
 } else
  FUNC_1(&VAR_3->vtnet_tick_ch, VAR_1);
}
