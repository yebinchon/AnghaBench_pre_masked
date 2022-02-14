
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_operations {scalar_t__ atype; } ;
typedef scalar_t__ krb5_address_type ;


 struct addr_operations* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct addr_operations *
FUNC_0(krb5_address_type VAR_2)
{
    struct addr_operations *VAR_3;

    for (VAR_3 = VAR_0; VAR_3 < VAR_0 + VAR_1; ++VAR_3)
 if (VAR_2 == VAR_3->atype)
     return VAR_3;
    return ((void*)0);
}
