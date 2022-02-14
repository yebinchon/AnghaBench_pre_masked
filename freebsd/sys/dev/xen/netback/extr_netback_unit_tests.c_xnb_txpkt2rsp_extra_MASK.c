
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct xnb_pkt {int dummy; } ;
struct netif_tx_response {int id; scalar_t__ status; } ;
struct netif_tx_request {int size; int id; int flags; } ;
struct TYPE_10__ {scalar_t__ flags; int type; } ;
typedef TYPE_2__ netif_extra_info_t ;
struct TYPE_13__ {scalar_t__ rsp_cons; int req_prod_pvt; } ;
struct TYPE_12__ {scalar_t__ rsp_prod_pvt; int req_cons; } ;
struct TYPE_11__ {TYPE_6__ txf; TYPE_4__ txb; TYPE_1__* txs; } ;
struct TYPE_9__ {scalar_t__ req_prod; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct netif_tx_request* FUNC_0 (TYPE_6__*,int ) ;
 struct netif_tx_response* FUNC_1 (TYPE_4__*,scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct xnb_pkt*,TYPE_4__*,int ) ;
 int FUNC_5 (struct xnb_pkt*,TYPE_4__*,int ) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(char *VAR_5, size_t VAR_6)
{
 uint16_t VAR_7;
 struct xnb_pkt VAR_8;
 struct netif_tx_request *VAR_9;
 netif_extra_info_t *VAR_10;
 struct netif_tx_response *VAR_11;

 VAR_9 = FUNC_0(&VAR_4.txf,
     VAR_4.txf.req_prod_pvt);
 VAR_9->size = 1000;
 VAR_9->flags = VAR_2;
 VAR_9->id = 69;
 VAR_4.txf.req_prod_pvt++;

 VAR_10 = (netif_extra_info_t*) FUNC_0(&VAR_4.txf,
     VAR_4.txf.req_prod_pvt);
 VAR_10->type = VAR_3;
 VAR_10->flags = 0;
 VAR_4.txf.req_prod_pvt++;

 FUNC_2(&VAR_4.txf);

 VAR_7 = FUNC_4(&VAR_8, &VAR_4.txb,
                             VAR_4.txb.req_cons);
 VAR_4.txb.req_cons += VAR_7;

 FUNC_5(&VAR_8, &VAR_4.txb, 0);

 FUNC_3(
     VAR_4.txb.rsp_prod_pvt == VAR_4.txs->req_prod);

 VAR_11 = FUNC_1(&VAR_4.txb, VAR_4.txf.rsp_cons);
 FUNC_3(VAR_11->id == VAR_9->id);
 FUNC_3(VAR_11->status == VAR_1);

 VAR_11 = FUNC_1(&VAR_4.txb,
     VAR_4.txf.rsp_cons + 1);
 FUNC_3(VAR_11->status == VAR_0);
}
