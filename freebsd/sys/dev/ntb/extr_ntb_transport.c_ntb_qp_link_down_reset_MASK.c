
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int link_is_up; unsigned long long qp_num; scalar_t__ rx_err_ver; scalar_t__ rx_err_oflow; scalar_t__ tx_err_no_buf; scalar_t__ rx_err_no_buf; scalar_t__ tx_ring_full; scalar_t__ rx_ring_empty; scalar_t__ rx_pkts; scalar_t__ tx_pkts; scalar_t__ rx_bytes; scalar_t__ tx_bytes; scalar_t__ rx_index; scalar_t__ tx_index; int dev; } ;


 int FUNC_0 (int ,unsigned long long) ;

__attribute__((used)) static void
FUNC_1(struct ntb_transport_qp *VAR_0)
{

 VAR_0->link_is_up = 0;
 FUNC_0(VAR_0->dev, 1ull << VAR_0->qp_num);

 VAR_0->tx_index = VAR_0->rx_index = 0;
 VAR_0->tx_bytes = VAR_0->rx_bytes = 0;
 VAR_0->tx_pkts = VAR_0->rx_pkts = 0;

 VAR_0->rx_ring_empty = 0;
 VAR_0->tx_ring_full = 0;

 VAR_0->rx_err_no_buf = VAR_0->tx_err_no_buf = 0;
 VAR_0->rx_err_oflow = VAR_0->rx_err_ver = 0;
}
