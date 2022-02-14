
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image_params {TYPE_1__* args; } ;
typedef int register_t ;
struct TYPE_2__ {int argc; } ;


 int FUNC_0 (int *,intptr_t) ;

__attribute__((used)) static int
FUNC_1(register_t **VAR_0, struct image_params *VAR_1)
{
 register_t *VAR_2, *VAR_3;

 VAR_2 = *VAR_0;
 VAR_3 = *VAR_0 + (VAR_1->args->argc + 1);
 (*VAR_0)--;
 FUNC_0(*VAR_0, (intptr_t)(void *)VAR_3);
 (*VAR_0)--;
 FUNC_0(*VAR_0, (intptr_t)(void *)VAR_2);
 (*VAR_0)--;
 FUNC_0(*VAR_0, VAR_1->args->argc);
 return (0);
}
