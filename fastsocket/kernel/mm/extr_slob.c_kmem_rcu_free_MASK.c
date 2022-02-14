
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_rcu {void* size; } ;
struct rcu_head {int dummy; } ;


 int FUNC_0 (void*,void*) ;

__attribute__((used)) static void FUNC_1(struct rcu_head *VAR_0)
{
 struct slob_rcu *VAR_1 = (struct slob_rcu *)VAR_0;
 void *VAR_2 = (void *)VAR_1 - (VAR_1->size - sizeof(struct slob_rcu));

 FUNC_0(VAR_2, VAR_1->size);
}
