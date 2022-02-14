
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct netif_rx_response {scalar_t__ id; scalar_t__ offset; int flags; size_t status; } ;
struct netif_rx_request {int gref; scalar_t__ id; } ;
struct TYPE_7__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_1__ m_pkthdr; int m_flags; } ;
struct TYPE_10__ {scalar_t__ rsp_prod_pvt; scalar_t__ req_cons; } ;
struct TYPE_9__ {TYPE_4__ rxb; int gnttab; TYPE_2__* rxs; int rxf; } ;
struct TYPE_8__ {scalar_t__ rsp_prod; scalar_t__ req_prod; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct netif_rx_request* FUNC_0 (int *,scalar_t__) ;
 struct netif_rx_response* FUNC_1 (TYPE_4__*,scalar_t__) ;
 int FUNC_2 (int) ;
 struct mbuf* FUNC_3 (int *,size_t,int ,int ) ;
 int FUNC_4 (struct mbuf**) ;
 int FUNC_5 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_6 (struct xnb_pkt*,struct mbuf*,int ,TYPE_4__*,int ) ;
 int FUNC_7 (struct xnb_pkt*,int ,int,TYPE_4__*) ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static void
FUNC_8(char *VAR_7, size_t VAR_8)
{
 struct xnb_pkt VAR_9;
 int VAR_10, VAR_11;
 size_t VAR_12 = 128;
 int VAR_13 = 60;
 RING_IDX VAR_14 = 5;
 struct netif_rx_request *VAR_15;
 struct netif_rx_response *VAR_16;
 struct mbuf *VAR_17;

 VAR_17 = FUNC_3(((void*)0), VAR_12, VAR_3, VAR_1);
 VAR_17->m_flags |= VAR_2;
 VAR_17->m_pkthdr.len = VAR_12;
 VAR_17->m_len = VAR_12;

 FUNC_5(VAR_17, &VAR_9, VAR_14, VAR_13);
 VAR_15 = FUNC_0(&VAR_6.rxf, VAR_14);
 VAR_15->gref = 7;
 VAR_6.rxb.req_cons = VAR_14;
 VAR_6.rxb.rsp_prod_pvt = VAR_14;
 VAR_6.rxs->req_prod = VAR_14 + 1;
 VAR_6.rxs->rsp_prod = VAR_14;

 VAR_10 = FUNC_6(&VAR_9, VAR_17, VAR_6.gnttab,
   &VAR_6.rxb, VAR_0);

 VAR_11 = FUNC_7(&VAR_9, VAR_6.gnttab, VAR_10,
     &VAR_6.rxb);

 FUNC_2(VAR_11 == 1);
 FUNC_2(VAR_6.rxb.rsp_prod_pvt == VAR_14 + 1);
 VAR_16 = FUNC_1(&VAR_6.rxb, VAR_14);
 FUNC_2(VAR_16->id == VAR_15->id);
 FUNC_2(VAR_16->offset == 0);
 FUNC_2((VAR_16->flags & (VAR_5 | VAR_4)) == 0);
 FUNC_2(VAR_16->status == VAR_12);

 FUNC_4(&VAR_17);
}
