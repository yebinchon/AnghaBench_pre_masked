
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ** bge_rx_jumbo_seglen; } ;
struct TYPE_3__ {struct bge_extrx_bd* bge_rx_jumbo_ring; } ;
struct bge_softc {size_t bge_jumbo; TYPE_2__ bge_cdata; TYPE_1__ bge_ldata; } ;
struct bge_extrx_bd {int bge_flags; int bge_idx; int bge_len3; int bge_len2; int bge_len1; int bge_len0; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline void
FUNC_1(struct bge_softc *VAR_3, int VAR_4)
{
 struct bge_extrx_bd *VAR_5;

 VAR_5 = &VAR_3->bge_ldata.bge_rx_jumbo_ring[VAR_3->bge_jumbo];
 VAR_5->bge_flags = VAR_2 | VAR_1;
 VAR_5->bge_len0 = VAR_3->bge_cdata.bge_rx_jumbo_seglen[VAR_4][0];
 VAR_5->bge_len1 = VAR_3->bge_cdata.bge_rx_jumbo_seglen[VAR_4][1];
 VAR_5->bge_len2 = VAR_3->bge_cdata.bge_rx_jumbo_seglen[VAR_4][2];
 VAR_5->bge_len3 = VAR_3->bge_cdata.bge_rx_jumbo_seglen[VAR_4][3];
 VAR_5->bge_idx = VAR_4;
 FUNC_0(VAR_3->bge_jumbo, VAR_0);
}
