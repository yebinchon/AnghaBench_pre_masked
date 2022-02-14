
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * here; TYPE_1__* smudge; } ;
struct TYPE_4__ {int flags; scalar_t__ name; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_DICT ;
typedef int CELL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(FICL_DICT *VAR_3)
{
    FICL_WORD *VAR_4;
    FUNC_0(VAR_2);
    VAR_4 = VAR_3->smudge;

    if (VAR_4->flags & VAR_1)
        VAR_3->here = (CELL *)VAR_4->name;

    FUNC_0(VAR_0);
    return;
}
