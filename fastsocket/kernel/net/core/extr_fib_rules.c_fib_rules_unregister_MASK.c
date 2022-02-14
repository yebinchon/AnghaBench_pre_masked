
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int rules_mod_lock; } ;
struct fib_rules_ops {int list; struct net* fro_net; } ;


 int FUNC_0 (struct fib_rules_ops*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

void FUNC_6(struct fib_rules_ops *VAR_0)
{
 struct net *VAR_1 = VAR_0->fro_net;

 FUNC_3(&VAR_1->rules_mod_lock);
 FUNC_1(&VAR_0->list);
 FUNC_0(VAR_0);
 FUNC_4(&VAR_1->rules_mod_lock);

 FUNC_5();
 FUNC_2(VAR_1);
}
