
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct xnb_pkt {int dummy; } ;
struct netif_rx_response {scalar_t__ id; int flags; size_t status; } ;
struct netif_rx_request {scalar_t__ gref; scalar_t__ id; } ;
struct TYPE_11__ {scalar_t__ size; scalar_t__ type; } ;
struct TYPE_12__ {TYPE_3__ gso; } ;
struct netif_extra_info {scalar_t__ type; int flags; TYPE_4__ u; } ;
struct TYPE_9__ {size_t len; scalar_t__ tso_segsz; int csum_flags; } ;
struct mbuf {size_t m_len; TYPE_1__ m_pkthdr; int m_flags; } ;
struct TYPE_14__ {scalar_t__ rsp_prod_pvt; scalar_t__ req_cons; } ;
struct TYPE_13__ {TYPE_6__ rxb; int gnttab; TYPE_2__* rxs; int rxf; } ;
struct TYPE_10__ {scalar_t__ rsp_prod; scalar_t__ req_prod; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct netif_rx_request* FUNC_0 (int *,scalar_t__) ;
 struct netif_rx_response* FUNC_1 (TYPE_6__*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int) ;
 struct mbuf* FUNC_3 (int *,size_t,int ,int ) ;
 int FUNC_4 (struct mbuf**) ;
 int FUNC_5 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_6 (struct xnb_pkt*,struct mbuf*,int ,TYPE_6__*,int ) ;
 int FUNC_7 (struct xnb_pkt*,int ,int,TYPE_6__*) ;
 TYPE_5__ VAR_12 ;

__attribute__((used)) static void
FUNC_8(char *VAR_13, size_t VAR_14)
{
 struct xnb_pkt VAR_15;
 int VAR_16, VAR_17;
 size_t VAR_18 = 14;
 int VAR_19 = 15;
 RING_IDX VAR_20 = 3;
 uint16_t VAR_21 = 49;
 uint16_t VAR_22 = 65;
 uint16_t VAR_23 = VAR_9 - 40;
 struct mbuf *VAR_24;
 struct netif_rx_request *VAR_25;
 struct netif_rx_response *VAR_26;
 struct netif_extra_info *VAR_27;

 VAR_24 = FUNC_3(((void*)0), VAR_18, VAR_4, VAR_2);
 FUNC_2(VAR_24 != ((void*)0));
 if (VAR_24 == ((void*)0))
  return;

 VAR_24->m_flags |= VAR_3;
 VAR_24->m_pkthdr.len = VAR_18;
 VAR_24->m_pkthdr.csum_flags |= VAR_0;
 VAR_24->m_pkthdr.tso_segsz = VAR_23;
 VAR_24->m_len = VAR_18;

 FUNC_5(VAR_24, &VAR_15, VAR_20, VAR_19);
 VAR_25 = FUNC_0(&VAR_12.rxf, VAR_20);
 VAR_25->id = VAR_21;
 VAR_25->gref = VAR_22;
 VAR_25 = FUNC_0(&VAR_12.rxf, VAR_20 + 1);
 VAR_25->id = VAR_21 + 1;
 VAR_25->gref = VAR_22 + 1;
 VAR_12.rxb.req_cons = VAR_20;
 VAR_12.rxb.rsp_prod_pvt = VAR_20;
 VAR_12.rxs->req_prod = VAR_20 + 2;
 VAR_12.rxs->rsp_prod = VAR_20;

 VAR_16 = FUNC_6(&VAR_15, VAR_24, VAR_12.gnttab,
   &VAR_12.rxb, VAR_1);

 VAR_17 = FUNC_7(&VAR_15, VAR_12.gnttab, VAR_16,
     &VAR_12.rxb);

 FUNC_2(VAR_17 == 2);
 FUNC_2(VAR_12.rxb.rsp_prod_pvt == VAR_20 + 2);
 VAR_26 = FUNC_1(&VAR_12.rxb, VAR_20);
 FUNC_2(VAR_26->id == VAR_21);
 FUNC_2((VAR_26->flags & VAR_8) == 0);
 FUNC_2((VAR_26->flags & VAR_7));
 FUNC_2((VAR_26->flags & VAR_6));
 FUNC_2((VAR_26->flags & VAR_5));
 FUNC_2(VAR_26->status == VAR_18);

 VAR_27 = (struct netif_extra_info*)
  FUNC_1(&VAR_12.rxb, VAR_20 + 1);
 FUNC_2(VAR_27->type == VAR_11);
 FUNC_2(! (VAR_27->flags & VAR_10));
 FUNC_2(VAR_27->u.gso.size == VAR_23);
 FUNC_2(VAR_27->u.gso.type == VAR_11);

 FUNC_4(&VAR_24);
}
