
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int state; int queue; } ;
struct sk_buff {int dummy; } ;






 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct x25_neigh*) ;
 int FUNC_2 (struct sk_buff*,struct x25_neigh*) ;

void FUNC_3(struct sk_buff *VAR_0, struct x25_neigh *VAR_1)
{
 switch (VAR_1->state) {
  case 131:
   FUNC_0(&VAR_1->queue, VAR_0);
   VAR_1->state = 130;
   FUNC_1(VAR_1);
   break;
  case 130:
  case 129:
   FUNC_0(&VAR_1->queue, VAR_0);
   break;
  case 128:
   FUNC_2(VAR_0, VAR_1);
   break;
 }
}
