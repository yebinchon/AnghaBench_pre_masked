
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_context ;
struct TYPE_3__ {scalar_t__ querystat; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

void
FUNC_2(hx509_context VAR_0, const char *VAR_1)
{
    if (VAR_0->querystat)
 FUNC_0(VAR_0->querystat);
    VAR_0->querystat = FUNC_1(VAR_1);
}
