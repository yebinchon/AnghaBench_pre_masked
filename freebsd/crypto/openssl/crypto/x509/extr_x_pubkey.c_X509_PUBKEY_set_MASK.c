
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* pkey; } ;
typedef TYPE_2__ X509_PUBKEY ;
struct TYPE_13__ {TYPE_1__* ameth; } ;
struct TYPE_11__ {int (* pub_encode ) (TYPE_2__*,TYPE_3__*) ;} ;
typedef TYPE_3__ EVP_PKEY ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;

int FUNC_5(X509_PUBKEY **VAR_4, EVP_PKEY *VAR_5)
{
    X509_PUBKEY *VAR_6 = ((void*)0);

    if (VAR_4 == ((void*)0))
        return 0;

    if ((VAR_6 = FUNC_2()) == ((void*)0))
        goto error;

    if (VAR_5->ameth) {
        if (VAR_5->ameth->pub_encode) {
            if (!VAR_5->ameth->pub_encode(VAR_6, VAR_5)) {
                FUNC_3(VAR_0,
                        VAR_2);
                goto error;
            }
        } else {
            FUNC_3(VAR_0, VAR_1);
            goto error;
        }
    } else {
        FUNC_3(VAR_0, VAR_3);
        goto error;
    }

    FUNC_1(*VAR_4);
    *VAR_4 = VAR_6;
    VAR_6->pkey = VAR_5;
    FUNC_0(VAR_5);
    return 1;

 error:
    FUNC_1(VAR_6);
    return 0;
}
