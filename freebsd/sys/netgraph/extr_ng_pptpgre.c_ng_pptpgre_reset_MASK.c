
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ng_pptpgre_roq {int item; } ;
typedef TYPE_2__* hpriv_p ;
struct TYPE_4__ {int peerPpd; int recvWin; } ;
struct TYPE_5__ {int rtt; int xmitWin; int winAck; scalar_t__ roq_len; int roq; int node; int reorderTimer; int rackTimer; int sackTimer; int xmitAck; int xmitSeq; int recvAck; int recvSeq; TYPE_1__ conf; scalar_t__ dev; int ato; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct ng_pptpgre_roq* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ng_pptpgre_roq*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(hpriv_p VAR_5)
{
 struct ng_pptpgre_roq *VAR_6;


 VAR_5->ato = VAR_1;
 VAR_5->rtt = VAR_2 / 10;
 if (VAR_5->conf.peerPpd > 1)
  VAR_5->rtt *= VAR_5->conf.peerPpd;
 VAR_5->dev = 0;
 VAR_5->xmitWin = (VAR_5->conf.recvWin + 1) / 2;
 if (VAR_5->xmitWin < 2)
  VAR_5->xmitWin = 2;
 else if (VAR_5->xmitWin > VAR_3)
  VAR_5->xmitWin = VAR_3;
 VAR_5->winAck = VAR_5->xmitWin;


 VAR_5->recvSeq = ~0;
 VAR_5->recvAck = ~0;
 VAR_5->xmitSeq = ~0;
 VAR_5->xmitAck = ~0;


 FUNC_5(&VAR_5->sackTimer, VAR_5->node);
 FUNC_5(&VAR_5->rackTimer, VAR_5->node);
 FUNC_5(&VAR_5->reorderTimer, VAR_5->node);


 while (!FUNC_1(&VAR_5->roq)) {
  VAR_6 = FUNC_2(&VAR_5->roq);
  FUNC_3(&VAR_5->roq, VAR_4);
  FUNC_0(VAR_6->item);
  FUNC_4(VAR_6, VAR_0);
 }
 VAR_5->roq_len = 0;
}
