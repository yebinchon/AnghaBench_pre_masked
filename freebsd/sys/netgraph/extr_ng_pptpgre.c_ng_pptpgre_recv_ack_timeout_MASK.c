
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef TYPE_3__* hpriv_p ;
typedef int hook_p ;
struct TYPE_7__ {scalar_t__ rtt; scalar_t__ ato; int xmitWin; scalar_t__ recvAck; scalar_t__ winAck; scalar_t__ xmitSeq; int dev; } ;
struct TYPE_5__ {int recvAckTimeouts; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(node_p VAR_2, hook_p VAR_3, void *VAR_4, int VAR_5)
{
 const priv_p VAR_6 = FUNC_0(VAR_2);
 const hpriv_p VAR_7 = VAR_4;


 VAR_6->stats.recvAckTimeouts++;
 VAR_7->rtt = FUNC_2(VAR_7->rtt) + 1;
 VAR_7->ato = VAR_7->rtt + FUNC_1(VAR_7->dev);
 if (VAR_7->ato > VAR_0)
  VAR_7->ato = VAR_0;
 else if (VAR_7->ato < VAR_1)
  VAR_7->ato = VAR_1;


 VAR_7->recvAck = VAR_7->xmitSeq;
 VAR_7->xmitWin = (VAR_7->xmitWin + 1) / 2;
 VAR_7->winAck = VAR_7->recvAck + VAR_7->xmitWin;
}
