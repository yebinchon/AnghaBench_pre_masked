
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** parseList; } ;
struct TYPE_8__ {TYPE_3__* pSys; } ;
struct TYPE_7__ {char* name; } ;
typedef TYPE_2__ FICL_VM ;
typedef TYPE_3__ FICL_SYSTEM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;

void FUNC_2(FICL_VM *VAR_1)
{
    int VAR_2;
    FICL_SYSTEM *VAR_3 = VAR_1->pSys;
    FUNC_0(VAR_3);

    FUNC_1(VAR_1, "Parse steps:", 1);
    FUNC_1(VAR_1, "lookup", 1);

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
        if (VAR_3->parseList[VAR_2] != ((void*)0))
        {
            FUNC_1(VAR_1, VAR_3->parseList[VAR_2]->name, 1);
        }
        else break;
    }
    return;
}
