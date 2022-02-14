
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UNS16 ;
struct TYPE_9__ {int size; TYPE_2__** table; struct TYPE_9__* link; } ;
struct TYPE_8__ {scalar_t__ nName; struct TYPE_8__* link; int name; } ;
struct TYPE_7__ {scalar_t__ count; int cp; } ;
typedef TYPE_1__ STRINGINFO ;
typedef TYPE_2__ FICL_WORD ;
typedef scalar_t__ FICL_UNS ;
typedef TYPE_3__ FICL_HASH ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__) ;

FICL_WORD *FUNC_2(FICL_HASH *VAR_1, STRINGINFO VAR_2, UNS16 VAR_3)
{
    FICL_UNS VAR_4 = VAR_2.count;
    FICL_WORD *VAR_5;
    UNS16 VAR_6;

    if (VAR_4 > VAR_0)
        VAR_4 = VAR_0;

    for (; VAR_1 != ((void*)0); VAR_1 = VAR_1->link)
    {
        if (VAR_1->size > 1)
            VAR_6 = (UNS16)(VAR_3 % VAR_1->size);
        else
            VAR_6 = 0;

        for (VAR_5 = VAR_1->table[VAR_6]; VAR_5; VAR_5 = VAR_5->link)
        {
            if ( (VAR_5->nName == VAR_2.count)
                && (!FUNC_1(VAR_2.cp, VAR_5->name, VAR_4)) )
                return VAR_5;



        }
    }

    return ((void*)0);
}
