
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct xnb_pkt {int dummy; } ;
struct netif_tx_request {size_t size; int flags; } ;
struct TYPE_7__ {int req_prod_pvt; } ;
struct TYPE_6__ {int req_cons; } ;
struct TYPE_5__ {TYPE_2__ txb; TYPE_3__ txf; } ;


 struct netif_tx_request* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct xnb_pkt*,TYPE_2__*,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct xnb_pkt *VAR_1, size_t VAR_2, uint16_t VAR_3)
{
 struct netif_tx_request *VAR_4;

 VAR_4 = FUNC_0(&VAR_0.txf,
     VAR_0.txf.req_prod_pvt);
 VAR_4->flags = VAR_3;
 VAR_4->size = VAR_2;
 VAR_0.txf.req_prod_pvt++;

 FUNC_1(&VAR_0.txf);

 return FUNC_2(VAR_1, &VAR_0.txb,
                             VAR_0.txb.req_cons);
}
