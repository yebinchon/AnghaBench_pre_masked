
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bge_tx_ring_map; int bge_tx_ring_tag; } ;
struct TYPE_3__ {int bge_tx_ring; } ;
struct bge_softc {scalar_t__ bge_chiprev; scalar_t__ bge_tx_prodidx; TYPE_2__ bge_cdata; TYPE_1__ bge_ldata; scalar_t__ bge_tx_saved_considx; scalar_t__ bge_txcnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bge_softc*,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct bge_softc *VAR_5)
{
 VAR_5->bge_txcnt = 0;
 VAR_5->bge_tx_saved_considx = 0;

 FUNC_2(VAR_5->bge_ldata.bge_tx_ring, VAR_3);
 FUNC_1(VAR_5->bge_cdata.bge_tx_ring_tag,
     VAR_5->bge_cdata.bge_tx_ring_map, VAR_4);


 VAR_5->bge_tx_prodidx = 0;
 FUNC_0(VAR_5, VAR_1, VAR_5->bge_tx_prodidx);


 if (VAR_5->bge_chiprev == VAR_0)
  FUNC_0(VAR_5, VAR_1, VAR_5->bge_tx_prodidx);


 FUNC_0(VAR_5, VAR_2, 0);

 if (VAR_5->bge_chiprev == VAR_0)
  FUNC_0(VAR_5, VAR_2, 0);

 return (0);
}
