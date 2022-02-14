
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_21__ {TYPE_7__* sign; TYPE_4__* enveloped; TYPE_2__* signed_and_enveloped; TYPE_10__* data; } ;
struct TYPE_22__ {TYPE_8__ d; int type; } ;
struct TYPE_20__ {TYPE_6__* contents; } ;
struct TYPE_18__ {TYPE_10__* data; } ;
struct TYPE_19__ {TYPE_5__ d; } ;
struct TYPE_17__ {TYPE_3__* enc_data; } ;
struct TYPE_16__ {TYPE_10__* enc_data; } ;
struct TYPE_15__ {TYPE_1__* enc_data; } ;
struct TYPE_14__ {TYPE_10__* enc_data; } ;
struct TYPE_13__ {unsigned char* data; int flags; } ;
typedef TYPE_9__ PKCS7 ;
typedef TYPE_10__ ASN1_OCTET_STRING ;


 TYPE_10__* FUNC_0 () ;
 int VAR_0 ;




 int FUNC_1 (int ) ;

int FUNC_2(unsigned char ***VAR_1, PKCS7 *VAR_2)
{
    ASN1_OCTET_STRING *VAR_3 = ((void*)0);

    switch (FUNC_1(VAR_2->type)) {
    case 131:
        VAR_3 = VAR_2->d.data;
        break;

    case 128:
        VAR_3 = VAR_2->d.signed_and_enveloped->enc_data->enc_data;
        if (VAR_3 == ((void*)0)) {
            VAR_3 = FUNC_0();
            VAR_2->d.signed_and_enveloped->enc_data->enc_data = VAR_3;
        }
        break;

    case 130:
        VAR_3 = VAR_2->d.enveloped->enc_data->enc_data;
        if (VAR_3 == ((void*)0)) {
            VAR_3 = FUNC_0();
            VAR_2->d.enveloped->enc_data->enc_data = VAR_3;
        }
        break;

    case 129:
        VAR_3 = VAR_2->d.sign->contents->d.data;
        break;

    default:
        VAR_3 = ((void*)0);
        break;
    }

    if (VAR_3 == ((void*)0))
        return 0;

    VAR_3->flags |= VAR_0;
    *VAR_1 = &VAR_3->data;

    return 1;
}
