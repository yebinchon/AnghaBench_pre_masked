
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct xnb_pkt {int dummy; } ;
struct netif_rx_response {scalar_t__ id; size_t status; scalar_t__ offset; int flags; } ;
struct netif_rx_request {scalar_t__ id; scalar_t__ gref; } ;
struct TYPE_8__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_2__* m_next; TYPE_1__ m_pkthdr; int m_flags; } ;
struct TYPE_12__ {void* rsp_prod_pvt; void* req_cons; } ;
struct TYPE_11__ {TYPE_5__ rxb; int gnttab; TYPE_3__* rxs; int rxf; } ;
struct TYPE_10__ {void* rsp_prod; void* req_prod; } ;
struct TYPE_9__ {size_t m_len; } ;
typedef void* RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct netif_rx_request* FUNC_0 (int *,void*) ;
 struct netif_rx_response* FUNC_1 (TYPE_5__*,void*) ;
 int FUNC_2 (int) ;
 struct mbuf* FUNC_3 (struct mbuf*,size_t,int ,int ) ;
 int FUNC_4 (struct mbuf**) ;
 int FUNC_5 (struct mbuf*,struct xnb_pkt*,void*,int) ;
 int FUNC_6 (struct xnb_pkt*,struct mbuf*,int ,TYPE_5__*,int ) ;
 int FUNC_7 (struct xnb_pkt*,int ,int,TYPE_5__*) ;
 TYPE_4__ VAR_7 ;

__attribute__((used)) static void
FUNC_8(char *VAR_8, size_t VAR_9) {
 struct xnb_pkt VAR_10;
 int VAR_11, VAR_12;
 size_t VAR_13 = VAR_1 - 5;
 size_t VAR_14 = VAR_1 - 15;
 int VAR_15 = 32;
 RING_IDX VAR_16 = 14;
 uint16_t VAR_17 = 47;
 uint16_t VAR_18 = 54;
 struct netif_rx_request *VAR_19;
 struct netif_rx_response *VAR_20;
 struct mbuf *VAR_21;

 VAR_21 = FUNC_3(((void*)0), VAR_13, VAR_4, VAR_2);
 FUNC_2(VAR_21 != ((void*)0));
 if (VAR_21 == ((void*)0))
  return;
 VAR_21->m_flags |= VAR_3;

 FUNC_3(VAR_21, VAR_14, VAR_4, VAR_2);
 FUNC_2(VAR_21->m_next != ((void*)0));
 VAR_21->m_pkthdr.len = VAR_13 + VAR_14;
 VAR_21->m_len = VAR_13;
 VAR_21->m_next->m_len = VAR_14;

 FUNC_5(VAR_21, &VAR_10, VAR_16, VAR_15);

 VAR_19 = FUNC_0(&VAR_7.rxf, VAR_16);
 VAR_19->gref = VAR_18;
 VAR_19->id = VAR_17;
 VAR_7.rxb.req_cons = VAR_16;
 VAR_7.rxb.rsp_prod_pvt = VAR_16;
 VAR_7.rxs->req_prod = VAR_16 + 1;
 VAR_7.rxs->rsp_prod = VAR_16;

 VAR_12 = FUNC_6(&VAR_10, VAR_21, VAR_7.gnttab,
   &VAR_7.rxb, VAR_0);

 VAR_11 = FUNC_7(&VAR_10, VAR_7.gnttab, VAR_12,
     &VAR_7.rxb);

 FUNC_2(VAR_12 == 2);
 FUNC_2(VAR_11 == 1);
 VAR_20 = FUNC_1(&VAR_7.rxb, VAR_16);
 FUNC_2(VAR_20->id == VAR_17);
 FUNC_2(VAR_20->status == VAR_13 + VAR_14);
 FUNC_2(VAR_20->offset == 0);
 FUNC_2(! (VAR_20->flags & (VAR_6 | VAR_5)));

 FUNC_4(&VAR_21);
}
