
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_rx_data {int data; } ;
struct qlnx_rx_queue {size_t sw_rx_cons; size_t sw_rx_prod; struct sw_rx_data* sw_rx_ring; int rx_bd_ring; } ;
struct eth_rx_bd {int dummy; } ;


 int VAR_0 ;
 struct eth_rx_bd* FUNC_0 (int *) ;
 struct eth_rx_bd* FUNC_1 (int *) ;
 int FUNC_2 (struct eth_rx_bd*,struct eth_rx_bd*,int) ;

__attribute__((used)) static void
FUNC_3(struct qlnx_rx_queue *VAR_1)
{
        struct eth_rx_bd *VAR_2 =
     FUNC_0(&VAR_1->rx_bd_ring);
        struct eth_rx_bd *VAR_3 =
     FUNC_1(&VAR_1->rx_bd_ring);
        struct sw_rx_data *VAR_4 =
     &VAR_1->sw_rx_ring[VAR_1->sw_rx_cons];
        struct sw_rx_data *VAR_5 =
     &VAR_1->sw_rx_ring[VAR_1->sw_rx_prod];

        VAR_5->data = VAR_4->data;
        FUNC_2(VAR_3, VAR_2, sizeof(struct eth_rx_bd));

        VAR_1->sw_rx_cons = (VAR_1->sw_rx_cons + 1) & (VAR_0 - 1);
        VAR_1->sw_rx_prod = (VAR_1->sw_rx_prod + 1) & (VAR_0 - 1);

 return;
}
