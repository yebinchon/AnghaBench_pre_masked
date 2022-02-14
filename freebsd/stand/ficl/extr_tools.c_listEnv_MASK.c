
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int size; scalar_t__ dict; scalar_t__ here; TYPE_4__* pForthWords; } ;
struct TYPE_11__ {unsigned int size; TYPE_2__** table; } ;
struct TYPE_10__ {int pad; TYPE_1__* pSys; } ;
struct TYPE_9__ {int name; struct TYPE_9__* link; } ;
struct TYPE_8__ {TYPE_5__* envp; } ;
typedef TYPE_2__ FICL_WORD ;
typedef TYPE_3__ FICL_VM ;
typedef TYPE_4__ FICL_HASH ;
typedef TYPE_5__ FICL_DICT ;


 int FUNC_0 (int ,char*,int,long,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(FICL_VM *VAR_0)
{
    FICL_DICT *VAR_1 = VAR_0->pSys->envp;
    FICL_HASH *VAR_2 = VAR_1->pForthWords;
    FICL_WORD *VAR_3;
    unsigned VAR_4;
    int VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2->size; VAR_4++)
    {
        for (VAR_3 = VAR_2->table[VAR_4]; VAR_3 != ((void*)0); VAR_3 = VAR_3->link, VAR_5++)
        {
            FUNC_1(VAR_0, VAR_3->name, 1);
        }
    }

    FUNC_0(VAR_0->pad, "Environment: %d words, %ld cells used of %u total",
        VAR_5, (long) (VAR_1->here - VAR_1->dict), VAR_1->size);
    FUNC_1(VAR_0, VAR_0->pad, 1);
    return;
}
