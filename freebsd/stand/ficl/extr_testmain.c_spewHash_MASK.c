
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* pForthWords; } ;
struct TYPE_12__ {unsigned int size; TYPE_1__** table; } ;
struct TYPE_11__ {int pad; } ;
struct TYPE_10__ {char* name; struct TYPE_10__* link; } ;
typedef int FILE ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_VM ;
typedef TYPE_3__ FICL_HASH ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_7__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_7(FICL_VM *VAR_1)
{
    FICL_HASH *VAR_2 = FUNC_3(VAR_1)->pForthWords;
    FICL_WORD *VAR_3;
    FILE *VAR_4;
    unsigned VAR_5;
    unsigned VAR_6 = VAR_2->size;

    if (!FUNC_4(VAR_1))
        FUNC_6(VAR_1, VAR_0);

    VAR_4 = FUNC_1(VAR_1->pad, "w");
    if (!VAR_4)
    {
        FUNC_5(VAR_1, "unable to open file", 1);
        return;
    }

    for (VAR_5=0; VAR_5 < VAR_6; VAR_5++)
    {
        int VAR_7 = 0;

        VAR_3 = VAR_2->table[VAR_5];
        while (VAR_3)
        {
            VAR_7++;
            VAR_3 = VAR_3->link;
        }

        FUNC_2(VAR_4, "%d\t%d", VAR_5, VAR_7);

        VAR_3 = VAR_2->table[VAR_5];
        while (VAR_3)
        {
            FUNC_2(VAR_4, "\t%s", VAR_3->name);
            VAR_3 = VAR_3->link;
        }

        FUNC_2(VAR_4, "\n");
    }

    FUNC_0(VAR_4);
    return;
}
