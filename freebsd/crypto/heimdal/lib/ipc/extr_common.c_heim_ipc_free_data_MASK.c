
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; int * data; } ;
typedef TYPE_1__ heim_idata ;


 int FUNC_0 (int *) ;

void
FUNC_1(heim_idata *VAR_0)
{
    if (VAR_0->data)
 FUNC_0(VAR_0->data);
    VAR_0->data = ((void*)0);
    VAR_0->length = 0;
}
