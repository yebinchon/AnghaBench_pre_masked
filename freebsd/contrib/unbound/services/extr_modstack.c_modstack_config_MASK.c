
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_stack {int num; struct module_func_block** mod; } ;
struct module_func_block {int dummy; } ;
typedef int md ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,...) ;
 struct module_func_block* FUNC_3 (char const**) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 scalar_t__* FUNC_5 (char*,char) ;
 int FUNC_6 (int ,char*,char const*) ;

int
FUNC_7(struct module_stack* VAR_2, const char* VAR_3)
{
        int VAR_4;
        FUNC_6(VAR_1, "module config: \"%s\"", VAR_3);
        VAR_2->num = FUNC_1(VAR_3);
        if(VAR_2->num == 0) {
                FUNC_2("error: no modules specified");
                return 0;
        }
        if(VAR_2->num > VAR_0) {
                FUNC_2("error: too many modules (%d max %d)",
                        VAR_2->num, VAR_0);
                return 0;
        }
        VAR_2->mod = (struct module_func_block**)FUNC_0((size_t)
                VAR_2->num, sizeof(struct module_func_block*));
        if(!VAR_2->mod) {
                FUNC_2("out of memory");
                return 0;
        }
        for(VAR_4=0; VAR_4<VAR_2->num; VAR_4++) {
                VAR_2->mod[VAR_4] = FUNC_3(&VAR_3);
                if(!VAR_2->mod[VAR_4]) {
   char VAR_5[256];
   FUNC_4(VAR_5, sizeof(VAR_5), "%s", VAR_3);
   if(FUNC_5(VAR_5, ' ')) *(FUNC_5(VAR_5, ' ')) = 0;
   if(FUNC_5(VAR_5, '\t')) *(FUNC_5(VAR_5, '\t')) = 0;
                        FUNC_2("Unknown value in module-config, module: '%s'."
    " This module is not present (not compiled in),"
    " See the list of linked modules with unbound -h",
                                VAR_5);
                        return 0;
                }
        }
        return 1;
}
