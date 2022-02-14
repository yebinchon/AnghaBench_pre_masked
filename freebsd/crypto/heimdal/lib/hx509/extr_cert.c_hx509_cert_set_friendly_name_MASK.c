
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_cert ;
struct TYPE_3__ {int * friendlyname; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int
FUNC_2(hx509_cert VAR_1, const char *VAR_2)
{
    if (VAR_1->friendlyname)
 FUNC_0(VAR_1->friendlyname);
    VAR_1->friendlyname = FUNC_1(VAR_2);
    if (VAR_1->friendlyname == ((void*)0))
 return VAR_0;
    return 0;
}
