
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* cp; char* end; scalar_t__ index; } ;
struct TYPE_6__ {TYPE_1__ tib; } ;
typedef TYPE_1__ TIB ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_INT ;



void FUNC_0(FICL_VM *VAR_0, char *VAR_1, FICL_INT VAR_2, TIB *VAR_3)
{
    if (VAR_3)
    {
        *VAR_3 = VAR_0->tib;
    }

    VAR_0->tib.cp = VAR_1;
    VAR_0->tib.end = VAR_1 + VAR_2;
    VAR_0->tib.index = 0;
}
