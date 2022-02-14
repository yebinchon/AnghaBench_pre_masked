
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pStack; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(FICL_VM *VAR_3)
{
    FICL_INT VAR_4;
    FICL_WORD *VAR_5 = (FICL_WORD *)FUNC_0(VAR_3->pStack);

    VAR_4 = ((VAR_5 != ((void*)0)) && (VAR_5->flags & VAR_2)) ? VAR_1 : VAR_0;
    FUNC_1(VAR_3->pStack, VAR_4);
    return;
}
