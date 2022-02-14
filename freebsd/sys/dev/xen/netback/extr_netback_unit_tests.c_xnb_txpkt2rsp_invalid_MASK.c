
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
struct TYPE_10__ {int type; scalar_t__ flags; } ;
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
 int FUNC_3 (int) ;
 int FUNC_4 (struct xnb_pkt*) ;
 scalar_t__ FUNC_5 (struct xnb_pkt*,TYPE_4__*,int ) ;
 int FUNC_6 (struct xnb_pkt*,TYPE_4__*,int ) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(char *VAR_4, size_t VAR_5)
{
 uint16_t VAR_6;
 struct xnb_pkt VAR_7;
 struct netif_tx_request *VAR_8;
 netif_extra_info_t *VAR_9;
 struct netif_tx_response *VAR_10;

 VAR_8 = FUNC_0(&VAR_3.txf,
     VAR_3.txf.req_prod_pvt);
 VAR_8->size = 1000;
 VAR_8->flags = VAR_2;
 VAR_8->id = 69;
 VAR_3.txf.req_prod_pvt++;

 VAR_9 = (netif_extra_info_t*) FUNC_0(&VAR_3.txf,
     VAR_3.txf.req_prod_pvt);
 VAR_9->type = 0xFF;
 VAR_9->flags = 0;
 VAR_3.txf.req_prod_pvt++;

 FUNC_2(&VAR_3.txf);

 VAR_6 = FUNC_5(&VAR_7, &VAR_3.txb,
                             VAR_3.txb.req_cons);
 VAR_3.txb.req_cons += VAR_6;
 FUNC_3(! FUNC_4(&VAR_7));

 FUNC_6(&VAR_7, &VAR_3.txb, 0);

 FUNC_3(
     VAR_3.txb.rsp_prod_pvt == VAR_3.txs->req_prod);

 VAR_10 = FUNC_1(&VAR_3.txb, VAR_3.txf.rsp_cons);
 FUNC_3(VAR_10->id == VAR_8->id);
 FUNC_3(VAR_10->status == VAR_0);

 VAR_10 = FUNC_1(&VAR_3.txb,
     VAR_3.txf.rsp_cons + 1);
 FUNC_3(VAR_10->status == VAR_1);
}
