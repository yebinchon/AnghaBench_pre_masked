
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssl_conf_name_st {size_t cmd_count; struct ssl_conf_name_st* cmds; struct ssl_conf_name_st* arg; struct ssl_conf_name_st* cmd; struct ssl_conf_name_st* name; } ;
typedef int CONF_IMODULE ;


 int FUNC_0 (struct ssl_conf_name_st*) ;
 struct ssl_conf_name_st* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_1(CONF_IMODULE *VAR_2)
{
    size_t VAR_3, VAR_4;
    if (VAR_0 == ((void*)0))
        return;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        struct ssl_conf_name_st *VAR_5 = VAR_0 + VAR_3;

        FUNC_0(VAR_5->name);
        for (VAR_4 = 0; VAR_4 < VAR_5->cmd_count; VAR_4++) {
            FUNC_0(VAR_5->cmds[VAR_4].cmd);
            FUNC_0(VAR_5->cmds[VAR_4].arg);
        }
        FUNC_0(VAR_5->cmds);
    }
    FUNC_0(VAR_0);
    VAR_0 = ((void*)0);
    VAR_1 = 0;
}
