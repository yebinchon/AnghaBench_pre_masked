
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int dummy; } ;
struct autr_ta {int s; } ;
typedef int autr_state_type ;


 int VAR_0 ;
 int FUNC_0 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct autr_ta*,int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct module_env* VAR_1, struct autr_ta* VAR_2, int* VAR_3,
 autr_state_type VAR_4)
{
 FUNC_2(VAR_2, VAR_0, "update: %s to %s",
  FUNC_1(VAR_2->s), FUNC_1(VAR_4));
 VAR_2->s = VAR_4;
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
