
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct netif_tx_request {size_t size; int gref; int offset; scalar_t__ flags; } ;
struct mbuf {int dummy; } ;
struct TYPE_16__ {int req_prod_pvt; } ;
struct TYPE_15__ {int req_cons; } ;
struct TYPE_11__ {scalar_t__ gmfn; } ;
struct TYPE_12__ {scalar_t__ offset; scalar_t__ domid; TYPE_2__ u; } ;
struct TYPE_10__ {int offset; scalar_t__ domid; } ;
struct TYPE_14__ {size_t const len; int flags; TYPE_3__ dest; TYPE_1__ source; } ;
struct TYPE_13__ {TYPE_5__* gnttab; TYPE_6__ txb; int ifp; TYPE_8__ txf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct netif_tx_request* FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (struct mbuf**) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 struct mbuf* FUNC_7 (struct xnb_pkt*,int ) ;
 int FUNC_8 (struct xnb_pkt*,TYPE_6__*,int ) ;
 int FUNC_9 (struct xnb_pkt*,struct mbuf*,TYPE_5__*,TYPE_6__*,scalar_t__) ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void
FUNC_10(char *VAR_6, size_t VAR_7)
{
 const size_t VAR_8 = VAR_3 - 1;
 int VAR_9;
 struct xnb_pkt VAR_10;
 struct mbuf *VAR_11;

 struct netif_tx_request *VAR_12 = FUNC_0(&VAR_5.txf,
     VAR_5.txf.req_prod_pvt);
 VAR_12->flags = 0;
 VAR_12->size = VAR_8;
 VAR_12->gref = 7;
 VAR_12->offset = 17;
 VAR_5.txf.req_prod_pvt++;

 FUNC_1(&VAR_5.txf);

 FUNC_8(&VAR_10, &VAR_5.txb, VAR_5.txb.req_cons);

 VAR_11 = FUNC_7(&VAR_10, VAR_5.ifp);
 VAR_9 = FUNC_9(&VAR_10, VAR_11, VAR_5.gnttab,
     &VAR_5.txb, VAR_0);
 FUNC_2(VAR_9 == 1);
 FUNC_2(VAR_5.gnttab[0].len == VAR_8);

 FUNC_2(VAR_5.gnttab[0].flags & VAR_2);
 FUNC_2(VAR_5.gnttab[0].source.offset == VAR_12->offset);
 FUNC_2(VAR_5.gnttab[0].source.domid == VAR_1);
 FUNC_2(VAR_5.gnttab[0].dest.offset == FUNC_6(
       FUNC_3(VAR_11, VAR_4)));
 FUNC_2(VAR_5.gnttab[0].dest.u.gmfn ==
  FUNC_5(FUNC_3(VAR_11, VAR_4)));
 FUNC_2(VAR_5.gnttab[0].dest.domid == VAR_0);
 FUNC_4(&VAR_11);
}
