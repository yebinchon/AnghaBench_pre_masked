
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
struct netif_tx_request {int size; int gref; scalar_t__ offset; scalar_t__ flags; } ;
struct TYPE_9__ {int len; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;
struct TYPE_13__ {int req_prod_pvt; } ;
struct TYPE_12__ {int req_cons; } ;
struct TYPE_11__ {TYPE_2__* gnttab; TYPE_5__ txb; int ifp; TYPE_7__ txf; } ;
struct TYPE_10__ {void* status; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_6;
 struct xnb_pkt VAR_7;
 struct mbuf *VAR_8;

 struct netif_tx_request *VAR_9 = FUNC_0(&VAR_3.txf,
     VAR_3.txf.req_prod_pvt);
 VAR_9->flags = VAR_2;
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

 FUNC_5(&VAR_7, &VAR_3.txb, VAR_3.txb.req_cons);

 VAR_8 = FUNC_4(&VAR_7, VAR_3.ifp);
 VAR_6 = FUNC_6(&VAR_7, VAR_8, VAR_3.gnttab,
     &VAR_3.txb, VAR_0);


 VAR_3.gnttab[0].status = VAR_1;
 VAR_3.gnttab[1].status = VAR_1;

 FUNC_7(VAR_8, VAR_3.gnttab, VAR_6);
 FUNC_2(VAR_6 == 2);
 FUNC_2(VAR_8->m_pkthdr.len == 1900);
 FUNC_2(VAR_8->m_len == 1900);

 FUNC_3(&VAR_8);
}
