
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {struct nge_desc* nge_rx_ring; } ;
struct nge_softc {TYPE_1__ nge_rdata; } ;
struct nge_desc {scalar_t__ nge_extsts; int nge_cmdsts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static __inline void
FUNC_1(struct nge_softc *VAR_1, int VAR_2)
{
 struct nge_desc *VAR_3;

 VAR_3 = &VAR_1->nge_rdata.nge_rx_ring[VAR_2];
 VAR_3->nge_cmdsts = FUNC_0(VAR_0 - sizeof(uint64_t));
 VAR_3->nge_extsts = 0;
}
