
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct netif_rx_response {int flags; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_9__ {TYPE_2__ gso; } ;
struct netif_extra_info {int type; TYPE_3__ u; } ;
struct TYPE_11__ {int rsp_cons; TYPE_1__* sring; } ;
struct lro_ctrl {scalar_t__ lro_cnt; } ;
struct netfront_rxq {TYPE_5__ ring; struct lro_ctrl lro; struct netfront_info* info; } ;
struct netfront_rx_info {struct netif_extra_info* extras; struct netif_rx_response rx; } ;
struct netfront_info {struct ifnet* xn_ifp; } ;
struct mbufq {int dummy; } ;
struct TYPE_10__ {int csum_flags; int csum_data; int tso_segsz; struct ifnet* rcvif; } ;
struct mbuf {TYPE_4__ m_pkthdr; } ;
struct ifnet {int if_capenable; int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_7__ {int rsp_prod; } ;
typedef int RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_9 ;
 int FUNC_2 (struct netfront_rxq*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 struct mbuf* FUNC_5 (struct mbufq*) ;
 int FUNC_6 (struct mbufq*) ;
 int FUNC_7 (struct mbufq*,struct mbuf*) ;
 int FUNC_8 (struct mbufq*,int ) ;
 int FUNC_9 (struct netif_rx_response*,int ,int) ;
 int FUNC_10 (struct netif_extra_info*,int ,int) ;
 int FUNC_11 (struct netfront_info*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct ifnet*,struct mbuf*) ;
 int FUNC_14 (struct ifnet*,struct mbuf*) ;
 int FUNC_15 (struct lro_ctrl*) ;
 scalar_t__ FUNC_16 (struct lro_ctrl*,struct mbuf*,int ) ;
 int FUNC_17 (struct netfront_rxq*) ;
 int FUNC_18 (struct netfront_rxq*,struct netfront_rx_info*,int ,int *,struct mbuf**) ;

__attribute__((used)) static void
FUNC_19(struct netfront_rxq *VAR_10)
{
 struct ifnet *VAR_11;
 struct netfront_info *VAR_12 = VAR_10->info;



 struct netfront_rx_info VAR_13;
 struct netif_rx_response *VAR_14 = &VAR_13.rx;
 struct netif_extra_info *VAR_15 = VAR_13.extras;
 RING_IDX VAR_16, VAR_17;
 struct mbuf *VAR_18;
 struct mbufq VAR_19, VAR_20;
 int VAR_21, VAR_22;

 FUNC_2(VAR_10);

 if (!FUNC_11(VAR_12))
  return;


 FUNC_8(&VAR_20, VAR_6);
 FUNC_8(&VAR_19, VAR_6);

 VAR_11 = VAR_12->xn_ifp;

 do {
  VAR_17 = VAR_10->ring.sring->rsp_prod;
  FUNC_12();

  VAR_16 = VAR_10->ring.rsp_cons;
  while ((VAR_16 != VAR_17)) {
   FUNC_9(VAR_14, FUNC_1(&VAR_10->ring, VAR_16), sizeof(*VAR_14));
   FUNC_10(VAR_15, 0, sizeof(VAR_13.extras));

   VAR_18 = ((void*)0);
   VAR_21 = FUNC_18(VAR_10, &VAR_13, VAR_17, &VAR_16, &VAR_18);

   if (FUNC_3(VAR_21)) {
    if (VAR_18)
     (void )FUNC_7(&VAR_20, VAR_18);
    FUNC_4(VAR_11, VAR_5, 1);
    continue;
   }

   VAR_18->m_pkthdr.rcvif = VAR_11;
   if (VAR_14->flags & VAR_7) {
    VAR_18->m_pkthdr.csum_flags |= (VAR_0
        | VAR_1);
    VAR_18->m_pkthdr.csum_data = 0xffff;
   }
   if ((VAR_14->flags & VAR_8) != 0 &&
       (VAR_15[VAR_9 - 1].type ==
       VAR_9)) {
    VAR_18->m_pkthdr.tso_segsz =
    VAR_15[VAR_9 - 1].u.gso.size;
    VAR_18->m_pkthdr.csum_flags |= VAR_2;
   }

   (void )FUNC_7(&VAR_19, VAR_18);
  }

  VAR_10->ring.rsp_cons = VAR_16;

  FUNC_17(VAR_10);

  FUNC_0(&VAR_10->ring, VAR_22);
 } while (VAR_22);

 FUNC_6(&VAR_20);




 while ((VAR_18 = FUNC_5(&VAR_19)) != ((void*)0)) {
  FUNC_4(VAR_11, VAR_4, 1);
  (*VAR_11->if_input)(VAR_11, VAR_18);

 }







}
