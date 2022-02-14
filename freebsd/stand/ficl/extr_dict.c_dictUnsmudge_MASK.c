
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* pCompile; TYPE_1__* smudge; } ;
struct TYPE_8__ {scalar_t__ nName; int flags; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_1__ FICL_HASH ;
typedef TYPE_3__ FICL_DICT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

void FUNC_2(FICL_DICT *VAR_1)
{
    FICL_WORD *VAR_2 = VAR_1->smudge;
    FICL_HASH *VAR_3 = VAR_1->pCompile;

    FUNC_0(VAR_3);
    FUNC_0(VAR_2);



    if (VAR_2->nName > 0)
        FUNC_1(VAR_3, VAR_2);
    VAR_2->flags &= ~(VAR_0);
    return;
}
