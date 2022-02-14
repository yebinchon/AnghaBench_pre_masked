
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ ssl; scalar_t__ ctx; } ;
typedef TYPE_1__ SSL_CONF_CTX ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,char const*,int ) ;

__attribute__((used)) static int FUNC_2(SSL_CONF_CTX *VAR_2, const char *VAR_3)
{
    int VAR_4 = 1;
    if (!(VAR_2->flags & VAR_0))
        return -2;
    if (VAR_2->ctx)
        VAR_4 = FUNC_0(VAR_2->ctx, VAR_3, VAR_1);
    if (VAR_2->ssl)
        VAR_4 = FUNC_1(VAR_2->ssl, VAR_3, VAR_1);
    return VAR_4 > 0;
}
