
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nLists; int pForthWords; int * pSearch; int pCompile; } ;
typedef TYPE_1__ FICL_DICT ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(FICL_DICT *VAR_0)
{
    FUNC_0(VAR_0);
    VAR_0->pCompile = VAR_0->pForthWords;
    VAR_0->nLists = 1;
    VAR_0->pSearch[0] = VAR_0->pForthWords;
    return;
}
