
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_softc {int * rx_cp_rings; int * rx_rings; int * ag_rings; int * grp_info; int hw_rx_port_stats; int hw_tx_port_stats; int rx_stats; scalar_t__ ntxqsets; int * tx_cp_rings; int * tx_rings; int tx_stats; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct bnxt_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_1)
{
 struct bnxt_softc *VAR_2 = FUNC_2(VAR_1);


 FUNC_1(&VAR_2->tx_stats);
 FUNC_0(VAR_2->tx_rings, VAR_0);
 VAR_2->tx_rings = ((void*)0);
 FUNC_0(VAR_2->tx_cp_rings, VAR_0);
 VAR_2->tx_cp_rings = ((void*)0);
 VAR_2->ntxqsets = 0;


 FUNC_1(&VAR_2->rx_stats);
 FUNC_1(&VAR_2->hw_tx_port_stats);
 FUNC_1(&VAR_2->hw_rx_port_stats);
 FUNC_0(VAR_2->grp_info, VAR_0);
 FUNC_0(VAR_2->ag_rings, VAR_0);
 FUNC_0(VAR_2->rx_rings, VAR_0);
 FUNC_0(VAR_2->rx_cp_rings, VAR_0);
}
