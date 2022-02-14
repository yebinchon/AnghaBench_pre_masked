
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int size; int type; } ;
struct TYPE_13__ {TYPE_3__ gso; } ;
struct TYPE_14__ {scalar_t__ flags; scalar_t__ type; TYPE_4__ u; } ;
struct xnb_pkt {int size; int car_size; int flags; int list_len; scalar_t__ car; scalar_t__ cdr; TYPE_5__ extra; } ;
struct netif_tx_request {int flags; int size; } ;
struct TYPE_10__ {int size; scalar_t__ features; void* type; } ;
struct TYPE_11__ {TYPE_1__ gso; } ;
struct netif_extra_info {TYPE_2__ u; scalar_t__ type; scalar_t__ flags; } ;
struct TYPE_16__ {scalar_t__ req_prod_pvt; int req_cons; } ;
struct TYPE_15__ {TYPE_7__ txb; TYPE_7__ txf; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 struct netif_tx_request* FUNC_0 (TYPE_7__*,scalar_t__) ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xnb_pkt*) ;
 int FUNC_4 (struct xnb_pkt*,TYPE_7__*,int ) ;
 TYPE_6__ VAR_4 ;

__attribute__((used)) static void
FUNC_5(char *VAR_5, size_t VAR_6)
{
 struct xnb_pkt VAR_7;
 int VAR_8;
 struct netif_tx_request *VAR_9;
 struct netif_extra_info *VAR_10;
 RING_IDX VAR_11 = VAR_4.txf.req_prod_pvt;

 VAR_9 = FUNC_0(&VAR_4.txf,
     VAR_4.txf.req_prod_pvt);
 VAR_9->flags = VAR_0 | VAR_1;
 VAR_9->size = 150;
 VAR_4.txf.req_prod_pvt++;

 VAR_10 = (struct netif_extra_info*) FUNC_0(&VAR_4.txf,
     VAR_4.txf.req_prod_pvt);
 VAR_10->flags = 0;
 VAR_10->type = VAR_2;
 VAR_10->u.gso.size = 250;
 VAR_10->u.gso.type = VAR_3;
 VAR_10->u.gso.features = 0;
 VAR_4.txf.req_prod_pvt++;

 VAR_9 = FUNC_0(&VAR_4.txf,
     VAR_4.txf.req_prod_pvt);
 VAR_9->flags = 0;
 VAR_9->size = 50;
 VAR_4.txf.req_prod_pvt++;

 FUNC_1(&VAR_4.txf);

 VAR_8 = FUNC_4(&VAR_7, &VAR_4.txb,
                             VAR_4.txb.req_cons);
 FUNC_2(VAR_8 == 3);
 FUNC_2(VAR_7.extra.flags == 0);
 FUNC_2(VAR_7.extra.type == VAR_2);
 FUNC_2(VAR_7.extra.u.gso.size == 250);
 FUNC_2(VAR_7.extra.u.gso.type = VAR_3);
 FUNC_2(VAR_7.size == 150);
 FUNC_2(VAR_7.car_size == 100);
 FUNC_2(VAR_7.flags == VAR_0);
 FUNC_2(FUNC_3(&VAR_7));
 FUNC_2(VAR_7.list_len == 2);
 FUNC_2(VAR_7.car == VAR_11);
 FUNC_2(VAR_7.cdr == VAR_11 + 2);
 FUNC_2(FUNC_0(&VAR_4.txb, VAR_7.cdr) == VAR_9);
}
