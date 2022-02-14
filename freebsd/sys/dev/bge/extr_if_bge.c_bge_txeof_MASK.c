
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct bge_tx_bd {int bge_flags; } ;
struct TYPE_4__ {int ** bge_tx_chain; int * bge_tx_dmamap; int bge_tx_mtag; int bge_tx_ring_map; int bge_tx_ring_tag; } ;
struct TYPE_3__ {struct bge_tx_bd* bge_tx_ring; } ;
struct bge_softc {scalar_t__ bge_tx_saved_considx; scalar_t__ bge_txcnt; scalar_t__ bge_timer; TYPE_2__ bge_cdata; TYPE_1__ bge_ldata; int bge_ifp; } ;
typedef int if_t ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bge_softc *VAR_5, uint16_t VAR_6)
{
 struct bge_tx_bd *VAR_7;
 if_t VAR_8;

 FUNC_1(VAR_5);


 if (VAR_5->bge_tx_saved_considx == VAR_6)
  return;

 VAR_8 = VAR_5->bge_ifp;

 FUNC_2(VAR_5->bge_cdata.bge_tx_ring_tag,
     VAR_5->bge_cdata.bge_tx_ring_map, VAR_2);




 while (VAR_5->bge_tx_saved_considx != VAR_6) {
  uint32_t VAR_9;

  VAR_9 = VAR_5->bge_tx_saved_considx;
  VAR_7 = &VAR_5->bge_ldata.bge_tx_ring[VAR_9];
  if (VAR_7->bge_flags & VAR_0)
   FUNC_4(VAR_8, VAR_3, 1);
  if (VAR_5->bge_cdata.bge_tx_chain[VAR_9] != ((void*)0)) {
   FUNC_2(VAR_5->bge_cdata.bge_tx_mtag,
       VAR_5->bge_cdata.bge_tx_dmamap[VAR_9],
       VAR_2);
   FUNC_3(VAR_5->bge_cdata.bge_tx_mtag,
       VAR_5->bge_cdata.bge_tx_dmamap[VAR_9]);
   FUNC_6(VAR_5->bge_cdata.bge_tx_chain[VAR_9]);
   VAR_5->bge_cdata.bge_tx_chain[VAR_9] = ((void*)0);
  }
  VAR_5->bge_txcnt--;
  FUNC_0(VAR_5->bge_tx_saved_considx, VAR_1);
 }

 FUNC_5(VAR_8, 0, VAR_4);
 if (VAR_5->bge_txcnt == 0)
  VAR_5->bge_timer = 0;
}
