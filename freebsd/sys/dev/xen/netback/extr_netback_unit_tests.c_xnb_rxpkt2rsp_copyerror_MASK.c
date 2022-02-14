
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint16_t ;
struct xnb_pkt {int dummy; } ;
struct netif_rx_response {int id; scalar_t__ status; } ;
struct netif_rx_request {int gref; int id; } ;
struct TYPE_9__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_1__ m_pkthdr; int m_flags; } ;
struct TYPE_13__ {scalar_t__ rsp_prod_pvt; scalar_t__ req_cons; } ;
struct TYPE_12__ {int status; } ;
struct TYPE_11__ {int rxf; TYPE_5__ rxb; TYPE_4__* gnttab; TYPE_2__* rxs; } ;
struct TYPE_10__ {scalar_t__ rsp_prod; scalar_t__ req_prod; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct netif_rx_request* FUNC_0 (int *,scalar_t__) ;
 struct netif_rx_response* FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (int) ;
 struct mbuf* FUNC_3 (int *,size_t,int ,int ) ;
 int FUNC_4 (struct mbuf**) ;
 int FUNC_5 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_6 (struct xnb_pkt*,struct mbuf*,TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_7 (struct xnb_pkt*,TYPE_4__*,int,TYPE_5__*) ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static void
FUNC_8(char *VAR_8, size_t VAR_9)
{
 struct xnb_pkt VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = 7;
 int VAR_14 = 42;
 uint16_t VAR_15 = 6859;
 size_t VAR_16 = 7 * VAR_2;
 int VAR_17 = 9;
 RING_IDX VAR_18 = 2;
 struct netif_rx_request *VAR_19;
 struct netif_rx_response *VAR_20;
 struct mbuf *VAR_21;

 VAR_21 = FUNC_3(((void*)0), VAR_16, VAR_5, VAR_3);
 VAR_21->m_flags |= VAR_4;
 VAR_21->m_pkthdr.len = VAR_16;
 VAR_21->m_len = VAR_16;

 FUNC_5(VAR_21, &VAR_10, VAR_18, VAR_17);
 VAR_19 = FUNC_0(&VAR_7.rxf, VAR_18);
 VAR_19->gref = VAR_14;
 VAR_19->id = VAR_13;
 VAR_7.rxb.req_cons = VAR_18;
 VAR_7.rxb.rsp_prod_pvt = VAR_18;
 VAR_7.rxs->req_prod = VAR_18 + 1;
 VAR_7.rxs->rsp_prod = VAR_18;
 VAR_19 = FUNC_0(&VAR_7.rxf, VAR_18 + 1);
 VAR_19->gref = VAR_15;
 VAR_19->id = VAR_15;

 VAR_11 = FUNC_6(&VAR_10, VAR_21, VAR_7.gnttab,
   &VAR_7.rxb, VAR_0);

 VAR_7.gnttab[2].status = VAR_1;

 VAR_12 = FUNC_7(&VAR_10, VAR_7.gnttab, VAR_11,
     &VAR_7.rxb);

 FUNC_2(VAR_12 == 1);
 FUNC_2(VAR_7.rxb.rsp_prod_pvt == VAR_18 + 1);
 VAR_20 = FUNC_1(&VAR_7.rxb, VAR_18);
 FUNC_2(VAR_20->id == VAR_13);
 FUNC_2(VAR_20->status == VAR_6);
 VAR_19 = FUNC_0(&VAR_7.rxf, VAR_18 + 1);
 FUNC_2(VAR_19->gref == VAR_15);
 FUNC_2(VAR_19->id == VAR_15);

 FUNC_4(&VAR_21);
}
