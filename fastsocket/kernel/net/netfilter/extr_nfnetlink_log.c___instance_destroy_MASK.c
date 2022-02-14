
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfulnl_instance {int lock; scalar_t__ skb; int hlist; } ;


 int FUNC_0 (struct nfulnl_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfulnl_instance*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfulnl_instance *VAR_0)
{

 FUNC_1(&VAR_0->hlist);



 FUNC_3(&VAR_0->lock);
 if (VAR_0->skb)
  FUNC_0(VAR_0);
 FUNC_4(&VAR_0->lock);


 FUNC_2(VAR_0);
}
