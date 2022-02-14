
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ critical; } ;
typedef TYPE_1__ X509_EXTENSION ;



int FUNC_0(const X509_EXTENSION *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return 0;
    if (VAR_0->critical > 0)
        return 1;
    return 0;
}
