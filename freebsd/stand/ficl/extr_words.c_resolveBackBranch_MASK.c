
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int here; } ;
struct TYPE_8__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int * FICL_INT ;
typedef TYPE_2__ FICL_DICT ;
typedef int CELL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_5(FICL_DICT *VAR_0, FICL_VM *VAR_1, char *VAR_2)
{
    FICL_INT VAR_3;
    CELL *VAR_4;

    FUNC_2(VAR_1, VAR_2);




    VAR_4 = (CELL *)FUNC_3(VAR_1->pStack);
    VAR_3 = VAR_4 - VAR_0->here;
    FUNC_1(VAR_0, FUNC_0(VAR_3));

    return;
}
