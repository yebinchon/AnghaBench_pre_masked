
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UNS8 ;
struct TYPE_8__ {scalar_t__ here; TYPE_1__* smudge; } ;
struct TYPE_7__ {int flags; char nName; char* name; scalar_t__ param; int code; int hash; } ;
typedef int STRINGINFO ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_DICT ;
typedef scalar_t__ FICL_COUNT ;
typedef int FICL_CODE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

FICL_WORD *FUNC_5(FICL_DICT *VAR_3,
                           STRINGINFO VAR_4,
                           FICL_CODE VAR_5,
                           UNS8 VAR_6)
{
    FICL_COUNT VAR_7 = (FICL_COUNT)FUNC_0(VAR_4);
    char *VAR_8;
    FICL_WORD *VAR_9;

    FUNC_3(VAR_2);





    VAR_8 = FUNC_1(VAR_3, VAR_4);
    VAR_9 = (FICL_WORD *)VAR_3->here;
    VAR_3->smudge = VAR_9;
    VAR_9->hash = FUNC_4(VAR_4);
    VAR_9->code = VAR_5;
    VAR_9->flags = (UNS8)(VAR_6 | VAR_1);
    VAR_9->nName = (char)VAR_7;
    VAR_9->name = VAR_8;



    VAR_3->here = VAR_9->param;

    if (!(VAR_6 & VAR_1))
        FUNC_2(VAR_3);

    FUNC_3(VAR_0);
    return VAR_9;
}
