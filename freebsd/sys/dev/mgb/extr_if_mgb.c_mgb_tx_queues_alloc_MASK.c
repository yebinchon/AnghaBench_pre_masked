
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef int uint32_t ;
struct mgb_ring_data {void* head_wb_bus_addr; int * head_wb; void* ring_bus_addr; struct mgb_ring_desc* ring; } ;
struct mgb_softc {struct mgb_ring_data tx_ring_data; } ;
struct mgb_ring_desc {int dummy; } ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int,char*) ;
 struct mgb_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_0, caddr_t *VAR_1, uint64_t *VAR_2, int VAR_3,
    int VAR_4)
{
 struct mgb_softc *VAR_5;
 struct mgb_ring_data *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_0);
 FUNC_0(VAR_4 == 1, ("ntxqsets = %d", VAR_4));
 VAR_6 = &VAR_5->tx_ring_data;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  FUNC_0(VAR_3 == 2, ("ntxqs = %d", VAR_3));

  VAR_6->ring = (struct mgb_ring_desc *) VAR_1[VAR_7 * VAR_3 + 0];
  VAR_6->ring_bus_addr = VAR_2[VAR_7 * VAR_3 + 0];


  VAR_6->head_wb = (uint32_t *) VAR_1[VAR_7 * VAR_3 + 1];
  VAR_6->head_wb_bus_addr = VAR_2[VAR_7 * VAR_3 + 1];
 }
 return 0;
}
