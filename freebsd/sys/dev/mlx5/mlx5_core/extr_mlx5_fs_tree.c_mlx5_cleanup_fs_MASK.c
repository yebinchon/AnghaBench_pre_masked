
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int esw_ingress_root_ns; int esw_egress_root_ns; int fdb_root_ns; int sniffer_tx_root_ns; int sniffer_rx_root_ns; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;

void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_0->sniffer_rx_root_ns);
 FUNC_1(VAR_0, VAR_0->sniffer_tx_root_ns);
 FUNC_1(VAR_0, VAR_0->fdb_root_ns);
 FUNC_1(VAR_0, VAR_0->esw_egress_root_ns);
 FUNC_1(VAR_0, VAR_0->esw_ingress_root_ns);
}
