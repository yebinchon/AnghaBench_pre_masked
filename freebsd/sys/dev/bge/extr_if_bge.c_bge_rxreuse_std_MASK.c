
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * bge_rx_std_seglen; } ;
struct TYPE_3__ {struct bge_rx_bd* bge_rx_std_ring; } ;
struct bge_softc {size_t bge_std; TYPE_2__ bge_cdata; TYPE_1__ bge_ldata; } ;
struct bge_rx_bd {int bge_idx; int bge_len; int bge_flags; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline void
FUNC_1(struct bge_softc *VAR_2, int VAR_3)
{
 struct bge_rx_bd *VAR_4;

 VAR_4 = &VAR_2->bge_ldata.bge_rx_std_ring[VAR_2->bge_std];
 VAR_4->bge_flags = VAR_0;
 VAR_4->bge_len = VAR_2->bge_cdata.bge_rx_std_seglen[VAR_3];
 VAR_4->bge_idx = VAR_3;
 FUNC_0(VAR_2->bge_std, VAR_1);
}
