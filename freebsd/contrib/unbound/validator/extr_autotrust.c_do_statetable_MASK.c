
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trust_anchor {TYPE_1__* autr; } ;
struct module_env {int dummy; } ;
struct autr_ta {struct autr_ta* next; } ;
struct TYPE_2__ {struct autr_ta* keys; } ;


 int FUNC_0 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_1 (struct module_env*,struct trust_anchor*,int*) ;
 int FUNC_2 (struct autr_ta*) ;

__attribute__((used)) static int
FUNC_3(struct module_env* VAR_0, struct trust_anchor* VAR_1, int* VAR_2)
{
 struct autr_ta* VAR_3;
 for(VAR_3 = VAR_1->autr->keys; VAR_3; VAR_3 = VAR_3->next) {

  if(!FUNC_2(VAR_3))
   continue;
  FUNC_0(VAR_0, VAR_3, VAR_2);
 }
 FUNC_1(VAR_0, VAR_1, VAR_2);
 return 1;
}
