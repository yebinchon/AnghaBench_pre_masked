
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {TYPE_4__** table; scalar_t__ size; } ;
struct TYPE_15__ {scalar_t__ cp; } ;
struct TYPE_18__ {TYPE_2__ tib; int pSys; } ;
struct TYPE_17__ {int nName; struct TYPE_17__* link; int name; TYPE_1__* param; } ;
struct TYPE_16__ {scalar_t__ cp; } ;
struct TYPE_14__ {scalar_t__ p; } ;
typedef TYPE_3__ STRINGINFO ;
typedef TYPE_4__ FICL_WORD ;
typedef TYPE_5__ FICL_VM ;
typedef int FICL_UNS ;
typedef TYPE_6__ FICL_HASH ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;

int FUNC_5(FICL_VM *VAR_3, STRINGINFO VAR_4)
{
    int VAR_5;
    FICL_HASH *VAR_6;
    FICL_WORD *VAR_7 = FUNC_1(VAR_3->pSys, VAR_2);





    if (!VAR_7)
        return VAR_0;

    VAR_6 = (FICL_HASH *)(VAR_7->param[0].p);



    for (VAR_5 = 0; VAR_5 < (int)VAR_6->size; VAR_5++)
    {
        VAR_7 = VAR_6->table[VAR_5];
        while (VAR_7 != ((void*)0))
        {
            int VAR_8;
            VAR_8 = VAR_7->nName;




            if (!FUNC_2(FUNC_0(VAR_4), VAR_7->name, (FICL_UNS)VAR_8))
            {

    FUNC_4(VAR_3, VAR_4.cp + VAR_8 - VAR_3->tib.cp );
                FUNC_3(VAR_3, VAR_7);

                return (int)VAR_1;
            }
            VAR_7 = VAR_7->link;
        }
    }

    return VAR_0;
}
