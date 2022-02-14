
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct stge_rfd* stge_rx_ring; } ;
struct stge_softc {TYPE_1__ sc_rdata; } ;
struct stge_rfd {scalar_t__ rfd_status; } ;



__attribute__((used)) static __inline void
FUNC_0(struct stge_softc *VAR_0, int VAR_1)
{
 struct stge_rfd *VAR_2;

 VAR_2 = &VAR_0->sc_rdata.stge_rx_ring[VAR_1];
 VAR_2->rfd_status = 0;
}
