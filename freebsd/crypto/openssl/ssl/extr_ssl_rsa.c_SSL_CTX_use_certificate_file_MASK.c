
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int default_passwd_callback_userdata; int default_passwd_callback; } ;
typedef TYPE_1__ SSL_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;

int FUNC_9(SSL_CTX *VAR_8, const char *VAR_9, int VAR_10)
{
    int VAR_11;
    BIO *VAR_12;
    int VAR_13 = 0;
    X509 *VAR_14 = ((void*)0);

    VAR_12 = FUNC_1(FUNC_3());
    if (VAR_12 == ((void*)0)) {
        FUNC_6(VAR_6, VAR_1);
        goto end;
    }

    if (FUNC_2(VAR_12, VAR_9) <= 0) {
        FUNC_6(VAR_6, VAR_3);
        goto end;
    }
    if (VAR_10 == VAR_4) {
        VAR_11 = VAR_0;
        VAR_14 = FUNC_8(VAR_12, ((void*)0));
    } else if (VAR_10 == VAR_5) {
        VAR_11 = VAR_2;
        VAR_14 = FUNC_4(VAR_12, ((void*)0), VAR_8->default_passwd_callback,
                              VAR_8->default_passwd_callback_userdata);
    } else {
        FUNC_6(VAR_6, VAR_7);
        goto end;
    }

    if (VAR_14 == ((void*)0)) {
        FUNC_6(VAR_6, VAR_11);
        goto end;
    }

    VAR_13 = FUNC_5(VAR_8, VAR_14);
 end:
    FUNC_7(VAR_14);
    FUNC_0(VAR_12);
    return VAR_13;
}
