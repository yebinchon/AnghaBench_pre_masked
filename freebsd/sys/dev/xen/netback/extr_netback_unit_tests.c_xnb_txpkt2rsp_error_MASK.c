
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct xnb_pkt {int dummy; } ;
struct netif_tx_response {scalar_t__ id; scalar_t__ status; } ;
struct netif_tx_request {int size; scalar_t__ id; scalar_t__ flags; } ;
struct TYPE_11__ {int rsp_cons; int req_prod_pvt; } ;
struct TYPE_10__ {scalar_t__ rsp_prod_pvt; int req_cons; } ;
struct TYPE_9__ {TYPE_1__* txs; TYPE_3__ txb; TYPE_5__ txf; } ;
struct TYPE_8__ {scalar_t__ req_prod; } ;


 scalar_t__ VAR_0 ;
 struct netif_tx_request* FUNC_0 (TYPE_5__*,int ) ;
 struct netif_tx_response* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct xnb_pkt*,TYPE_3__*,int ) ;
 int FUNC_5 (struct xnb_pkt*,TYPE_3__*,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_6(char *VAR_2, size_t VAR_3)
{
 uint16_t VAR_4;
 struct xnb_pkt VAR_5;
 struct netif_tx_request *VAR_6;
 struct netif_tx_response *VAR_7;

 VAR_6 = FUNC_0(&VAR_1.txf,
     VAR_1.txf.req_prod_pvt);
 VAR_6->size = 1000;
 VAR_6->flags = 0;
 VAR_1.txf.req_prod_pvt++;

 FUNC_2(&VAR_1.txf);

 VAR_4 = FUNC_4(&VAR_5, &VAR_1.txb,
                             VAR_1.txb.req_cons);
 VAR_1.txb.req_cons += VAR_4;

 FUNC_5(&VAR_5, &VAR_1.txb, 1);
 VAR_7 = FUNC_1(&VAR_1.txb, VAR_1.txf.rsp_cons);

 FUNC_3(
     VAR_1.txb.rsp_prod_pvt == VAR_1.txs->req_prod);
 FUNC_3(VAR_7->id == VAR_6->id);
 FUNC_3(VAR_7->status == VAR_0);
}
