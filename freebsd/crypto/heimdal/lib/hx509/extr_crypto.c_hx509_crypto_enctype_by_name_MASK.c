
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx509cipher {int const* oid; } ;
typedef int heim_oid ;


 struct hx509cipher* FUNC_0 (char const*) ;

const heim_oid *
FUNC_1(const char *VAR_0)
{
    const struct hx509cipher *VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 == ((void*)0))
 return ((void*)0);
    return VAR_1->oid;
}
