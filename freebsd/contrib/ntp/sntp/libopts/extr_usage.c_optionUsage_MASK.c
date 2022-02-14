
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int structVersion; char* pzFullUsage; char* pzShortUsage; int fOptSet; char* pzUsageTitle; int pzProgName; } ;
typedef TYPE_1__ tOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char const*,int,int *) ;
 int FUNC_6 (int) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_11(tOptions * VAR_12, int VAR_13)
{
    int VAR_14 = (VAR_13 == VAR_0)
        ? VAR_1 : VAR_13;

    VAR_4 = 0;
    FUNC_9(VAR_12, ((void*)0));
    {
        char const * VAR_15;

        if (VAR_14 == VAR_1) {
            VAR_15 = (VAR_12->structVersion >= 30 * 4096)
                ? VAR_12->pzFullUsage : ((void*)0);

            if (VAR_5 == ((void*)0))
                VAR_5 = VAR_6 ? VAR_7 : VAR_8;

        } else {
            VAR_15 = (VAR_12->structVersion >= 30 * 4096)
                ? VAR_12->pzShortUsage : ((void*)0);

            if (VAR_5 == ((void*)0))
                VAR_5 = VAR_7;
        }

        if (((VAR_12->fOptSet & VAR_2) == 0) && (VAR_15 != ((void*)0))) {
            if ((VAR_12->fOptSet & VAR_3) != 0)
                FUNC_5(VAR_15, 1, VAR_5);
            else
                FUNC_3(VAR_15, VAR_5);
            goto flush_and_exit;
        }
    }

    FUNC_2(VAR_5, VAR_12->pzUsageTitle, VAR_12->pzProgName);

    if ((VAR_14 == VAR_1) ||
        (! FUNC_10(VAR_12)))

        FUNC_8(VAR_12, VAR_13);
    else
        FUNC_7(VAR_12);

 flush_and_exit:
    FUNC_1(VAR_5);
    if (FUNC_0(VAR_5) != 0)
        FUNC_4(VAR_12->pzProgName, VAR_11, (VAR_5 == VAR_8)
                   ? VAR_10 : VAR_9);

    FUNC_6(VAR_14);
}
