
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct netif_rx_request {int gref; } ;
struct TYPE_8__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_1__ m_pkthdr; int m_flags; } ;
struct TYPE_12__ {scalar_t__ offset; scalar_t__ domid; } ;
struct TYPE_10__ {scalar_t__ gmfn; } ;
struct TYPE_11__ {scalar_t__ domid; scalar_t__ offset; TYPE_3__ u; } ;
struct TYPE_14__ {size_t len; int flags; TYPE_5__ dest; TYPE_4__ source; } ;
struct TYPE_9__ {int req_prod_pvt; } ;
struct TYPE_13__ {TYPE_7__* gnttab; int rxb; TYPE_2__ txf; int rxf; } ;
typedef int RING_IDX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct netif_rx_request* FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 struct mbuf* FUNC_2 (int *,size_t,int ,int ) ;
 int FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (struct mbuf**) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (struct mbuf*,struct xnb_pkt*,int,int) ;
 int FUNC_8 (struct xnb_pkt*,struct mbuf*,TYPE_7__*,int *,scalar_t__) ;
 TYPE_6__ VAR_7 ;

__attribute__((used)) static void
FUNC_9(char *VAR_8, size_t VAR_9) {
 struct xnb_pkt VAR_10;
 int VAR_11;
 size_t VAR_12 = 128;
 int VAR_13 = 60;
 RING_IDX VAR_14 = 9;
 struct netif_rx_request *VAR_15;
 struct mbuf *VAR_16;

 VAR_16 = FUNC_2(((void*)0), VAR_12, VAR_5, VAR_3);
 VAR_16->m_flags |= VAR_4;
 VAR_16->m_pkthdr.len = VAR_12;
 VAR_16->m_len = VAR_12;

 FUNC_7(VAR_16, &VAR_10, VAR_14, VAR_13);
 VAR_15 = FUNC_0(&VAR_7.rxf,
          VAR_7.txf.req_prod_pvt);
 VAR_15->gref = 7;

 VAR_11 = FUNC_8(&VAR_10, VAR_16, VAR_7.gnttab,
          &VAR_7.rxb, VAR_0);

 FUNC_1(VAR_11 == 1);
 FUNC_1(VAR_7.gnttab[0].len == VAR_12);

 FUNC_1(VAR_7.gnttab[0].flags & VAR_2);
 FUNC_1(VAR_7.gnttab[0].dest.offset == 0);
 FUNC_1(VAR_7.gnttab[0].source.domid == VAR_1);
 FUNC_1(VAR_7.gnttab[0].source.offset == FUNC_6(
     FUNC_3(VAR_16, VAR_6)));
 FUNC_1(VAR_7.gnttab[0].source.u.gmfn ==
     FUNC_5(FUNC_3(VAR_16, VAR_6)));
 FUNC_1(VAR_7.gnttab[0].dest.domid == VAR_0);

 FUNC_4(&VAR_16);
}
