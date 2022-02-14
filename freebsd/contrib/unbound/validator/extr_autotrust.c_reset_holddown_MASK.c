
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int * now; } ;
struct autr_ta {int last_change; } ;



__attribute__((used)) static void
FUNC_0(struct module_env* VAR_0, struct autr_ta* VAR_1, int* VAR_2)
{
 VAR_1->last_change = *VAR_0->now;
 *VAR_2 = 1;
}
