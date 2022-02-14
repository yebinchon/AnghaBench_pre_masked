
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int rxs_backup ;
typedef int rxb_backup ;
typedef int netif_rx_sring_t ;
typedef int netif_rx_back_ring_t ;
struct TYPE_2__ {int * rxs; int rxb; int gnttab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct mbuf**) ;
 int FUNC_4 (struct mbuf*,struct xnb_pkt*,int ,int) ;
 int FUNC_5 (struct xnb_pkt*,struct mbuf*,int ,int *,int ) ;
 int FUNC_6 (struct xnb_pkt*,int ,int,int *) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(char *VAR_4, size_t VAR_5)
{
 struct xnb_pkt VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 60;
 netif_rx_back_ring_t VAR_10 = VAR_3.rxb;
 netif_rx_sring_t VAR_11 = *VAR_3.rxs;
 struct mbuf *VAR_12;

 VAR_12 = FUNC_1(VAR_2, VAR_1);

 FUNC_4(VAR_12, &VAR_6, 0, VAR_9);
 VAR_7 = FUNC_5(&VAR_6, VAR_12, VAR_3.gnttab,
   &VAR_3.rxb, VAR_0);

 VAR_8 = FUNC_6(&VAR_6, VAR_3.gnttab, VAR_7,
     &VAR_3.rxb);
 FUNC_0(VAR_8 == 0);
 FUNC_0(
     FUNC_2(&VAR_10, &VAR_3.rxb, sizeof(VAR_10)) == 0);
 FUNC_0(
     FUNC_2(&VAR_11, VAR_3.rxs, sizeof(VAR_11)) == 0);

 FUNC_3(&VAR_12);
}
