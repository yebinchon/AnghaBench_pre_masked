
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rxrpc_local {int rejecter; int reject_queue; int usage; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;

void FUNC_6(struct rxrpc_local *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_1(&VAR_0->usage);

 if (!FUNC_2(&VAR_0->usage)) {
  FUNC_3("resurrected on reject\n");
  FUNC_0();
 }

 FUNC_5(&VAR_0->reject_queue, VAR_1);
 FUNC_4(&VAR_0->rejecter);
}
