
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNS8 ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {TYPE_3__* smudge; } ;
typedef TYPE_1__ FICL_DICT ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(FICL_DICT *VAR_0, UNS8 VAR_1, UNS8 VAR_2)
{
    FUNC_0(VAR_0->smudge);
    VAR_0->smudge->flags |= VAR_1;
    VAR_0->smudge->flags &= ~VAR_2;
    return;
}
