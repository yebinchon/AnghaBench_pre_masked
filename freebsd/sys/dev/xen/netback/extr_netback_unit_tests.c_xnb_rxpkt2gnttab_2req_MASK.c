
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xnb_pkt {int dummy; } ;
struct netif_rx_request {int gref; int id; } ;
struct TYPE_6__ {size_t len; } ;
struct mbuf {size_t m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; int m_flags; } ;
struct TYPE_8__ {int offset; } ;
struct TYPE_10__ {int len; TYPE_3__ dest; } ;
struct TYPE_7__ {int req_prod_pvt; } ;
struct TYPE_9__ {TYPE_5__* gnttab; int rxb; TYPE_2__ txf; int rxf; } ;
typedef int RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct netif_rx_request* FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 struct mbuf* FUNC_2 (int *,size_t,int ,int ) ;
 int FUNC_3 (struct mbuf*,struct xnb_pkt*,int,int) ;
 int FUNC_4 (struct xnb_pkt*,struct mbuf*,TYPE_5__*,int *,int ) ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static void
FUNC_5(char *VAR_7, size_t VAR_8)
{
 struct xnb_pkt VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;
 size_t VAR_13 = 0;
 size_t VAR_14 = VAR_1 + 1;
 int VAR_15 = 60;
 RING_IDX VAR_16 = 11;
 struct netif_rx_request *VAR_17;
 struct mbuf *VAR_18, *VAR_19;

 VAR_18 = FUNC_2(((void*)0), VAR_14, VAR_4, VAR_2);
 VAR_18->m_flags |= VAR_3;
 VAR_18->m_pkthdr.len = VAR_14;
 VAR_18->m_len = VAR_14;

 FUNC_3(VAR_18, &VAR_9, VAR_16, VAR_15);

 for (VAR_11 = 0, VAR_19=VAR_18; VAR_19 != ((void*)0); VAR_11++, VAR_19 = VAR_19->m_next) {
  VAR_17 = FUNC_0(&VAR_6.rxf,
      VAR_6.txf.req_prod_pvt);
  VAR_17->gref = VAR_11;
  VAR_17->id = 5;
 }
 VAR_12 = VAR_11;

 VAR_10 = FUNC_4(&VAR_9, VAR_18, VAR_6.gnttab,
   &VAR_6.rxb, VAR_0);

 FUNC_1(VAR_10 >= VAR_12);
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  int VAR_20 = VAR_6.gnttab[VAR_11].len +
   VAR_6.gnttab[VAR_11].dest.offset;
  FUNC_1(VAR_20 <= VAR_5);
  VAR_13 += VAR_6.gnttab[VAR_11].len;
 }
 FUNC_1(VAR_13 == VAR_14);
}
