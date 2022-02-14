
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ value_type; int (* cmd ) (TYPE_2__*,char const*) ;} ;
typedef TYPE_1__ ssl_conf_cmd_tbl ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ SSL_CONF_CTX ;


 int FUNC_0 (int,char*,char const*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__ const*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_2__*,char const**) ;
 int FUNC_5 (TYPE_2__*,char const*) ;

int FUNC_6(SSL_CONF_CTX *VAR_6, const char *VAR_7, const char *VAR_8)
{
    const ssl_conf_cmd_tbl *VAR_9;
    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_2, VAR_4);
        return 0;
    }

    if (!FUNC_4(VAR_6, &VAR_7))
        return -2;

    VAR_9 = FUNC_3(VAR_6, VAR_7);

    if (VAR_9) {
        int VAR_10;
        if (VAR_9->value_type == VAR_1) {
            return FUNC_2(VAR_6, VAR_9);
        }
        if (VAR_8 == ((void*)0))
            return -3;
        VAR_10 = VAR_9->cmd(VAR_6, VAR_8);
        if (VAR_10 > 0)
            return 2;
        if (VAR_10 == -2)
            return -2;
        if (VAR_6->flags & VAR_0) {
            FUNC_1(VAR_2, VAR_3);
            FUNC_0(4, "cmd=", VAR_7, ", value=", VAR_8);
        }
        return 0;
    }

    if (VAR_6->flags & VAR_0) {
        FUNC_1(VAR_2, VAR_5);
        FUNC_0(2, "cmd=", VAR_7);
    }

    return -2;
}
