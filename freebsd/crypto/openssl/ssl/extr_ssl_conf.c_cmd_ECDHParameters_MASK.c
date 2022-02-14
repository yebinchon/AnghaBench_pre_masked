
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ ssl; scalar_t__ ctx; } ;
typedef TYPE_1__ SSL_CONF_CTX ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(SSL_CONF_CTX *VAR_3, const char *VAR_4)
{
    int VAR_5 = 1;
    EC_KEY *VAR_6;
    int VAR_7;


    if ((VAR_3->flags & VAR_2)
            && (FUNC_6(VAR_4, "+automatic") == 0
                || FUNC_6(VAR_4, "automatic") == 0))
        return 1;
    if ((VAR_3->flags & VAR_1) &&
        FUNC_7(VAR_4, "auto") == 0)
        return 1;

    VAR_7 = FUNC_2(VAR_4);
    if (VAR_7 == VAR_0)
        VAR_7 = FUNC_3(VAR_4);
    if (VAR_7 == 0)
        return 0;
    VAR_6 = FUNC_1(VAR_7);
    if (!VAR_6)
        return 0;
    if (VAR_3->ctx)
        VAR_5 = FUNC_4(VAR_3->ctx, VAR_6);
    else if (VAR_3->ssl)
        VAR_5 = FUNC_5(VAR_3->ssl, VAR_6);
    FUNC_0(VAR_6);

    return VAR_5 > 0;
}
