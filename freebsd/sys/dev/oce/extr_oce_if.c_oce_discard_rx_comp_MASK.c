
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct oce_rq {int pending; TYPE_2__* ring; int tag; struct oce_packet_desc* pckts; int parent; } ;
struct oce_packet_desc {int * mbuf; int map; } ;
struct TYPE_4__ {size_t cidx; size_t pidx; } ;
struct TYPE_3__ {int dev; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct oce_rq *VAR_1, int VAR_2)
{
 uint32_t VAR_3 = 0;
 struct oce_packet_desc *VAR_4;
 POCE_SOFTC VAR_5 = (POCE_SOFTC) VAR_1->parent;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
                if (VAR_1->ring->cidx == VAR_1->ring->pidx) {
                        FUNC_3(VAR_5->dev,
                                "oce_discard_rx_comp: Invalid RX completion - Queue is empty\n");
                        return;
                }
                VAR_4 = &VAR_1->pckts[VAR_1->ring->cidx];
                FUNC_1(VAR_1->tag, VAR_4->map, VAR_0);
                FUNC_2(VAR_1->tag, VAR_4->map);
                if (VAR_4->mbuf != ((void*)0)) {
                        FUNC_4(VAR_4->mbuf);
                        VAR_4->mbuf = ((void*)0);
                }

  FUNC_0(VAR_1->ring, 1);
                VAR_1->pending--;
 }
}
