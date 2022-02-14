
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {scalar_t__* modinfo; } ;
struct iter_env {int priv; int donotq; scalar_t__ max_dependency_depth; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

size_t
FUNC_2(struct module_env* VAR_0, int VAR_1)
{
 struct iter_env* VAR_2 = (struct iter_env*)VAR_0->modinfo[VAR_1];
 if(!VAR_2)
  return 0;
 return sizeof(*VAR_2) + sizeof(int)*((size_t)VAR_2->max_dependency_depth+1)
  + FUNC_0(VAR_2->donotq) + FUNC_1(VAR_2->priv);
}
