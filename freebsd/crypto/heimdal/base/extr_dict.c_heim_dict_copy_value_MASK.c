
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashentry {int value; } ;
typedef int * heim_object_t ;
typedef int heim_dict_t ;


 struct hashentry* FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ) ;

heim_object_t
FUNC_2(heim_dict_t VAR_0, heim_object_t VAR_1)
{
    struct hashentry *VAR_2;
    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 == ((void*)0))
 return ((void*)0);

    return FUNC_1(VAR_2->value);
}
