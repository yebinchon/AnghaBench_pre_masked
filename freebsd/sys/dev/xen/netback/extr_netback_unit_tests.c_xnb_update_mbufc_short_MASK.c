
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct netif_tx_request {size_t size; int gref; int offset; scalar_t__ flags; } ;
struct TYPE_9__ {size_t const len; } ;
struct mbuf {size_t const m_len; TYPE_1__ m_pkthdr; } ;
struct TYPE_13__ {int req_prod_pvt; } ;
struct TYPE_12__ {int req_cons; } ;
struct TYPE_11__ {TYPE_2__* gnttab; TYPE_5__ txb; int ifp; TYPE_7__ txf; } ;
struct TYPE_10__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netif_tx_request* FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mbuf**) ;
 struct mbuf* FUNC_4 (struct xnb_pkt*,int ) ;
 int FUNC_5 (struct xnb_pkt*,TYPE_5__*,int ) ;
 int FUNC_6 (struct xnb_pkt*,struct mbuf*,TYPE_2__*,TYPE_5__*,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_7 (struct mbuf*,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_8(char *VAR_4, size_t VAR_5)
{
 const size_t VAR_6 = VAR_2 - 1;
 int VAR_7;
 struct xnb_pkt VAR_8;
 struct mbuf *VAR_9;

 struct netif_tx_request *VAR_10 = FUNC_0(&VAR_3.txf,
     VAR_3.txf.req_prod_pvt);
 VAR_10->flags = 0;
 VAR_10->size = VAR_6;
 VAR_10->gref = 7;
 VAR_10->offset = 17;
 VAR_3.txf.req_prod_pvt++;

 FUNC_1(&VAR_3.txf);

 FUNC_5(&VAR_8, &VAR_3.txb, VAR_3.txb.req_cons);

 VAR_9 = FUNC_4(&VAR_8, VAR_3.ifp);
 VAR_7 = FUNC_6(&VAR_8, VAR_9, VAR_3.gnttab,
     &VAR_3.txb, VAR_0);


 VAR_3.gnttab[0].status = VAR_1;

 FUNC_7(VAR_9, VAR_3.gnttab, VAR_7);
 FUNC_2(VAR_9->m_len == VAR_6);
 FUNC_2(VAR_9->m_pkthdr.len == VAR_6);
 FUNC_3(&VAR_9);
}
