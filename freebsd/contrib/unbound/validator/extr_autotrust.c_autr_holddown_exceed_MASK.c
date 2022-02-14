
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trust_anchor {TYPE_1__* autr; } ;
struct module_env {int dummy; } ;
struct autr_ta {scalar_t__ s; struct autr_ta* next; } ;
struct TYPE_2__ {struct autr_ta* keys; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct module_env*,struct autr_ta*,int*) ;
 scalar_t__ FUNC_1 (struct autr_ta*) ;

__attribute__((used)) static void
FUNC_2(struct module_env* VAR_1, struct trust_anchor* VAR_2, int* VAR_3)
{
 struct autr_ta* VAR_4;
 for(VAR_4 = VAR_2->autr->keys; VAR_4; VAR_4 = VAR_4->next) {
  if(FUNC_1(VAR_4) &&
   VAR_4->s == VAR_0)
   FUNC_0(VAR_1, VAR_4, VAR_3);
 }
}
