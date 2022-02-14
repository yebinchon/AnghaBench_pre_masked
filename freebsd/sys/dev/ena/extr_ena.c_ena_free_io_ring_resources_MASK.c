
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {int ring_mtx; int br; int rx_stats; int tx_stats; } ;
struct ena_adapter {struct ena_ring* rx_ring; struct ena_ring* tx_ring; } ;
typedef int counter_u64_t ;


 int FUNC_0 (struct ena_ring*) ;
 int FUNC_1 (struct ena_ring*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ena_adapter *VAR_1, unsigned int VAR_2)
{
 struct ena_ring *VAR_3 = &VAR_1->tx_ring[VAR_2];
 struct ena_ring *VAR_4 = &VAR_1->rx_ring[VAR_2];

 FUNC_3((counter_u64_t *)&VAR_3->tx_stats,
     sizeof(VAR_3->tx_stats));
 FUNC_3((counter_u64_t *)&VAR_4->rx_stats,
     sizeof(VAR_4->rx_stats));

 FUNC_0(VAR_3);
 FUNC_2(VAR_3->br, VAR_0);
 FUNC_1(VAR_3);

 FUNC_4(&VAR_3->ring_mtx);
}
