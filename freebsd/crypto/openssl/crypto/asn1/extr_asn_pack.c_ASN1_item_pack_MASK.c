
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * data; int length; } ;
typedef TYPE_1__ ASN1_STRING ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (void*,int **,int const*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

ASN1_STRING *FUNC_5(void *VAR_3, const ASN1_ITEM *VAR_4, ASN1_STRING **VAR_5)
{
    ASN1_STRING *VAR_6;

     if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0)) {
        if ((VAR_6 = FUNC_1()) == ((void*)0)) {
            FUNC_3(VAR_0, VAR_2);
            return ((void*)0);
        }
    } else {
        VAR_6 = *VAR_5;
    }

    FUNC_4(VAR_6->data);
    VAR_6->data = ((void*)0);

    if ((VAR_6->length = FUNC_2(VAR_3, &VAR_6->data, VAR_4)) == 0) {
        FUNC_3(VAR_0, VAR_1);
        goto err;
    }
    if (VAR_6->data == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        goto err;
    }

    if (VAR_5 != ((void*)0) && *VAR_5 == ((void*)0))
        *VAR_5 = VAR_6;

    return VAR_6;
 err:
    if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0))
        FUNC_0(VAR_6);
    return ((void*)0);
}
