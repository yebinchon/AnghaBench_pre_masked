
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* heim_type_t ;
typedef scalar_t__ heim_object_t ;
struct TYPE_3__ {unsigned long (* hash ) (scalar_t__) ;} ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (scalar_t__) ;

unsigned long
FUNC_2(heim_object_t VAR_0)
{
    heim_type_t VAR_1 = FUNC_0(VAR_0);
    if (VAR_1->hash)
 return VAR_1->hash(VAR_0);
    return (unsigned long)VAR_0;
}
