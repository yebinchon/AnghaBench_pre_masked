
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ic_oerrors; } ;
struct wi_softc {int sc_txnext; int sc_txcur; int sc_tx_timer; TYPE_3__* sc_txd; int sc_dev; TYPE_2__ sc_ic; } ;
struct wi_frame {int dummy; } ;
struct TYPE_4__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_6__ {int d_fid; int d_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct wi_softc*,int,int,int ,int ) ;
 scalar_t__ FUNC_4 (struct wi_softc*,int,int,struct mbuf*,int ) ;
 scalar_t__ FUNC_5 (struct wi_softc*,int,int ,struct wi_frame*,int) ;

__attribute__((used)) static int
FUNC_6(struct wi_softc *VAR_2, struct wi_frame *VAR_3, struct mbuf *VAR_4)
{
 int VAR_5 = VAR_2->sc_txnext;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_2->sc_txd[VAR_5].d_fid;
 VAR_7 = sizeof(*VAR_3);
 VAR_8 = FUNC_5(VAR_2, VAR_6, 0, VAR_3, sizeof(*VAR_3)) != 0
      || FUNC_4(VAR_2, VAR_6, VAR_7, VAR_4, VAR_4->m_pkthdr.len) != 0;
 FUNC_2(VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_2->sc_ic.ic_oerrors, 1);
  return -1;
 }
 VAR_2->sc_txd[VAR_5].d_len = VAR_7;
 if (VAR_2->sc_txcur == VAR_5) {
  if (FUNC_3(VAR_2, VAR_0 | VAR_1, VAR_6, 0, 0)) {
   FUNC_1(VAR_2->sc_dev, "xmit failed\n");
   VAR_2->sc_txd[VAR_5].d_len = 0;
   return -1;
  }
  VAR_2->sc_tx_timer = 5;
 }
 return 0;
}
