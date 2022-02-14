
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct mbuf {int dummy; } ;
struct l2tp_seq {int rexmits; int ssth; int cwnd; int ns; int mtx; int * xwin; scalar_t__ acks; int rack; int rack_timer; } ;
typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_8__ {int memoryFailures; int xmitRetransmits; } ;
struct TYPE_7__ {scalar_t__ rexmit_max; int rexmit_max_to; } ;
struct TYPE_9__ {TYPE_2__ stats; TYPE_1__ conf; struct l2tp_seq seq; } ;


 struct mbuf* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct l2tp_seq* const) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *,int,void (*) (int ,int ,void*,int),int *,int ) ;
 int FUNC_8 (TYPE_3__* const) ;
 int FUNC_9 (TYPE_3__* const,struct mbuf*,int ) ;

__attribute__((used)) static void
FUNC_10(node_p VAR_2, hook_p VAR_3, void *VAR_4, int VAR_5)
{
 const priv_p VAR_6 = FUNC_2(VAR_2);
 struct l2tp_seq *const VAR_7 = &VAR_6->seq;
 struct mbuf *VAR_8;
 u_int VAR_9;


 if (FUNC_4(&VAR_7->rack_timer) ||
     (!FUNC_3(&VAR_7->rack_timer)))
  return;


 FUNC_1(VAR_7);

 FUNC_5(&VAR_7->mtx);
 VAR_6->stats.xmitRetransmits++;


 if (VAR_7->rexmits++ >= VAR_6->conf.rexmit_max)
  FUNC_8(VAR_6);


 VAR_9 = (VAR_7->rexmits > 12) ? (1 << 12) : (1 << VAR_7->rexmits);
 if (VAR_9 > VAR_6->conf.rexmit_max_to)
  VAR_9 = VAR_6->conf.rexmit_max_to;
 FUNC_7(&VAR_7->rack_timer, VAR_2, ((void*)0),
     VAR_1 * VAR_9, FUNC_10, ((void*)0), 0);


 VAR_7->ns = VAR_7->rack;
 VAR_7->ssth = (VAR_7->cwnd + 1) / 2;
 VAR_7->cwnd = 1;
 VAR_7->acks = 0;


 VAR_8 = FUNC_0(VAR_7->xwin[0], VAR_0);
 FUNC_6(&VAR_7->mtx);
 if (VAR_8 == ((void*)0))
  VAR_6->stats.memoryFailures++;
 else
  FUNC_9(VAR_6, VAR_8, VAR_7->ns++);





 FUNC_1(VAR_7);
}
