
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct xnb_pkt {int dummy; } ;
struct netif_tx_request {scalar_t__ size; int gref; scalar_t__ offset; scalar_t__ flags; } ;
struct TYPE_12__ {scalar_t__ const len; } ;
struct mbuf {int m_len; TYPE_3__* m_next; TYPE_2__ m_pkthdr; } ;
struct TYPE_17__ {int req_prod_pvt; } ;
struct TYPE_16__ {int req_cons; } ;
struct TYPE_15__ {TYPE_4__* gnttab; TYPE_7__ txb; int ifp; TYPE_9__ txf; } ;
struct TYPE_14__ {int status; } ;
struct TYPE_13__ {int m_len; TYPE_1__* m_next; } ;
struct TYPE_11__ {int m_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netif_tx_request* FUNC_0 (TYPE_9__*,int ) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mbuf**) ;
 struct mbuf* FUNC_4 (struct xnb_pkt*,int ) ;
 int FUNC_5 (struct xnb_pkt*,TYPE_7__*,int ) ;
 int FUNC_6 (struct xnb_pkt*,struct mbuf*,TYPE_4__*,TYPE_7__*,int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_7 (struct mbuf*,TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_8(char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct xnb_pkt VAR_8;
 struct mbuf *VAR_9;
 const uint16_t VAR_10 = (VAR_2*2) + 1;

 struct netif_tx_request *VAR_11 = FUNC_0(&VAR_3.txf,
     VAR_3.txf.req_prod_pvt);
 VAR_11->flags = 0;
 VAR_11->size = VAR_10;
 VAR_11->gref = 8;
 VAR_11->offset = 0;
 VAR_3.txf.req_prod_pvt++;

 FUNC_1(&VAR_3.txf);
 FUNC_5(&VAR_8, &VAR_3.txb, VAR_3.txb.req_cons);

 VAR_9 = FUNC_4(&VAR_8, VAR_3.ifp);
 VAR_7 = FUNC_6(&VAR_8, VAR_9, VAR_3.gnttab,
     &VAR_3.txb, VAR_0);


 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_3.gnttab[0].status = VAR_1;
 }
 FUNC_7(VAR_9, VAR_3.gnttab, VAR_7);

 if (VAR_7 == 3) {

  FUNC_2(VAR_9->m_pkthdr.len == VAR_10);
  FUNC_2(VAR_9->m_len == VAR_2);
  FUNC_2(VAR_9->m_next->m_len == VAR_2);
  FUNC_2(VAR_9->m_next->m_next->m_len == 1);
 } else if (VAR_7 == 2) {

  FUNC_2(VAR_7 == 2);
  FUNC_2(VAR_9->m_pkthdr.len == VAR_10);
  FUNC_2(VAR_9->m_len == 2 * VAR_2);
  FUNC_2(VAR_9->m_next->m_len == 1);
 } else {

  FUNC_2(0);
 }
 FUNC_3(&VAR_9);
}
