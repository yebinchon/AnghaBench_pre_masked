
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int match; int * friendlyname; } ;
typedef TYPE_1__ hx509_query ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int
FUNC_2(hx509_query *VAR_2, const char *VAR_3)
{
    if (VAR_2->friendlyname)
 FUNC_0(VAR_2->friendlyname);
    VAR_2->friendlyname = FUNC_1(VAR_3);
    if (VAR_2->friendlyname == ((void*)0))
 return VAR_0;
    VAR_2->match |= VAR_1;
    return 0;
}
