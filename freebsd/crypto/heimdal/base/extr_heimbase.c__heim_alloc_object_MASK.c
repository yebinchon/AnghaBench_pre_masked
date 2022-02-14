
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heim_base {int ref_cnt; int isa; } ;
typedef int heim_type_t ;
typedef int * heim_object_t ;


 int * FUNC_0 (struct heim_base*) ;
 struct heim_base* FUNC_1 (int,size_t) ;

heim_object_t
FUNC_2(heim_type_t VAR_0, size_t VAR_1)
{

    struct heim_base *VAR_2 = FUNC_1(1, VAR_1 + sizeof(*VAR_2));
    if (VAR_2 == ((void*)0))
 return ((void*)0);
    VAR_2->isa = VAR_0;
    VAR_2->ref_cnt = 1;

    return FUNC_0(VAR_2);
}
