
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* enveloped; TYPE_1__* signed_and_enveloped; } ;
struct TYPE_11__ {TYPE_3__ d; int type; } ;
struct TYPE_10__ {int const* cipher; } ;
struct TYPE_8__ {TYPE_4__* enc_data; } ;
struct TYPE_7__ {TYPE_4__* enc_data; } ;
typedef TYPE_4__ PKCS7_ENC_CONTENT ;
typedef TYPE_5__ PKCS7 ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int const*) ;


 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(PKCS7 *VAR_4, const EVP_CIPHER *VAR_5)
{
    int VAR_6;
    PKCS7_ENC_CONTENT *VAR_7;

    VAR_6 = FUNC_1(VAR_4->type);
    switch (VAR_6) {
    case 128:
        VAR_7 = VAR_4->d.signed_and_enveloped->enc_data;
        break;
    case 129:
        VAR_7 = VAR_4->d.enveloped->enc_data;
        break;
    default:
        FUNC_2(VAR_1, VAR_3);
        return 0;
    }


    VAR_6 = FUNC_0(VAR_5);
    if (VAR_6 == VAR_0) {
        FUNC_2(VAR_1,
                 VAR_2);
        return 0;
    }

    VAR_7->cipher = VAR_5;
    return 1;
}
