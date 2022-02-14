
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xnb_pkt {int size; int car_size; scalar_t__ flags; int list_len; scalar_t__ car; scalar_t__ cdr; } ;
struct netif_tx_request {int size; void* flags; } ;
struct TYPE_6__ {scalar_t__ req_prod_pvt; int req_cons; } ;
struct TYPE_5__ {TYPE_2__ txb; TYPE_2__ txf; } ;
typedef scalar_t__ RING_IDX ;


 void* VAR_0 ;
 struct netif_tx_request* FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xnb_pkt*) ;
 int FUNC_4 (struct xnb_pkt*,TYPE_2__*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(char *VAR_2, size_t VAR_3)
{
 struct xnb_pkt VAR_4;
 int VAR_5;
 struct netif_tx_request *VAR_6;
 RING_IDX VAR_7 = VAR_1.txf.req_prod_pvt;

 VAR_6 = FUNC_0(&VAR_1.txf,
     VAR_1.txf.req_prod_pvt);
 VAR_6->flags = VAR_0;
 VAR_6->size = 200;
 VAR_1.txf.req_prod_pvt++;

 VAR_6 = FUNC_0(&VAR_1.txf,
     VAR_1.txf.req_prod_pvt);
 VAR_6->flags = VAR_0;
 VAR_6->size = 40;
 VAR_1.txf.req_prod_pvt++;

 VAR_6 = FUNC_0(&VAR_1.txf,
     VAR_1.txf.req_prod_pvt);
 VAR_6->flags = 0;
 VAR_6->size = 50;
 VAR_1.txf.req_prod_pvt++;

 FUNC_1(&VAR_1.txf);

 VAR_5 = FUNC_4(&VAR_4, &VAR_1.txb,
                             VAR_1.txb.req_cons);
 FUNC_2(VAR_5 == 3);
 FUNC_2(VAR_4.size == 200);
 FUNC_2(VAR_4.car_size == 110);
 FUNC_2(VAR_4.flags == 0);
 FUNC_2(FUNC_3(&VAR_4));
 FUNC_2(VAR_4.list_len == 3);
 FUNC_2(VAR_4.car == VAR_7);
 FUNC_2(VAR_4.cdr == VAR_7 + 1);
 FUNC_2(FUNC_0(&VAR_1.txb, VAR_4.cdr + 1) == VAR_6);
}
