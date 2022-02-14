
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
struct netif_rx_response {scalar_t__ id; scalar_t__ offset; int flags; int status; } ;
struct netif_rx_request {scalar_t__ id; scalar_t__ gref; } ;
struct TYPE_8__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_2__* m_next; TYPE_1__ m_pkthdr; int m_flags; } ;
struct TYPE_12__ {scalar_t__ rsp_prod_pvt; scalar_t__ req_cons; } ;
struct TYPE_11__ {TYPE_5__ rxb; int gnttab; TYPE_3__* rxs; int rxf; } ;
struct TYPE_10__ {scalar_t__ rsp_prod; scalar_t__ req_prod; } ;
struct TYPE_9__ {size_t m_len; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct netif_rx_request* FUNC_2 (int *,scalar_t__) ;
 struct netif_rx_response* FUNC_3 (TYPE_5__*,scalar_t__) ;
 int FUNC_4 (int) ;
 struct mbuf* FUNC_5 (int *,size_t,int ,int ) ;
 int FUNC_6 (struct mbuf**) ;
 int FUNC_7 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_8 (struct xnb_pkt*,struct mbuf*,int ,TYPE_5__*,int ) ;
 int FUNC_9 (struct xnb_pkt*,int ,int,TYPE_5__*) ;
 TYPE_4__ VAR_7 ;

__attribute__((used)) static void
FUNC_10(char *VAR_8, size_t VAR_9)
{
 struct xnb_pkt VAR_10;
 int VAR_11, VAR_12;
 size_t VAR_13 = VAR_6 + 100;
 int VAR_14 = 3;
 uint16_t VAR_15 = 17;
 uint16_t VAR_16 = 37;
 uint16_t VAR_17 = 24;
 uint16_t VAR_18 = 34;
 RING_IDX VAR_19 = 15;
 struct netif_rx_request *VAR_20;
 struct netif_rx_response *VAR_21;
 struct mbuf *VAR_22;

 VAR_22 = FUNC_5(((void*)0), VAR_13, VAR_3, VAR_1);
 VAR_22->m_flags |= VAR_2;
 VAR_22->m_pkthdr.len = VAR_13;
 if (VAR_22->m_next != ((void*)0)) {
  size_t VAR_23 = FUNC_0(FUNC_1(VAR_22), VAR_13);
  VAR_22->m_len = VAR_23;
  VAR_22->m_next->m_len = VAR_13 - VAR_23;

 } else {
  VAR_22->m_len = VAR_13;
 }

 FUNC_7(VAR_22, &VAR_10, VAR_19, VAR_14);
 VAR_20 = FUNC_2(&VAR_7.rxf, VAR_19);
 VAR_20->gref = VAR_17;
 VAR_20->id = VAR_15;
 VAR_20 = FUNC_2(&VAR_7.rxf, VAR_19 + 1);
 VAR_20->gref = VAR_18;
 VAR_20->id = VAR_16;
 VAR_7.rxb.req_cons = VAR_19;
 VAR_7.rxb.rsp_prod_pvt = VAR_19;
 VAR_7.rxs->req_prod = VAR_19 + 2;
 VAR_7.rxs->rsp_prod = VAR_19;

 VAR_11 = FUNC_8(&VAR_10, VAR_22, VAR_7.gnttab,
   &VAR_7.rxb, VAR_0);

 VAR_12 = FUNC_9(&VAR_10, VAR_7.gnttab, VAR_11,
     &VAR_7.rxb);

 FUNC_4(VAR_12 == 2);
 FUNC_4(VAR_7.rxb.rsp_prod_pvt == VAR_19 + 2);
 VAR_21 = FUNC_3(&VAR_7.rxb, VAR_19);
 FUNC_4(VAR_21->id == VAR_15);
 FUNC_4(VAR_21->offset == 0);
 FUNC_4((VAR_21->flags & VAR_4) == 0);
 FUNC_4(VAR_21->flags & VAR_5);
 FUNC_4(VAR_21->status == VAR_6);

 VAR_21 = FUNC_3(&VAR_7.rxb, VAR_19 + 1);
 FUNC_4(VAR_21->id == VAR_16);
 FUNC_4(VAR_21->offset == 0);
 FUNC_4((VAR_21->flags & VAR_4) == 0);
 FUNC_4(! (VAR_21->flags & VAR_5));
 FUNC_4(VAR_21->status == VAR_13 - VAR_6);

 FUNC_6(&VAR_22);
}
