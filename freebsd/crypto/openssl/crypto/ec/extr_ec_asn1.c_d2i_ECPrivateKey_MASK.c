
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* meth; } ;
struct TYPE_18__ {int enc_flag; TYPE_9__* group; int * pub_key; int version; } ;
struct TYPE_17__ {int * publicKey; int * privateKey; int version; scalar_t__ parameters; } ;
struct TYPE_16__ {scalar_t__ (* keygenpub ) (TYPE_3__*) ;} ;
typedef TYPE_2__ EC_PRIVATEKEY ;
typedef TYPE_3__ EC_KEY ;
typedef int ASN1_OCTET_STRING ;


 unsigned char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_9__*) ;
 TYPE_9__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,unsigned char const*,int,int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_11 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_12 (int *,unsigned char const**,long) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;

EC_KEY *FUNC_14(EC_KEY **VAR_5, const unsigned char **VAR_6, long VAR_7)
{
    EC_KEY *VAR_8 = ((void*)0);
    EC_PRIVATEKEY *VAR_9 = ((void*)0);
    const unsigned char *VAR_10 = *VAR_6;

    if ((VAR_9 = FUNC_12(((void*)0), &VAR_10, VAR_7)) == ((void*)0)) {
        FUNC_11(VAR_0, VAR_3);
        return ((void*)0);
    }

    if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0)) {
        if ((VAR_8 = FUNC_5()) == ((void*)0)) {
            FUNC_11(VAR_0, VAR_4);
            goto err;
        }
    } else
        VAR_8 = *VAR_5;

    if (VAR_9->parameters) {
        FUNC_2(VAR_8->group);
        VAR_8->group = FUNC_3(VAR_9->parameters);
    }

    if (VAR_8->group == ((void*)0)) {
        FUNC_11(VAR_0, VAR_3);
        goto err;
    }

    VAR_8->version = VAR_9->version;

    if (VAR_9->privateKey) {
        ASN1_OCTET_STRING *VAR_11 = VAR_9->privateKey;
        if (FUNC_7(VAR_8, FUNC_0(VAR_11),
                            FUNC_1(VAR_11)) == 0)
            goto err;
    } else {
        FUNC_11(VAR_0, VAR_2);
        goto err;
    }

    FUNC_8(VAR_8->pub_key);
    VAR_8->pub_key = FUNC_9(VAR_8->group);
    if (VAR_8->pub_key == ((void*)0)) {
        FUNC_11(VAR_0, VAR_3);
        goto err;
    }

    if (VAR_9->publicKey) {
        const unsigned char *VAR_12;
        int VAR_13;

        VAR_12 = FUNC_0(VAR_9->publicKey);
        VAR_13 = FUNC_1(VAR_9->publicKey);
        if (!FUNC_6(VAR_8, VAR_12, VAR_13, ((void*)0))) {
            FUNC_11(VAR_0, VAR_3);
            goto err;
        }
    } else {
        if (VAR_8->group->meth->keygenpub == ((void*)0)
            || VAR_8->group->meth->keygenpub(VAR_8) == 0)
                goto err;

        VAR_8->enc_flag |= VAR_1;
    }

    if (VAR_5)
        *VAR_5 = VAR_8;
    FUNC_10(VAR_9);
    *VAR_6 = VAR_10;
    return VAR_8;

 err:
    if (VAR_5 == ((void*)0) || *VAR_5 != VAR_8)
        FUNC_4(VAR_8);
    FUNC_10(VAR_9);
    return ((void*)0);
}
