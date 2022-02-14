
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heim_base {int isa; } ;
typedef int heim_type_t ;
typedef int heim_object_t ;


 struct heim_base* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int * VAR_0 ;

heim_type_t
FUNC_5(heim_object_t VAR_1)
{
    struct heim_base *VAR_2;
    if (FUNC_2(VAR_1)) {
 if (FUNC_3(VAR_1))
     return VAR_0[FUNC_4(VAR_1)];
 FUNC_1("not a supported tagged type");
    }
    VAR_2 = FUNC_0(VAR_1);
    return VAR_2->isa;
}
