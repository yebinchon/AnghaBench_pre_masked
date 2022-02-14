
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfulnl_instance {scalar_t__ skb; int timer; } ;


 int FUNC_0 (struct nfulnl_instance*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct nfulnl_instance*) ;

__attribute__((used)) static void
FUNC_3(struct nfulnl_instance *VAR_0)
{

 if (FUNC_1(&VAR_0->timer))
  FUNC_2(VAR_0);
 if (VAR_0->skb)
  FUNC_0(VAR_0);
}
