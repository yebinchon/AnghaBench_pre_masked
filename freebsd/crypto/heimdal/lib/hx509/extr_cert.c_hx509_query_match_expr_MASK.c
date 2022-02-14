
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int match; int * expr; } ;
typedef TYPE_1__ hx509_query ;
typedef int hx509_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int
FUNC_2(hx509_context VAR_1, hx509_query *VAR_2, const char *VAR_3)
{
    if (VAR_2->expr) {
 FUNC_0(VAR_2->expr);
 VAR_2->expr = ((void*)0);
    }

    if (VAR_3 == ((void*)0)) {
 VAR_2->match &= ~VAR_0;
    } else {
 VAR_2->expr = FUNC_1(VAR_3);
 if (VAR_2->expr)
     VAR_2->match |= VAR_0;
    }

    return 0;
}
