
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct l2tp_seq {int mtx; int xack_timer; int rack_timer; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_5__ {struct l2tp_seq seq; } ;


 int FUNC_0 (struct l2tp_seq* const) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__* const) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_1)
{
 const priv_p VAR_2 = FUNC_1(VAR_1);
 struct l2tp_seq *const VAR_3 = &VAR_2->seq;


 FUNC_0(VAR_3);


 FUNC_5(VAR_2);


 FUNC_6(&VAR_3->rack_timer, VAR_1);
 FUNC_6(&VAR_3->xack_timer, VAR_1);

 FUNC_4(&VAR_3->mtx);

 FUNC_3(VAR_2, VAR_0);


 FUNC_2(VAR_1);
 return (0);
}
