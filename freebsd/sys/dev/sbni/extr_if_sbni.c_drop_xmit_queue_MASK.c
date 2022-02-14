
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbni_softc {int state; TYPE_1__* ifp; scalar_t__ outpos; scalar_t__ framelen; scalar_t__ tx_frameno; struct mbuf* tx_buf_p; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int if_drv_flags; int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_3(struct sbni_softc *VAR_4)
{
 struct mbuf *VAR_5;

 if (VAR_4->tx_buf_p) {
  FUNC_2(VAR_4->tx_buf_p);
  VAR_4->tx_buf_p = ((void*)0);
  FUNC_1(VAR_4->ifp, VAR_2, 1);
 }

 for (;;) {
  FUNC_0(&VAR_4->ifp->if_snd, VAR_5);
  if (VAR_5 == ((void*)0))
   break;
  FUNC_2(VAR_5);
  FUNC_1(VAR_4->ifp, VAR_2, 1);
 }

 VAR_4->tx_frameno = 0;
 VAR_4->framelen = 0;
 VAR_4->outpos = 0;
 VAR_4->state &= ~(VAR_1 | VAR_0);
 VAR_4->ifp->if_drv_flags &= ~VAR_3;
}
