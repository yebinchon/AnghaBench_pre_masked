
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rt_softc {int * tx_ctx_idx; int * tx_max_cnt; TYPE_1__* tx_ring; int * tx_base_ptr; int pdma_glo_cfg; int tx_coherent_interrupts; } ;
struct TYPE_2__ {int desc_phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;
 int FUNC_1 (struct rt_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rt_softc*,int ,int) ;
 int FUNC_3 (struct rt_softc*,TYPE_1__*) ;
 int FUNC_4 (struct rt_softc*) ;

__attribute__((used)) static void
FUNC_5(struct rt_softc *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_5, VAR_2, "Tx coherent interrupt\n");

 VAR_5->tx_coherent_interrupts++;


 VAR_6 = FUNC_1(VAR_5, VAR_5->pdma_glo_cfg);
 VAR_6 &= ~(VAR_1 | VAR_0);
 FUNC_2(VAR_5, VAR_5->pdma_glo_cfg, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_3(VAR_5, &VAR_5->tx_ring[VAR_7]);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_2(VAR_5, VAR_5->tx_base_ptr[VAR_7],
   VAR_5->tx_ring[VAR_7].desc_phys_addr);
  FUNC_2(VAR_5, VAR_5->tx_max_cnt[VAR_7],
   VAR_4);
  FUNC_2(VAR_5, VAR_5->tx_ctx_idx[VAR_7], 0);
 }

 FUNC_4(VAR_5);
}
