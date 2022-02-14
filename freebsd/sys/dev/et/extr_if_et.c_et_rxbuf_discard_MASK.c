
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct et_rxdesc {int rd_ctrl; } ;
struct et_rxbuf_data {TYPE_1__* rbd_ring; } ;
struct TYPE_2__ {int rr_dmap; int rr_dtag; struct et_rxdesc* rr_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct et_rxbuf_data *VAR_2, int VAR_3)
{
 struct et_rxdesc *VAR_4;

 VAR_4 = &VAR_2->rbd_ring->rr_desc[VAR_3];
 VAR_4->rd_ctrl = FUNC_1(VAR_3 & VAR_1);
 FUNC_0(VAR_2->rbd_ring->rr_dtag, VAR_2->rbd_ring->rr_dmap,
     VAR_0);
}
