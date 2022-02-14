
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* cipher; } ;
struct TYPE_7__ {int (* get_asn1_parameters ) (TYPE_2__*,int *) ;int flags; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;
typedef int ASN1_TYPE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;

 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

int FUNC_4(EVP_CIPHER_CTX *VAR_4, ASN1_TYPE *VAR_5)
{
    int VAR_6;

    if (VAR_4->cipher->get_asn1_parameters != ((void*)0))
        VAR_6 = VAR_4->cipher->get_asn1_parameters(VAR_4, VAR_5);
    else if (VAR_4->cipher->flags & VAR_0) {
        switch (FUNC_0(VAR_4)) {

        case 129:
            VAR_6 = 1;
            break;

        case 131:
        case 132:
        case 128:
        case 130:
            VAR_6 = -2;
            break;

        default:
            VAR_6 = FUNC_1(VAR_4, VAR_5);
            break;
        }
    } else
        VAR_6 = -1;
    if (VAR_6 <= 0)
        FUNC_2(VAR_1, VAR_6 == -2 ?
               VAR_3 :
               VAR_2);
    if (VAR_6 < -1)
        VAR_6 = -1;
    return VAR_6;
}
