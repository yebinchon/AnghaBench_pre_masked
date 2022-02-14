
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ nLocals; } ;
struct TYPE_9__ {scalar_t__ state; TYPE_7__* pSys; } ;
typedef int STRINGINFO ;
typedef int FICL_WORD ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_DICT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(FICL_VM *VAR_3, STRINGINFO VAR_4)
{
    FICL_DICT *VAR_5 = FUNC_7(VAR_3);
    FICL_WORD *VAR_6;
    VAR_6 = FUNC_3(VAR_5, VAR_4);

    if (VAR_3->state == VAR_2)
    {
        if (VAR_6 != ((void*)0))
        {
            if (FUNC_9(VAR_6))
            {
                FUNC_8(VAR_3, "Error: Compile only!");
            }

            FUNC_6(VAR_3, VAR_6);
            return (int)VAR_1;
        }
    }

    else
    {
        if (VAR_6 != ((void*)0))
        {
            if (FUNC_10(VAR_6))
            {
                FUNC_6(VAR_3, VAR_6);
            }
            else
            {
                FUNC_1(VAR_5, FUNC_0(VAR_6));
            }
            return (int)VAR_1;
        }
    }

    return VAR_0;
}
