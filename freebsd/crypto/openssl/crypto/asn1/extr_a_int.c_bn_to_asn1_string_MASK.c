
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int type; int length; scalar_t__* data; } ;
typedef int BIGNUM ;
typedef TYPE_1__ ASN1_STRING ;
typedef TYPE_1__ ASN1_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int const*,scalar_t__*) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ASN1_STRING *FUNC_8(const BIGNUM *VAR_4, ASN1_STRING *VAR_5,
                                      int VAR_6)
{
    ASN1_INTEGER *VAR_7;
    int VAR_8;

    if (VAR_5 == ((void*)0)) {
        VAR_7 = FUNC_2(VAR_6);
    } else {
        VAR_7 = VAR_5;
        VAR_7->type = VAR_6;
    }

    if (VAR_7 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        goto err;
    }

    if (FUNC_5(VAR_4) && !FUNC_6(VAR_4))
        VAR_7->type |= VAR_3;

    VAR_8 = FUNC_7(VAR_4);

    if (VAR_8 == 0)
        VAR_8 = 1;

    if (FUNC_1(VAR_7, ((void*)0), VAR_8) == 0) {
        FUNC_3(VAR_0, VAR_1);
        goto err;
    }


    if (FUNC_6(VAR_4))
        VAR_7->data[0] = 0;
    else
        VAR_8 = FUNC_4(VAR_4, VAR_7->data);
    VAR_7->length = VAR_8;
    return VAR_7;
 err:
    if (VAR_7 != VAR_5)
        FUNC_0(VAR_7);
    return ((void*)0);
}
