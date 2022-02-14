
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * bge_rx_jumbo_ring; } ;
struct TYPE_3__ {int ** bge_rx_jumbo_chain; int * bge_rx_jumbo_dmamap; int bge_mtag_jumbo; } ;
struct bge_softc {TYPE_2__ bge_ldata; TYPE_1__ bge_cdata; } ;
struct bge_extrx_bd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bge_softc *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->bge_cdata.bge_rx_jumbo_chain[VAR_3] != ((void*)0)) {
   FUNC_0(VAR_2->bge_cdata.bge_mtag_jumbo,
       VAR_2->bge_cdata.bge_rx_jumbo_dmamap[VAR_3],
       VAR_1);
   FUNC_1(VAR_2->bge_cdata.bge_mtag_jumbo,
       VAR_2->bge_cdata.bge_rx_jumbo_dmamap[VAR_3]);
   FUNC_3(VAR_2->bge_cdata.bge_rx_jumbo_chain[VAR_3]);
   VAR_2->bge_cdata.bge_rx_jumbo_chain[VAR_3] = ((void*)0);
  }
  FUNC_2((char *)&VAR_2->bge_ldata.bge_rx_jumbo_ring[VAR_3],
      sizeof(struct bge_extrx_bd));
 }
}
