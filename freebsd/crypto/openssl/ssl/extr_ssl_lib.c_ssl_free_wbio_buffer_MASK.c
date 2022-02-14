
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bbio; int wbio; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(SSL *VAR_0)
{

    if (VAR_0->bbio == ((void*)0))
        return 1;

    VAR_0->wbio = FUNC_1(VAR_0->wbio);
    FUNC_0(VAR_0->bbio);
    VAR_0->bbio = ((void*)0);

    return 1;
}
