
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* heim_type_t ;
typedef scalar_t__ heim_tid_t ;
typedef scalar_t__ heim_object_t ;
struct TYPE_3__ {int (* cmp ) (scalar_t__,scalar_t__) ;} ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

int
FUNC_3(heim_object_t VAR_0, heim_object_t VAR_1)
{
    heim_tid_t VAR_2, VAR_3;
    heim_type_t VAR_4;

    VAR_2 = FUNC_1(VAR_0);
    VAR_3 = FUNC_1(VAR_1);

    if (VAR_2 != VAR_3)
 return VAR_2 - VAR_3;

    VAR_4 = FUNC_0(VAR_0);

    if (VAR_4->cmp)
 return VAR_4->cmp(VAR_0, VAR_1);

    return (uintptr_t)VAR_0 - (uintptr_t)VAR_1;
}
