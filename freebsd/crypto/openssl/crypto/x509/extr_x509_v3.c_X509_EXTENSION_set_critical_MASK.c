
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int critical; } ;
typedef TYPE_1__ X509_EXTENSION ;



int FUNC_0(X509_EXTENSION *VAR_0, int VAR_1)
{
    if (VAR_0 == ((void*)0))
        return 0;
    VAR_0->critical = (VAR_1) ? 0xFF : -1;
    return 1;
}
