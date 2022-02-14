
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value_type; } ;
typedef TYPE_1__ ssl_conf_cmd_tbl ;
typedef int SSL_CONF_CTX ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *,char const**) ;

int FUNC_2(SSL_CONF_CTX *VAR_1, const char *VAR_2)
{
    if (FUNC_1(VAR_1, &VAR_2)) {
        const ssl_conf_cmd_tbl *VAR_3;
        VAR_3 = FUNC_0(VAR_1, VAR_2);
        if (VAR_3)
            return VAR_3->value_type;
    }
    return VAR_0;
}
