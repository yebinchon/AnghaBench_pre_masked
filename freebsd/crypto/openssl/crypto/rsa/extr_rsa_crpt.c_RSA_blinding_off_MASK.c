
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int * blinding; } ;
typedef TYPE_1__ RSA ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(RSA *VAR_2)
{
    FUNC_0(VAR_2->blinding);
    VAR_2->blinding = ((void*)0);
    VAR_2->flags &= ~VAR_0;
    VAR_2->flags |= VAR_1;
}
