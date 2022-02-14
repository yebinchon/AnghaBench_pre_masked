
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct sbni_softc {int state; struct mbuf* tx_buf_p; TYPE_1__* ifp; int maxframe; int framelen; int tx_frameno; scalar_t__ pktlen; scalar_t__ outpos; } ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; } ;
struct TYPE_2__ {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (TYPE_1__*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct mbuf*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sbni_softc*,int ) ;
 int FUNC_7 (struct sbni_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct sbni_softc *VAR_6)
{
 struct mbuf *VAR_7;
 u_int VAR_8;


 if (VAR_6->tx_buf_p)
  FUNC_5("sbni: memory leak!\n");

 VAR_6->outpos = 0;
 VAR_6->state &= ~(VAR_2 | VAR_1);

 for (;;) {
  FUNC_1(&VAR_6->ifp->if_snd, VAR_6->tx_buf_p);
  if (!VAR_6->tx_buf_p) {

   VAR_6->pktlen = 0;
   VAR_6->tx_frameno = 0;
   VAR_6->framelen = 0;
   VAR_6->ifp->if_drv_flags &= ~VAR_3;
   return;
  }

  for (VAR_8 = 0, VAR_7 = VAR_6->tx_buf_p; VAR_7; VAR_7 = VAR_7->m_next)
   VAR_8 += VAR_7->m_len;

  if (VAR_8 != 0)
   break;
  FUNC_3(VAR_6->tx_buf_p);
 }

 if (VAR_8 < VAR_4)
  VAR_8 = VAR_4;

 VAR_6->pktlen = VAR_8;
 VAR_6->tx_frameno = FUNC_2(VAR_8, VAR_6->maxframe);
 VAR_6->framelen = FUNC_4(VAR_8, VAR_6->maxframe);

 FUNC_7(VAR_6, VAR_0, FUNC_6(VAR_6, VAR_0) | VAR_5);
 VAR_6->ifp->if_drv_flags |= VAR_3;
 FUNC_0(VAR_6->ifp, VAR_6->tx_buf_p);
}
