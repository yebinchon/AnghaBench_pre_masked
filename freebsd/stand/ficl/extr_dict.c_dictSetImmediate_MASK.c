
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {TYPE_3__* smudge; } ;
typedef TYPE_1__ FICL_DICT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(FICL_DICT *VAR_1)
{
    FUNC_0(VAR_1->smudge);
    VAR_1->smudge->flags |= VAR_0;
    return;
}
