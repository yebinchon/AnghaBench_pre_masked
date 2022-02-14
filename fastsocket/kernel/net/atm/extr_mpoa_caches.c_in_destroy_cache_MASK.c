
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpoa_client {int ingress_lock; int * in_cache; TYPE_1__* in_ops; } ;
struct TYPE_2__ {int (* remove_entry ) (int *,struct mpoa_client*) ;} ;


 int FUNC_0 (int *,struct mpoa_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mpoa_client *VAR_0)
{
 FUNC_1(&VAR_0->ingress_lock);
 while(VAR_0->in_cache != ((void*)0))
  VAR_0->in_ops->remove_entry(VAR_0->in_cache, VAR_0);
 FUNC_2(&VAR_0->ingress_lock);

 return;
}
