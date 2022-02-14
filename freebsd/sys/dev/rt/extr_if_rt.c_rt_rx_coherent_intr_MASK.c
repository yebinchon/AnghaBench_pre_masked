
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rt_softc {int rx_ring_count; int * rx_calc_idx; int * rx_max_cnt; TYPE_1__* rx_ring; int * rx_base_ptr; int pdma_glo_cfg; int rx_coherent_interrupts; } ;
struct TYPE_2__ {int desc_phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;
 int FUNC_1 (struct rt_softc*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct rt_softc*,int ,int) ;
 int FUNC_3 (struct rt_softc*,TYPE_1__*) ;
 int FUNC_4 (struct rt_softc*) ;

__attribute__((used)) static void
FUNC_5(struct rt_softc *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_3, VAR_1, "Rx coherent interrupt\n");

 VAR_3->rx_coherent_interrupts++;


 VAR_4 = FUNC_1(VAR_3, VAR_3->pdma_glo_cfg);
 VAR_4 &= ~(VAR_0);
 FUNC_2(VAR_3, VAR_3->pdma_glo_cfg, VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_count; VAR_5++)
  FUNC_3(VAR_3, &VAR_3->rx_ring[VAR_5]);

 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_count; VAR_5++) {
  FUNC_2(VAR_3, VAR_3->rx_base_ptr[VAR_5],
   VAR_3->rx_ring[VAR_5].desc_phys_addr);
  FUNC_2(VAR_3, VAR_3->rx_max_cnt[VAR_5],
   VAR_2);
  FUNC_2(VAR_3, VAR_3->rx_calc_idx[VAR_5],
   VAR_2 - 1);
 }

 FUNC_4(VAR_3);
}
