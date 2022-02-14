
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct l2tp_seq {int ns; int xack_timer; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_4__ {struct l2tp_seq seq; } ;


 int FUNC_0 (struct l2tp_seq* const) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__* const,int *,int ) ;

__attribute__((used)) static void
FUNC_5(node_p VAR_0, hook_p VAR_1, void *VAR_2, int VAR_3)
{
 const priv_p VAR_4 = FUNC_1(VAR_0);
 struct l2tp_seq *const VAR_5 = &VAR_4->seq;


 if (FUNC_3(&VAR_5->xack_timer) ||
     (!FUNC_2(&VAR_5->xack_timer)))
  return;


 FUNC_0(VAR_5);


 FUNC_4(VAR_4, ((void*)0), VAR_5->ns);





 FUNC_0(VAR_5);
}
