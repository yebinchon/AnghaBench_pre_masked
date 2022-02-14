
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int enc_flag; int conv_form; int * group; int version; int * pub_key; } ;
struct TYPE_11__ {TYPE_9__* publicKey; int * parameters; TYPE_9__* privateKey; int version; } ;
typedef TYPE_1__ EC_PRIVATEKEY ;
typedef TYPE_2__ EC_KEY ;


 TYPE_9__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_9__*,unsigned char*,size_t) ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *) ;
 size_t FUNC_3 (TYPE_2__*,int ,unsigned char**,int *) ;
 size_t FUNC_4 (TYPE_2__*,unsigned char**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (unsigned char*,size_t) ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 (TYPE_1__*,unsigned char**) ;

int FUNC_11(EC_KEY *VAR_7, unsigned char **VAR_8)
{
    int VAR_9 = 0, VAR_10 = 0;
    unsigned char *VAR_11= ((void*)0), *VAR_12= ((void*)0);
    size_t VAR_13 = 0, VAR_14 = 0;

    EC_PRIVATEKEY *VAR_15 = ((void*)0);

    if (VAR_7 == ((void*)0) || VAR_7->group == ((void*)0) ||
        (!(VAR_7->enc_flag & VAR_3) && VAR_7->pub_key == ((void*)0))) {
        FUNC_7(VAR_1, VAR_6);
        goto err;
    }

    if ((VAR_15 = FUNC_6()) == ((void*)0)) {
        FUNC_7(VAR_1, VAR_5);
        goto err;
    }

    VAR_15->version = VAR_7->version;

    VAR_13 = FUNC_4(VAR_7, &VAR_11);

    if (VAR_13 == 0) {
        FUNC_7(VAR_1, VAR_4);
        goto err;
    }

    FUNC_1(VAR_15->privateKey, VAR_11, VAR_13);
    VAR_11 = ((void*)0);

    if (!(VAR_7->enc_flag & VAR_2)) {
        if ((VAR_15->parameters =
             FUNC_2(VAR_7->group,
                                        VAR_15->parameters)) == ((void*)0)) {
            FUNC_7(VAR_1, VAR_4);
            goto err;
        }
    }

    if (!(VAR_7->enc_flag & VAR_3)) {
        VAR_15->publicKey = FUNC_0();
        if (VAR_15->publicKey == ((void*)0)) {
            FUNC_7(VAR_1, VAR_5);
            goto err;
        }

        VAR_14 = FUNC_3(VAR_7, VAR_7->conv_form, &VAR_12, ((void*)0));

        if (VAR_14 == 0) {
            FUNC_7(VAR_1, VAR_4);
            goto err;
        }

        VAR_15->publicKey->flags &= ~(VAR_0 | 0x07);
        VAR_15->publicKey->flags |= VAR_0;
        FUNC_1(VAR_15->publicKey, VAR_12, VAR_14);
        VAR_12 = ((void*)0);
    }

    if ((VAR_9 = FUNC_10(VAR_15, VAR_8)) == 0) {
        FUNC_7(VAR_1, VAR_4);
        goto err;
    }
    VAR_10 = 1;
 err:
    FUNC_8(VAR_11, VAR_13);
    FUNC_9(VAR_12);
    FUNC_5(VAR_15);
    return (VAR_10 ? VAR_9 : 0);
}
