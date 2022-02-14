
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* algor; } ;
typedef TYPE_3__ X509_PUBKEY ;
struct TYPE_15__ {TYPE_2__* ameth; } ;
struct TYPE_13__ {int (* pub_decode ) (TYPE_4__*,TYPE_3__*) ;} ;
struct TYPE_12__ {int algorithm; } ;
typedef TYPE_4__ EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY **VAR_5, X509_PUBKEY *VAR_6)
{
    EVP_PKEY *VAR_7 = FUNC_1();

    if (VAR_7 == ((void*)0)) {
        FUNC_4(VAR_1, VAR_0);
        return -1;
    }

    if (!FUNC_2(VAR_7, FUNC_3(VAR_6->algor->algorithm))) {
        FUNC_4(VAR_1, VAR_4);
        goto error;
    }

    if (VAR_7->ameth->pub_decode) {





        if (!VAR_7->ameth->pub_decode(VAR_7, VAR_6)) {
            FUNC_4(VAR_1, VAR_3);
            goto error;
        }
    } else {
        FUNC_4(VAR_1, VAR_2);
        goto error;
    }

    *VAR_5 = VAR_7;
    return 1;

 error:
    FUNC_0(VAR_7);
    return 0;
}
