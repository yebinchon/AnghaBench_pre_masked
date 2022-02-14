
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_context ;
typedef int hx509_cert ;
typedef int heim_oid ;
struct TYPE_4__ {size_t len; int * val; } ;
typedef TYPE_1__ ExtKeyUsage ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int const* VAR_1 ;

int
FUNC_5(hx509_context VAR_2, hx509_cert VAR_3,
       const heim_oid *VAR_4, int VAR_5)
{
    ExtKeyUsage VAR_6;
    int VAR_7;
    size_t VAR_8;

    VAR_7 = FUNC_2(FUNC_0(VAR_3), &VAR_6);
    if (VAR_7) {
 FUNC_4(VAR_2);
 return VAR_7;
    }

    for (VAR_8 = 0; VAR_8 < VAR_6.len; VAR_8++) {
 if (FUNC_1(VAR_4, &VAR_6.val[VAR_8]) == 0) {
     FUNC_3(&VAR_6);
     return 0;
 }
 if (VAR_5) {






 }
    }
    FUNC_3(&VAR_6);
    FUNC_4(VAR_2);
    return VAR_0;
}
