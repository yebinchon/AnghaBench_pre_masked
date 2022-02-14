
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * value; int * type_id; } ;
typedef TYPE_1__ OTHERNAME ;
typedef int GENERAL_NAME ;
typedef int ASN1_TYPE ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 () ;

int FUNC_3(GENERAL_NAME *VAR_1,
                                ASN1_OBJECT *VAR_2, ASN1_TYPE *VAR_3)
{
    OTHERNAME *VAR_4;
    VAR_4 = FUNC_2();
    if (VAR_4 == ((void*)0))
        return 0;
    FUNC_0(VAR_4->value);
    VAR_4->type_id = VAR_2;
    VAR_4->value = VAR_3;
    FUNC_1(VAR_1, VAR_0, VAR_4);
    return 1;
}
