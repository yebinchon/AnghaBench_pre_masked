
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int store_ctx; } ;
typedef TYPE_1__ X509_LOOKUP ;
typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_3 ;
 int * FUNC_7 (int *,int *,int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int * FUNC_11 (int *,int *) ;

int FUNC_12(X509_LOOKUP *VAR_9, const char *VAR_10, int VAR_11)
{
    int VAR_12 = 0;
    BIO *VAR_13 = ((void*)0);
    int VAR_14, VAR_15 = 0;
    X509 *VAR_16 = ((void*)0);

    VAR_13 = FUNC_1(FUNC_3());

    if ((VAR_13 == ((void*)0)) || (FUNC_2(VAR_13, VAR_10) <= 0)) {
        FUNC_10(VAR_6, VAR_2);
        goto err;
    }

    if (VAR_11 == VAR_5) {
        for (;;) {
            VAR_16 = FUNC_7(VAR_13, ((void*)0), ((void*)0), "");
            if (VAR_16 == ((void*)0)) {
                if ((FUNC_4(FUNC_6()) ==
                     VAR_3) && (VAR_15 > 0)) {
                    FUNC_5();
                    break;
                } else {
                    FUNC_10(VAR_6, VAR_1);
                    goto err;
                }
            }
            VAR_14 = FUNC_8(VAR_9->store_ctx, VAR_16);
            if (!VAR_14)
                goto err;
            VAR_15++;
            FUNC_9(VAR_16);
            VAR_16 = ((void*)0);
        }
        VAR_12 = VAR_15;
    } else if (VAR_11 == VAR_4) {
        VAR_16 = FUNC_11(VAR_13, ((void*)0));
        if (VAR_16 == ((void*)0)) {
            FUNC_10(VAR_6, VAR_0);
            goto err;
        }
        VAR_14 = FUNC_8(VAR_9->store_ctx, VAR_16);
        if (!VAR_14)
            goto err;
        VAR_12 = VAR_14;
    } else {
        FUNC_10(VAR_6, VAR_7);
        goto err;
    }
    if (VAR_12 == 0)
        FUNC_10(VAR_6, VAR_8);
 err:
    FUNC_9(VAR_16);
    FUNC_0(VAR_13);
    return VAR_12;
}
