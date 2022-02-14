
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* public_key; int algor; } ;
typedef TYPE_2__ X509_PUBKEY ;
struct TYPE_4__ {unsigned char* data; int length; int flags; } ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ,int *,int,void*) ;

int FUNC_2(X509_PUBKEY *VAR_1, ASN1_OBJECT *VAR_2,
                           int VAR_3, void *VAR_4,
                           unsigned char *VAR_5, int VAR_6)
{
    if (!FUNC_1(VAR_1->algor, VAR_2, VAR_3, VAR_4))
        return 0;
    if (VAR_5) {
        FUNC_0(VAR_1->public_key->data);
        VAR_1->public_key->data = VAR_5;
        VAR_1->public_key->length = VAR_6;

        VAR_1->public_key->flags &= ~(VAR_0 | 0x07);
        VAR_1->public_key->flags |= VAR_0;
    }
    return 1;
}
