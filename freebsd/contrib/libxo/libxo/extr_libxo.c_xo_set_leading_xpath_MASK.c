
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * xo_leading_xpath; } ;
typedef TYPE_1__ xo_handle_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int) ;

void
FUNC_3 (xo_handle_t *VAR_0, const char *VAR_1)
{
    VAR_0 = FUNC_0(VAR_0);

    if (VAR_0->xo_leading_xpath) {
 FUNC_1(VAR_0->xo_leading_xpath);
 VAR_0->xo_leading_xpath = ((void*)0);
    }

    if (VAR_1 == ((void*)0))
 return;

    VAR_0->xo_leading_xpath = FUNC_2(VAR_1, -1);
}
