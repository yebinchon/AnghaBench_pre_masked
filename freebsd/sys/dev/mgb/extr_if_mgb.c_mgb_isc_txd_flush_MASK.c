
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mgb_ring_data {scalar_t__ last_tail; } ;
struct mgb_softc {struct mgb_ring_data tx_ring_data; } ;
typedef scalar_t__ qidx_t ;


 int FUNC_0 (struct mgb_softc*,int ,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, uint16_t VAR_1, qidx_t VAR_2)
{
 struct mgb_softc *VAR_3;
 struct mgb_ring_data *VAR_4;

 FUNC_1(VAR_1 == 0, ("tried to flush TX Channel %d.\n", VAR_1));
 VAR_3 = VAR_0;
 VAR_4 = &VAR_3->tx_ring_data;

 if (VAR_4->last_tail != VAR_2) {
  VAR_4->last_tail = VAR_2;
  FUNC_0(VAR_3, FUNC_2(VAR_1), VAR_4->last_tail);
 }
}
