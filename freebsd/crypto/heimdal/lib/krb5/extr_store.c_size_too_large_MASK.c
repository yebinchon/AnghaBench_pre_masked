
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t max_alloc; } ;
typedef TYPE_1__ krb5_storage ;
typedef int krb5_error_code ;


 int VAR_0 ;

__attribute__((used)) static krb5_error_code
FUNC_0(krb5_storage *VAR_1, size_t VAR_2)
{
    if (VAR_1->max_alloc && VAR_1->max_alloc < VAR_2)
 return VAR_0;
    return 0;
}
