
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xnb_pkt {int list_len; int cdr; } ;
struct netif_tx_request {int size; void* flags; } ;
struct TYPE_9__ {unsigned int req_prod_pvt; unsigned int rsp_cons; unsigned int rsp_prod_pvt; unsigned int req_cons; } ;
struct TYPE_8__ {TYPE_3__ txb; TYPE_3__ txf; TYPE_1__* txs; } ;
struct TYPE_7__ {unsigned int req_prod; unsigned int req_event; unsigned int rsp_prod; unsigned int rsp_event; } ;


 void* VAR_0 ;
 struct netif_tx_request* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 unsigned int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct xnb_pkt*) ;
 int FUNC_5 (struct xnb_pkt*,TYPE_3__*,unsigned int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_6(char *VAR_2, size_t VAR_3)
{
 struct xnb_pkt VAR_4;
 int VAR_5;
 struct netif_tx_request *VAR_6;
 unsigned int VAR_7;





 VAR_7 = FUNC_2(&VAR_1.txf);
 VAR_1.txf.req_prod_pvt = VAR_7 - 2;
 VAR_1.txf.rsp_cons = VAR_7 - 2;
 VAR_1.txs->req_prod = VAR_7 - 2;
 VAR_1.txs->req_event = VAR_7 - 1;
 VAR_1.txs->rsp_prod = VAR_7 - 2;
 VAR_1.txs->rsp_event = VAR_7 - 1;
 VAR_1.txb.rsp_prod_pvt = VAR_7 - 2;
 VAR_1.txb.req_cons = VAR_7 - 2;

 VAR_6 = FUNC_0(&VAR_1.txf,
     VAR_1.txf.req_prod_pvt);
 VAR_6->flags = VAR_0;
 VAR_6->size = 550;
 VAR_1.txf.req_prod_pvt++;

 VAR_6 = FUNC_0(&VAR_1.txf,
     VAR_1.txf.req_prod_pvt);
 VAR_6->flags = VAR_0;
 VAR_6->size = 100;
 VAR_1.txf.req_prod_pvt++;

 VAR_6 = FUNC_0(&VAR_1.txf,
     VAR_1.txf.req_prod_pvt);
 VAR_6->flags = 0;
 VAR_6->size = 50;
 VAR_1.txf.req_prod_pvt++;

 FUNC_1(&VAR_1.txf);

 VAR_5 = FUNC_5(&VAR_4, &VAR_1.txb,
                             VAR_1.txb.req_cons);
 FUNC_3(VAR_5 == 3);
 FUNC_3(FUNC_4(&VAR_4));
 FUNC_3(VAR_4.list_len == 3);
 FUNC_3(FUNC_0(&VAR_1.txb, VAR_4.cdr + 1) == VAR_6);
}
