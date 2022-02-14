
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int tx_ring_data; int rx_ring_data; } ;
struct mgb_ring_data {int dummy; } ;
typedef int if_ctx_t ;


 struct mgb_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_0)
{
 struct mgb_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->rx_ring_data, 0, sizeof(struct mgb_ring_data));
 FUNC_1(&VAR_1->tx_ring_data, 0, sizeof(struct mgb_ring_data));
}
