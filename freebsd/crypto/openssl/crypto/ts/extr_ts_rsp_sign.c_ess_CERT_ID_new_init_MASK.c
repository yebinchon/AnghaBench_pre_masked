
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_14__ {int serial; int issuer; } ;
struct TYPE_13__ {TYPE_8__* issuer_serial; int hash; } ;
struct TYPE_11__ {int * dirn; } ;
struct TYPE_12__ {TYPE_1__ d; int type; } ;
typedef TYPE_2__ GENERAL_NAME ;
typedef TYPE_3__ ESS_CERT_ID ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 TYPE_8__* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int ,unsigned char*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,TYPE_2__*) ;

__attribute__((used)) static ESS_CERT_ID *FUNC_16(X509 *VAR_4, int VAR_5)
{
    ESS_CERT_ID *VAR_6 = ((void*)0);
    GENERAL_NAME *VAR_7 = ((void*)0);
    unsigned char VAR_8[VAR_2];


    FUNC_11(VAR_4, -1, 0);
    if ((VAR_6 = FUNC_4()) == ((void*)0))
        goto err;
    FUNC_12(VAR_4, FUNC_6(), VAR_8, ((void*)0));
    if (!FUNC_2(VAR_6->hash, VAR_8, VAR_2))
        goto err;


    if (VAR_5) {
        if (VAR_6->issuer_serial == ((void*)0)
            && (VAR_6->issuer_serial = FUNC_5()) == ((void*)0))
            goto err;
        if ((VAR_7 = FUNC_8()) == ((void*)0))
            goto err;
        VAR_7->type = VAR_1;
        if ((VAR_7->d.dirn = FUNC_10(FUNC_13(VAR_4))) == ((void*)0))
            goto err;
        if (!FUNC_15(VAR_6->issuer_serial->issuer, VAR_7))
            goto err;
        VAR_7 = ((void*)0);
        FUNC_1(VAR_6->issuer_serial->serial);
        if (!(VAR_6->issuer_serial->serial =
              FUNC_0(FUNC_14(VAR_4))))
            goto err;
    }

    return VAR_6;
 err:
    FUNC_7(VAR_7);
    FUNC_3(VAR_6);
    FUNC_9(VAR_3, VAR_0);
    return ((void*)0);
}
