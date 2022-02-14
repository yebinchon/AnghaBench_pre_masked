
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mgb_ring_data {scalar_t__* head_wb; } ;
struct mgb_softc {int ctx; struct mgb_ring_data rx_ring_data; } ;
typedef scalar_t__ qidx_t ;
typedef int if_softc_ctx_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, uint16_t VAR_1, qidx_t VAR_2, qidx_t VAR_3)
{
 struct mgb_softc *VAR_4;
 if_softc_ctx_t VAR_5;
 struct mgb_ring_data *VAR_6;
 int VAR_7 = 0;

 VAR_4 = VAR_0;
 FUNC_0(VAR_1 == 0, ("tried to check availability in RX Channel %d.\n",
     VAR_1));

 VAR_6 = &VAR_4->rx_ring_data;
 VAR_5 = FUNC_2(VAR_4->ctx);
 for (; VAR_2 != *(VAR_6->head_wb);
     VAR_2 = FUNC_1(VAR_2)) {
  VAR_7++;

  if (VAR_7 == VAR_3)
   break;
 }
 return (VAR_7);
}
