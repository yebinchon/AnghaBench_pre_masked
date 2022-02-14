
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int cfg; void** modinfo; } ;
struct dns64_env {int ignore_aaaa; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct dns64_env*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct module_env* VAR_0, int VAR_1)
{
    struct dns64_env* VAR_2 =
        (struct dns64_env*)FUNC_0(1, sizeof(struct dns64_env));
    if (!VAR_2) {
        FUNC_2("malloc failure");
        return 0;
    }
    VAR_0->modinfo[VAR_1] = (void*)VAR_2;
    FUNC_3(&VAR_2->ignore_aaaa);
    if (!FUNC_1(VAR_2, VAR_0->cfg)) {
        FUNC_2("dns64: could not apply configuration settings.");
        return 0;
    }
    return 1;
}
