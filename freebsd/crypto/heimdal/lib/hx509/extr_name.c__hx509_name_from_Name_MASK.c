
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_name ;
struct TYPE_5__ {int der_name; } ;
typedef int Name ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(const Name *VAR_1, hx509_name *VAR_2)
{
    int VAR_3;
    *VAR_2 = FUNC_0(1, sizeof(**VAR_2));
    if (*VAR_2 == ((void*)0))
 return VAR_0;
    VAR_3 = FUNC_1(VAR_1, &(*VAR_2)->der_name);
    if (VAR_3) {
 FUNC_2(*VAR_2);
 *VAR_2 = ((void*)0);
    }
    return VAR_3;
}
