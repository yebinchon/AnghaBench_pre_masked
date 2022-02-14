
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* cipher; } ;
struct TYPE_8__ {int (* set_asn1_parameters ) (TYPE_2__*,int *) ;int flags; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;
typedef int ASN1_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;

 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*,int *) ;

int FUNC_6(EVP_CIPHER_CTX *VAR_6, ASN1_TYPE *VAR_7)
{
    int VAR_8;

    if (VAR_6->cipher->set_asn1_parameters != ((void*)0))
        VAR_8 = VAR_6->cipher->set_asn1_parameters(VAR_6, VAR_7);
    else if (VAR_6->cipher->flags & VAR_1) {
        switch (FUNC_1(VAR_6)) {
        case 129:
            if (FUNC_2(VAR_6) == VAR_4)
                FUNC_0(VAR_7, VAR_5, ((void*)0));
            VAR_8 = 1;
            break;

        case 131:
        case 132:
        case 128:
        case 130:
            VAR_8 = -2;
            break;

        default:
            VAR_8 = FUNC_3(VAR_6, VAR_7);
        }
    } else
        VAR_8 = -1;
    if (VAR_8 <= 0)
        FUNC_4(VAR_2, VAR_8 == -2 ?
               VAR_0 :
               VAR_3);
    if (VAR_8 < -1)
        VAR_8 = -1;
    return VAR_8;
}
