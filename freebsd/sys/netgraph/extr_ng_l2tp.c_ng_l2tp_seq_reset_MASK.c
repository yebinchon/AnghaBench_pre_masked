
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct l2tp_seq {int wmax; int cwnd; int ssth; int ** xwin; scalar_t__ rexmits; scalar_t__ acks; scalar_t__ xack; scalar_t__ rack; scalar_t__ nr; scalar_t__ ns; int xack_timer; int rack_timer; } ;
typedef TYPE_1__* priv_p ;
typedef int hook_p ;
struct TYPE_3__ {int node; struct l2tp_seq seq; } ;


 int VAR_0 ;
 int FUNC_0 (struct l2tp_seq* const) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(priv_p VAR_2)
{
 struct l2tp_seq *const VAR_3 = &VAR_2->seq;
 hook_p VAR_4;
 int VAR_5;


 FUNC_0(VAR_3);


 FUNC_4(&VAR_3->rack_timer, VAR_2->node);
 FUNC_4(&VAR_3->xack_timer, VAR_2->node);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3->xwin[VAR_5] == ((void*)0))
   break;
  FUNC_3(VAR_3->xwin[VAR_5]);
 }


 FUNC_1(VAR_2->node, VAR_1, ((void*)0), VAR_4);


 VAR_3->ns = 0;
 VAR_3->nr = 0;
 VAR_3->rack = 0;
 VAR_3->xack = 0;
 VAR_3->wmax = VAR_0;
 VAR_3->cwnd = 1;
 VAR_3->ssth = VAR_3->wmax;
 VAR_3->acks = 0;
 VAR_3->rexmits = 0;
 FUNC_2(VAR_3->xwin, sizeof(VAR_3->xwin));


 FUNC_0(VAR_3);
}
