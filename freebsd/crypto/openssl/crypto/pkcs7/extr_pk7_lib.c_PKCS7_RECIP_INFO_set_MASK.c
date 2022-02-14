
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_12__ {TYPE_2__* ameth; } ;
struct TYPE_11__ {int * cert; TYPE_1__* issuer_and_serial; int version; } ;
struct TYPE_10__ {int (* pkey_ctrl ) (TYPE_4__*,int ,int ,TYPE_3__*) ;} ;
struct TYPE_9__ {int serial; int issuer; } ;
typedef TYPE_3__ PKCS7_RECIP_INFO ;
typedef TYPE_4__ EVP_PKEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int ,int ,TYPE_3__*) ;

int FUNC_10(PKCS7_RECIP_INFO *VAR_4, X509 *VAR_5)
{
    int VAR_6;
    EVP_PKEY *VAR_7 = ((void*)0);
    if (!FUNC_2(VAR_4->version, 0))
        return 0;
    if (!FUNC_4(&VAR_4->issuer_and_serial->issuer,
                       FUNC_6(VAR_5)))
        return 0;

    FUNC_1(VAR_4->issuer_and_serial->serial);
    if (!(VAR_4->issuer_and_serial->serial =
          FUNC_0(FUNC_7(VAR_5))))
        return 0;

    VAR_7 = FUNC_5(VAR_5);

    if (!VAR_7 || !VAR_7->ameth || !VAR_7->ameth->pkey_ctrl) {
        FUNC_3(VAR_1,
                 VAR_3);
        goto err;
    }

    VAR_6 = VAR_7->ameth->pkey_ctrl(VAR_7, VAR_0, 0, VAR_4);
    if (VAR_6 == -2) {
        FUNC_3(VAR_1,
                 VAR_3);
        goto err;
    }
    if (VAR_6 <= 0) {
        FUNC_3(VAR_1,
                 VAR_2);
        goto err;
    }

    FUNC_8(VAR_5);
    VAR_4->cert = VAR_5;

    return 1;

 err:
    return 0;
}
