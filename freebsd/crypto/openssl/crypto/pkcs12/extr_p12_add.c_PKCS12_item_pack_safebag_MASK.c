
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int octet; } ;
struct TYPE_12__ {TYPE_2__ value; void* type; } ;
struct TYPE_9__ {TYPE_4__* bag; } ;
struct TYPE_11__ {void* type; TYPE_1__ value; } ;
typedef TYPE_3__ PKCS12_SAFEBAG ;
typedef TYPE_4__ PKCS12_BAGS ;
typedef int ASN1_ITEM ;


 int FUNC_0 (void*,int const*,int *) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 () ;
 int VAR_1 ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

PKCS12_SAFEBAG *FUNC_6(void *VAR_2, const ASN1_ITEM *VAR_3,
                                         int VAR_4, int VAR_5)
{
    PKCS12_BAGS *VAR_6;
    PKCS12_SAFEBAG *VAR_7;

    if ((VAR_6 = FUNC_3()) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        return ((void*)0);
    }
    VAR_6->type = FUNC_1(VAR_4);
    if (!FUNC_0(VAR_2, VAR_3, &VAR_6->value.octet)) {
        FUNC_5(VAR_1, VAR_0);
        goto err;
    }
    if ((VAR_7 = FUNC_4()) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        goto err;
    }
    VAR_7->value.bag = VAR_6;
    VAR_7->type = FUNC_1(VAR_5);
    return VAR_7;

 err:
    FUNC_2(VAR_6);
    return ((void*)0);
}
