
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * field_data1; int * field_data2; } ;
typedef TYPE_1__ EC_GROUP ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__ const*) ;

int FUNC_6(EC_GROUP *VAR_0, const EC_GROUP *VAR_1)
{
    FUNC_1(VAR_0->field_data1);
    VAR_0->field_data1 = ((void*)0);
    FUNC_3(VAR_0->field_data2);
    VAR_0->field_data2 = ((void*)0);

    if (!FUNC_5(VAR_0, VAR_1))
        return 0;

    if (VAR_1->field_data1 != ((void*)0)) {
        VAR_0->field_data1 = FUNC_2();
        if (VAR_0->field_data1 == ((void*)0))
            return 0;
        if (!FUNC_0(VAR_0->field_data1, VAR_1->field_data1))
            goto err;
    }
    if (VAR_1->field_data2 != ((void*)0)) {
        VAR_0->field_data2 = FUNC_4(VAR_1->field_data2);
        if (VAR_0->field_data2 == ((void*)0))
            goto err;
    }

    return 1;

 err:
    FUNC_1(VAR_0->field_data1);
    VAR_0->field_data1 = ((void*)0);
    return 0;
}
