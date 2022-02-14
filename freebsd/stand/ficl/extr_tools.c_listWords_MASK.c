
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int nLists; int size; scalar_t__ dict; scalar_t__ here; TYPE_3__** pSearch; } ;
struct TYPE_11__ {unsigned int size; TYPE_1__** table; } ;
struct TYPE_10__ {char* pad; } ;
struct TYPE_9__ {scalar_t__ nName; char* name; struct TYPE_9__* link; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_VM ;
typedef TYPE_3__ FICL_HASH ;
typedef TYPE_4__ FICL_DICT ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;
 TYPE_4__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_1)
{
    FICL_DICT *VAR_2 = FUNC_2(VAR_1);
    FICL_HASH *VAR_3 = VAR_2->pSearch[VAR_2->nLists - 1];
    FICL_WORD *VAR_4;
    int VAR_5 = 0;
    int VAR_6;
    int VAR_7 = 0;
    unsigned VAR_8;
    int VAR_9 = 0;
    char *VAR_10;
    char *VAR_11 = VAR_1->pad;

    for (VAR_8 = 0; VAR_8 < VAR_3->size; VAR_8++)
    {
        for (VAR_4 = VAR_3->table[VAR_8]; VAR_4 != ((void*)0); VAR_4 = VAR_4->link, VAR_9++)
        {
            if (VAR_4->nName == 0)
                continue;

            VAR_10 = VAR_4->name;
            VAR_5 += FUNC_1(VAR_11 + VAR_5, "%s", VAR_10);

            if (VAR_5 > 70)
            {
                VAR_11[VAR_5] = '\0';
                VAR_5 = 0;
                VAR_7++;
                if(VAR_7>23) {
                        VAR_7=0;
                        FUNC_3(VAR_1, "--- Press Enter to continue ---",0);
                        FUNC_0();
                        FUNC_3(VAR_1,"\r",0);
                }
                FUNC_3(VAR_1, VAR_11, 1);
            }
            else
            {
                VAR_6 = VAR_0 - VAR_5 % VAR_0;
                while (VAR_6-- > 0)
                    VAR_11[VAR_5++] = ' ';
            }

            if (VAR_5 > 70)
            {
                VAR_11[VAR_5] = '\0';
                VAR_5 = 0;
                VAR_7++;
                if(VAR_7>23) {
                        VAR_7=0;
                        FUNC_3(VAR_1, "--- Press Enter to continue ---",0);
                        FUNC_0();
                        FUNC_3(VAR_1,"\r",0);
                }
                FUNC_3(VAR_1, VAR_11, 1);
            }
        }
    }

    if (VAR_5 > 0)
    {
        VAR_11[VAR_5] = '\0';
        VAR_5 = 0;
        FUNC_3(VAR_1, VAR_11, 1);
    }

    FUNC_1(VAR_1->pad, "Dictionary: %d words, %ld cells used of %u total",
        VAR_9, (long) (VAR_2->here - VAR_2->dict), VAR_2->size);
    FUNC_3(VAR_1, VAR_1->pad, 1);
    return;
}
