
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfe_softc {struct bfe_desc* bfe_rx_list; struct bfe_rx_data* bfe_rx_ring; } ;
struct bfe_rx_data {int bfe_ctrl; } ;
struct bfe_desc {int bfe_ctrl; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bfe_softc *VAR_0, int VAR_1)
{
 struct bfe_rx_data *VAR_2;
 struct bfe_desc *VAR_3;

 VAR_2 = &VAR_0->bfe_rx_ring[VAR_1];
 VAR_3 = &VAR_0->bfe_rx_list[VAR_1];
 VAR_3->bfe_ctrl = FUNC_0(VAR_2->bfe_ctrl);
}
