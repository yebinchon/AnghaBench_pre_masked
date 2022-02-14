
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct netif_tx_response {int id; scalar_t__ status; } ;
struct netif_tx_request {int size; int id; void* flags; } ;
struct TYPE_12__ {unsigned int req_prod_pvt; unsigned int rsp_cons; } ;
struct TYPE_11__ {unsigned int rsp_prod_pvt; unsigned int req_cons; } ;
struct TYPE_10__ {TYPE_5__ txf; TYPE_3__ txb; TYPE_1__* txs; } ;
struct TYPE_9__ {unsigned int req_prod; unsigned int req_event; unsigned int rsp_prod; unsigned int rsp_event; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 struct netif_tx_request* FUNC_0 (TYPE_5__*,unsigned int) ;
 struct netif_tx_response* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 unsigned int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct xnb_pkt*,TYPE_3__*,unsigned int) ;
 int FUNC_6 (struct xnb_pkt*,TYPE_3__*,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(char *VAR_3, size_t VAR_4)
{
 struct xnb_pkt VAR_5;
 int VAR_6;
 struct netif_tx_request *VAR_7;
 struct netif_tx_response *VAR_8;
 unsigned int VAR_9;





 VAR_9 = FUNC_3(&VAR_2.txf);
 VAR_2.txf.req_prod_pvt = VAR_9 - 2;
 VAR_2.txf.rsp_cons = VAR_9 - 2;
 VAR_2.txs->req_prod = VAR_9 - 2;
 VAR_2.txs->req_event = VAR_9 - 1;
 VAR_2.txs->rsp_prod = VAR_9 - 2;
 VAR_2.txs->rsp_event = VAR_9 - 1;
 VAR_2.txb.rsp_prod_pvt = VAR_9 - 2;
 VAR_2.txb.req_cons = VAR_9 - 2;

 VAR_7 = FUNC_0(&VAR_2.txf,
     VAR_2.txf.req_prod_pvt);
 VAR_7->flags = VAR_1;
 VAR_7->size = 550;
 VAR_7->id = 1;
 VAR_2.txf.req_prod_pvt++;

 VAR_7 = FUNC_0(&VAR_2.txf,
     VAR_2.txf.req_prod_pvt);
 VAR_7->flags = VAR_1;
 VAR_7->size = 100;
 VAR_7->id = 2;
 VAR_2.txf.req_prod_pvt++;

 VAR_7 = FUNC_0(&VAR_2.txf,
     VAR_2.txf.req_prod_pvt);
 VAR_7->flags = 0;
 VAR_7->size = 50;
 VAR_7->id = 3;
 VAR_2.txf.req_prod_pvt++;

 FUNC_2(&VAR_2.txf);

 VAR_6 = FUNC_5(&VAR_5, &VAR_2.txb,
                             VAR_2.txb.req_cons);

 FUNC_6(&VAR_5, &VAR_2.txb, 0);

 FUNC_4(
     VAR_2.txb.rsp_prod_pvt == VAR_2.txs->req_prod);
 VAR_8 = FUNC_1(&VAR_2.txb,
     VAR_2.txf.rsp_cons + 2);
 FUNC_4(VAR_8->id == VAR_7->id);
 FUNC_4(VAR_8->status == VAR_0);
}
