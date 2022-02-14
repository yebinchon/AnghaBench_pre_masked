
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xnb_pkt {int size; int car_size; scalar_t__ flags; int list_len; scalar_t__ car; } ;
struct netif_tx_request {int size; scalar_t__ flags; } ;
struct TYPE_7__ {int req_prod_pvt; } ;
struct TYPE_6__ {int req_cons; } ;
struct TYPE_5__ {TYPE_2__ txb; TYPE_3__ txf; } ;


 struct netif_tx_request* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xnb_pkt*) ;
 int FUNC_4 (struct xnb_pkt*,TYPE_2__*,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(char *VAR_1, size_t VAR_2)
{
 struct xnb_pkt VAR_3;
 int VAR_4;
 struct netif_tx_request *VAR_5;

 VAR_5 = FUNC_0(&VAR_0.txf,
     VAR_0.txf.req_prod_pvt);

 VAR_5->flags = 0;
 VAR_5->size = 69;
 VAR_0.txf.req_prod_pvt++;

 FUNC_1(&VAR_0.txf);

 VAR_4 = FUNC_4(&VAR_3, &VAR_0.txb,
                             VAR_0.txb.req_cons);
 FUNC_2(VAR_4 == 1);
 FUNC_2(VAR_3.size == 69);
 FUNC_2(VAR_3.car_size == 69);
 FUNC_2(VAR_3.flags == 0);
 FUNC_2(FUNC_3(&VAR_3));
 FUNC_2(VAR_3.list_len == 1);
 FUNC_2(VAR_3.car == 0);
}
