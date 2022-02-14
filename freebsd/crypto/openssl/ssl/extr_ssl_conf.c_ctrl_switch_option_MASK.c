
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int option_value; int name_flags; } ;
typedef TYPE_1__ ssl_switch_tbl ;
typedef int ssl_conf_cmd_tbl ;
typedef int SSL_CONF_CTX ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int const* VAR_1 ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(SSL_CONF_CTX *VAR_2, const ssl_conf_cmd_tbl * VAR_3)
{

    size_t VAR_4 = VAR_3 - VAR_1;
    const ssl_switch_tbl *VAR_5;

    if (VAR_4 >= FUNC_0(VAR_0))
        return 0;

    VAR_5 = VAR_0 + VAR_4;
    FUNC_1(VAR_2, VAR_5->name_flags, VAR_5->option_value, 1);
    return 1;
}
