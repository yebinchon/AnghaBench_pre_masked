
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {scalar_t__* modinfo; } ;
struct dns64_env {int dummy; } ;



size_t
FUNC_0(struct module_env* VAR_0, int VAR_1)
{
    struct dns64_env* VAR_2 = (struct dns64_env*)VAR_0->modinfo[VAR_1];
    if (!VAR_2)
        return 0;
    return sizeof(*VAR_2);
}
