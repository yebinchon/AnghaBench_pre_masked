
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ textOut; } ;
typedef scalar_t__ OUTFUNC ;
typedef TYPE_1__ FICL_VM ;


 scalar_t__ VAR_0 ;

void FUNC_0(FICL_VM *VAR_1, OUTFUNC VAR_2)
{
    if (VAR_2)
        VAR_1->textOut = VAR_2;
    else
        VAR_1->textOut = VAR_0;

    return;
}
