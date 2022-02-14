
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int bge_tx_ring_map; int bge_tx_ring_tag; } ;
struct bge_softc {scalar_t__ bge_chiprev; int bge_timer; int bge_tx_prodidx; TYPE_1__ bge_cdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bge_softc*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bge_softc *VAR_4, uint32_t VAR_5)
{

 FUNC_1(VAR_4->bge_cdata.bge_tx_ring_tag,
     VAR_4->bge_cdata.bge_tx_ring_map, VAR_3);

 FUNC_0(VAR_4, VAR_1, VAR_5);

 if (VAR_4->bge_chiprev == VAR_0)
  FUNC_0(VAR_4, VAR_1, VAR_5);

 VAR_4->bge_tx_prodidx = VAR_5;


 VAR_4->bge_timer = VAR_2;
}
