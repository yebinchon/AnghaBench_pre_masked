
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct arange {int high; int low; } ;
typedef int krb5_error_code ;
struct TYPE_4__ {struct arange* data; } ;
struct TYPE_5__ {TYPE_1__ address; } ;
typedef TYPE_2__ krb5_address ;


 int FUNC_0 (int *,char*,size_t,size_t*) ;
 size_t FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_3 (const krb5_address *VAR_0, char *VAR_1, size_t VAR_2)
{
    struct arange *VAR_3;
    krb5_error_code VAR_4;
    size_t VAR_5, VAR_6, VAR_7;

    VAR_3 = VAR_0->address.data;

    VAR_5 = FUNC_2(VAR_1, "RANGE:", VAR_2);
    VAR_7 = VAR_5;
    if (VAR_5 > VAR_2)
 VAR_5 = VAR_2;
    VAR_6 = VAR_5;

    VAR_4 = FUNC_0 (&VAR_3->low, VAR_1 + VAR_6, VAR_2 - VAR_6, &VAR_5);
    if (VAR_4)
 return VAR_4;
    VAR_7 += VAR_5;
    if (VAR_2 - VAR_6 > VAR_5)
 VAR_6 += VAR_5;
    else
 VAR_6 = VAR_2;

    VAR_5 = FUNC_1(VAR_1 + VAR_6, "-", VAR_2 - VAR_6);
    VAR_7 += VAR_5;
    if (VAR_2 - VAR_6 > VAR_5)
 VAR_6 += VAR_5;
    else
 VAR_6 = VAR_2;

    VAR_4 = FUNC_0 (&VAR_3->high, VAR_1 + VAR_6, VAR_2 - VAR_6, &VAR_5);
    if (VAR_4)
 return VAR_4;
    VAR_7 += VAR_5;

    return VAR_7;
}
