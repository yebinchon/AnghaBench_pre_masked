
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vge_rx_commit; struct vge_rxdesc* vge_rxdesc; } ;
struct vge_softc {TYPE_2__ vge_cdata; } ;
struct vge_rxdesc {struct vge_rxdesc* rxd_prev; TYPE_1__* rx_desc; } ;
struct TYPE_3__ {scalar_t__ vge_sts; scalar_t__ vge_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct vge_softc *VAR_2, int VAR_3)
{
 struct vge_rxdesc *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_2->vge_cdata.vge_rxdesc[VAR_3];
 VAR_4->rx_desc->vge_sts = 0;
 VAR_4->rx_desc->vge_ctl = 0;
 if ((VAR_3 % VAR_1) == (VAR_1 - 1)) {
  for (VAR_5 = VAR_1; VAR_5 > 0; VAR_5--) {
   VAR_4->rx_desc->vge_sts = FUNC_0(VAR_0);
   VAR_4 = VAR_4->rxd_prev;
  }
  VAR_2->vge_cdata.vge_rx_commit += VAR_1;
 }
}
