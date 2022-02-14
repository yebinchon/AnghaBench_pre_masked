
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_22__ {int version; } ;
struct TYPE_21__ {TYPE_1__* enc_data; int version; } ;
struct TYPE_19__ {TYPE_12__* digest; TYPE_11__* encrypted; TYPE_10__* enveloped; TYPE_7__* signed_and_enveloped; int * data; TYPE_8__* sign; } ;
struct TYPE_20__ {TYPE_4__ d; int * type; } ;
struct TYPE_18__ {void* content_type; } ;
struct TYPE_17__ {void* content_type; } ;
struct TYPE_16__ {void* content_type; } ;
struct TYPE_15__ {int version; } ;
struct TYPE_14__ {TYPE_3__* enc_data; int version; } ;
struct TYPE_13__ {TYPE_2__* enc_data; int version; } ;
typedef TYPE_5__ PKCS7 ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,int) ;
 int * FUNC_1 () ;






 void* FUNC_2 (int const) ;
 TYPE_12__* FUNC_3 () ;
 TYPE_11__* FUNC_4 () ;
 TYPE_10__* FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_8__*) ;
 TYPE_8__* FUNC_7 () ;
 TYPE_7__* FUNC_8 () ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(PKCS7 *VAR_2, int VAR_3)
{
    ASN1_OBJECT *VAR_4;




    VAR_4 = FUNC_2(VAR_3);

    switch (VAR_3) {
    case 129:
        VAR_2->type = VAR_4;
        if ((VAR_2->d.sign = FUNC_7()) == ((void*)0))
            goto err;
        if (!FUNC_0(VAR_2->d.sign->version, 1)) {
            FUNC_6(VAR_2->d.sign);
            VAR_2->d.sign = ((void*)0);
            goto err;
        }
        break;
    case 133:
        VAR_2->type = VAR_4;
        if ((VAR_2->d.data = FUNC_1()) == ((void*)0))
            goto err;
        break;
    case 128:
        VAR_2->type = VAR_4;
        if ((VAR_2->d.signed_and_enveloped = FUNC_8())
            == ((void*)0))
            goto err;
        if (!FUNC_0(VAR_2->d.signed_and_enveloped->version, 1))
            goto err;
        VAR_2->d.signed_and_enveloped->enc_data->content_type
            = FUNC_2(133);
        break;
    case 130:
        VAR_2->type = VAR_4;
        if ((VAR_2->d.enveloped = FUNC_5())
            == ((void*)0))
            goto err;
        if (!FUNC_0(VAR_2->d.enveloped->version, 0))
            goto err;
        VAR_2->d.enveloped->enc_data->content_type = FUNC_2(133);
        break;
    case 131:
        VAR_2->type = VAR_4;
        if ((VAR_2->d.encrypted = FUNC_4())
            == ((void*)0))
            goto err;
        if (!FUNC_0(VAR_2->d.encrypted->version, 0))
            goto err;
        VAR_2->d.encrypted->enc_data->content_type = FUNC_2(133);
        break;

    case 132:
        VAR_2->type = VAR_4;
        if ((VAR_2->d.digest = FUNC_3())
            == ((void*)0))
            goto err;
        if (!FUNC_0(VAR_2->d.digest->version, 0))
            goto err;
        break;
    default:
        FUNC_9(VAR_0, VAR_1);
        goto err;
    }
    return 1;
 err:
    return 0;
}
