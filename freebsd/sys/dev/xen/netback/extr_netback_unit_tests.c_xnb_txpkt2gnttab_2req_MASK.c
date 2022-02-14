
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct netif_tx_request {int size; int gref; scalar_t__ offset; scalar_t__ flags; } ;
struct mbuf {int dummy; } ;
struct TYPE_12__ {int req_prod_pvt; } ;
struct TYPE_11__ {int req_cons; } ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_10__ {int len; TYPE_1__ dest; } ;
struct TYPE_9__ {TYPE_3__* gnttab; TYPE_4__ txb; int ifp; TYPE_6__ txf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct netif_tx_request* FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (struct mbuf**) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 struct mbuf* FUNC_6 (struct xnb_pkt*,int ) ;
 int FUNC_7 (struct xnb_pkt*,TYPE_4__*,int ) ;
 int FUNC_8 (struct xnb_pkt*,struct mbuf*,TYPE_3__*,TYPE_4__*,int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_9(char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct xnb_pkt VAR_7;
 struct mbuf *VAR_8;

 struct netif_tx_request *VAR_9 = FUNC_0(&VAR_3.txf,
     VAR_3.txf.req_prod_pvt);
 VAR_9->flags = VAR_1;
 VAR_9->size = 1900;
 VAR_9->gref = 7;
 VAR_9->offset = 0;
 VAR_3.txf.req_prod_pvt++;

 VAR_9 = FUNC_0(&VAR_3.txf,
     VAR_3.txf.req_prod_pvt);
 VAR_9->flags = 0;
 VAR_9->size = 500;
 VAR_9->gref = 8;
 VAR_9->offset = 0;
 VAR_3.txf.req_prod_pvt++;

 FUNC_1(&VAR_3.txf);

 FUNC_7(&VAR_7, &VAR_3.txb, VAR_3.txb.req_cons);

 VAR_8 = FUNC_6(&VAR_7, VAR_3.ifp);
 VAR_6 = FUNC_8(&VAR_7, VAR_8, VAR_3.gnttab,
     &VAR_3.txb, VAR_0);

 FUNC_2(VAR_6 == 2);
 FUNC_2(VAR_3.gnttab[0].len == 1400);
 FUNC_2(VAR_3.gnttab[0].dest.offset == FUNC_5(
       FUNC_3(VAR_8, VAR_2)));

 FUNC_2(VAR_3.gnttab[1].len == 500);
 FUNC_2(VAR_3.gnttab[1].dest.offset == FUNC_5(
       FUNC_3(VAR_8, VAR_2) + 1400));
 FUNC_4(&VAR_8);
}
