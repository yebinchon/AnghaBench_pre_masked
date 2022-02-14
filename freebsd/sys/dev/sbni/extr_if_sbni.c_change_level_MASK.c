
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int rxl; } ;
struct sbni_softc {int delta_rxl; int cur_rxl_index; scalar_t__ cur_rxl_rcvd; scalar_t__ prev_rxl_rcvd; TYPE_1__ csr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct sbni_softc*,int ) ;
 int FUNC_1 (struct sbni_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct sbni_softc *VAR_3)
{
 if (VAR_3->delta_rxl == 0)
  return;

 if (VAR_3->cur_rxl_index == 0)
  VAR_3->delta_rxl = 1;
 else if (VAR_3->cur_rxl_index == 15)
  VAR_3->delta_rxl = -1;
 else if (VAR_3->cur_rxl_rcvd < VAR_3->prev_rxl_rcvd)
  VAR_3->delta_rxl = -VAR_3->delta_rxl;

 VAR_3->csr1.rxl = VAR_2[VAR_3->cur_rxl_index += VAR_3->delta_rxl];
 FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_1, *(u_char *)&VAR_3->csr1);

 VAR_3->prev_rxl_rcvd = VAR_3->cur_rxl_rcvd;
 VAR_3->cur_rxl_rcvd = 0;
}
