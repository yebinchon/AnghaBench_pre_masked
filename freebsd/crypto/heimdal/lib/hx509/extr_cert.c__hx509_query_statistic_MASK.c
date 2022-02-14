
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int match; } ;
typedef TYPE_1__ hx509_query ;
typedef TYPE_2__* hx509_context ;
struct TYPE_6__ {int * querystat; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(hx509_context VAR_0, int VAR_1, const hx509_query *VAR_2)
{
    FILE *VAR_3;
    if (VAR_0->querystat == ((void*)0))
 return;
    VAR_3 = FUNC_1(VAR_0->querystat, "a");
    if (VAR_3 == ((void*)0))
 return;
    FUNC_3(VAR_3);
    FUNC_2(VAR_3, "%d %d\n", VAR_1, VAR_2->match);
    FUNC_0(VAR_3);
}
