
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct xnb_pkt {int dummy; } ;
struct netif_tx_request {int size; int gref; scalar_t__ offset; scalar_t__ flags; } ;
struct mbuf {struct mbuf* m_next; } ;
struct TYPE_14__ {int req_prod_pvt; } ;
struct TYPE_13__ {int req_cons; } ;
struct TYPE_10__ {int offset; } ;
struct TYPE_9__ {scalar_t__ offset; } ;
struct TYPE_12__ {int len; TYPE_2__ source; TYPE_1__ dest; } ;
struct TYPE_11__ {TYPE_4__* gnttab; TYPE_5__ txb; int ifp; TYPE_7__ txf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*) ;
 struct netif_tx_request* FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 struct mbuf* FUNC_7 (struct xnb_pkt*,int ) ;
 int FUNC_8 (struct xnb_pkt*,TYPE_5__*,int ) ;
 int FUNC_9 (struct xnb_pkt*,struct mbuf*,TYPE_4__*,TYPE_5__*,int ) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void
FUNC_10(char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct xnb_pkt VAR_7;
 struct mbuf *VAR_8;
 const uint16_t VAR_9 = (VAR_1*2) + 1;

 struct netif_tx_request *VAR_10 = FUNC_1(&VAR_3.txf,
     VAR_3.txf.req_prod_pvt);
 VAR_10->flags = 0;
 VAR_10->size = VAR_9;
 VAR_10->gref = 8;
 VAR_10->offset = 0;
 VAR_3.txf.req_prod_pvt++;

 FUNC_2(&VAR_3.txf);
 FUNC_8(&VAR_7, &VAR_3.txb, VAR_3.txb.req_cons);

 VAR_8 = FUNC_7(&VAR_7, VAR_3.ifp);
 FUNC_3(VAR_8 != ((void*)0));
 if (VAR_8 == ((void*)0))
  return;

 VAR_6 = FUNC_9(&VAR_7, VAR_8, VAR_3.gnttab,
     &VAR_3.txb, VAR_0);

 if (FUNC_0(VAR_8) == VAR_1) {

  FUNC_3(VAR_6 == 3);
  FUNC_3(VAR_3.gnttab[0].len == VAR_1);
  FUNC_3(
      VAR_3.gnttab[0].dest.offset == FUNC_6(
        FUNC_5(VAR_8, VAR_2)));
  FUNC_3(VAR_3.gnttab[0].source.offset == 0);

  FUNC_3(VAR_3.gnttab[1].len == VAR_1);
  FUNC_3(
      VAR_3.gnttab[1].dest.offset == FUNC_6(
        FUNC_5(VAR_8->m_next, VAR_2)));
  FUNC_3(VAR_3.gnttab[1].source.offset == VAR_1);

  FUNC_3(VAR_3.gnttab[2].len == 1);
  FUNC_3(
      VAR_3.gnttab[2].dest.offset == FUNC_6(
        FUNC_5(VAR_8->m_next, VAR_2)));
  FUNC_3(VAR_3.gnttab[2].source.offset == 2 *
       VAR_1);
 } else if (FUNC_0(VAR_8) == 2 * VAR_1) {

  FUNC_3(VAR_6 == 2);
  FUNC_3(VAR_3.gnttab[0].len == 2 * VAR_1);
  FUNC_3(
      VAR_3.gnttab[0].dest.offset == FUNC_6(
        FUNC_5(VAR_8, VAR_2)));
  FUNC_3(VAR_3.gnttab[0].source.offset == 0);

  FUNC_3(VAR_3.gnttab[1].len == 1);
  FUNC_3(
      VAR_3.gnttab[1].dest.offset == FUNC_6(
        FUNC_5(VAR_8->m_next, VAR_2)));
  FUNC_3(
      VAR_3.gnttab[1].source.offset == 2 * VAR_1);

 } else {

  FUNC_3(0);
 }
 FUNC_4(VAR_8);
}
