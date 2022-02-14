
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* method; } ;
struct TYPE_9__ {TYPE_1__* method; } ;
struct TYPE_8__ {scalar_t__ ssl_accept; scalar_t__ ssl_connect; } ;
typedef TYPE_1__ SSL_METHOD ;
typedef TYPE_2__ SSL_CTX ;
typedef int SSL_CONF_CTX ;
typedef int SSL_CONF_CMD ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_7 (int *,char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (size_t,char const**,size_t*) ;
 int FUNC_10 (int const*,size_t,char**,char**) ;
 int FUNC_11 (char const*,size_t*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_12(SSL *VAR_11, SSL_CTX *VAR_12, const char *VAR_13, int VAR_14)
{
    SSL_CONF_CTX *VAR_15 = ((void*)0);
    size_t VAR_16, VAR_17, VAR_18;
    int VAR_19 = 0;
    unsigned int VAR_20;
    const SSL_METHOD *VAR_21;
    const SSL_CONF_CMD *VAR_22;

    if (VAR_11 == ((void*)0) && VAR_12 == ((void*)0)) {
        FUNC_8(VAR_6, VAR_0);
        goto err;
    }

    if (VAR_13 == ((void*)0) && VAR_14)
        VAR_13 = "system_default";
    if (!FUNC_11(VAR_13, &VAR_17)) {
        if (!VAR_14) {
            FUNC_8(VAR_6, VAR_8);
            FUNC_0(2, "name=", VAR_13);
        }
        goto err;
    }
    VAR_22 = FUNC_9(VAR_17, &VAR_13, &VAR_18);
    VAR_15 = FUNC_3();
    if (VAR_15 == ((void*)0))
        goto err;
    VAR_20 = VAR_3;
    if (!VAR_14)
        VAR_20 |= VAR_1 | VAR_4;
    if (VAR_11 != ((void*)0)) {
        VAR_21 = VAR_11->method;
        FUNC_5(VAR_15, VAR_11);
    } else {
        VAR_21 = VAR_12->method;
        FUNC_6(VAR_15, VAR_12);
    }
    if (VAR_21->ssl_accept != VAR_10)
        VAR_20 |= VAR_5;
    if (VAR_21->ssl_connect != VAR_10)
        VAR_20 |= VAR_2;
    FUNC_4(VAR_15, VAR_20);
    for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
        char *VAR_23, *VAR_24;

        FUNC_10(VAR_22, VAR_16, &VAR_23, &VAR_24);
        VAR_19 = FUNC_7(VAR_15, VAR_23, VAR_24);
        if (VAR_19 <= 0) {
            if (VAR_19 == -2)
                FUNC_8(VAR_6, VAR_9);
            else
                FUNC_8(VAR_6, VAR_7);
            FUNC_0(6, "section=", VAR_13, ", cmd=", VAR_23,
                               ", arg=", VAR_24);
            goto err;
        }
    }
    VAR_19 = FUNC_1(VAR_15);
 err:
    FUNC_2(VAR_15);
    return VAR_19 <= 0 ? 0 : 1;
}
