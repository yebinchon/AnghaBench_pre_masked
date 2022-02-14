
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* if_softc_ctx_t ;
typedef TYPE_2__* if_ctx_t ;
struct TYPE_4__ {scalar_t__ isc_max_frame_size; } ;
struct TYPE_5__ {scalar_t__ ifc_rx_mbuf_sz; TYPE_1__ ifc_softc_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(if_ctx_t VAR_2)
{
 if_softc_ctx_t VAR_3 = &VAR_2->ifc_softc_ctx;





 if (VAR_3->isc_max_frame_size <= VAR_0)
  VAR_2->ifc_rx_mbuf_sz = VAR_0;
 else
  VAR_2->ifc_rx_mbuf_sz = VAR_1;
}
