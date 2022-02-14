
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int last_tail; } ;
struct mgb_softc {TYPE_1__ rx_ring_data; } ;
typedef int qidx_t ;


 int FUNC_0 (struct mgb_softc*,int ,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, uint16_t VAR_1, uint8_t VAR_2, qidx_t VAR_3)
{
 struct mgb_softc *VAR_4;

 VAR_4 = VAR_0;

 FUNC_1(VAR_1 == 0, ("tried to flush RX Channel %d.\n", VAR_1));
 VAR_4->rx_ring_data.last_tail = VAR_3;
 FUNC_0(VAR_4, FUNC_2(VAR_1), VAR_4->rx_ring_data.last_tail);
 return;
}
