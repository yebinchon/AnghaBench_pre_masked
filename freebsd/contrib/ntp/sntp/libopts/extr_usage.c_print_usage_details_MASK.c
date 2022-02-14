
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int fOptSet; char const* pzExplain; char const* pzPackager; int pzProgName; int * pzBugAddr; TYPE_1__* pOptDesc; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_10__ {int fOptState; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char const*,scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_2__*,int,char const*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char const**) ;
 int FUNC_11 (TYPE_2__*,char const**) ;
 int FUNC_12 (int ,char*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 char const* VAR_9 ;
 char* VAR_10 ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 char const* VAR_13 ;
 char* VAR_14 ;
 char const* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_13(tOptions * VAR_19, int VAR_20)
{
    {
        char const * VAR_21 = ((void*)0);
        int VAR_22;




        if (FUNC_1(VAR_19)) {
            VAR_22 = FUNC_10(VAR_19, &VAR_21);
            FUNC_12(VAR_5, VAR_10, VAR_22);
            FUNC_5(VAR_1, VAR_6);
        }
        else {
            VAR_22 = FUNC_11(VAR_19, &VAR_21);
            FUNC_12(VAR_5, VAR_10, VAR_22);






            if ( (VAR_20 != VAR_0)
               || ((VAR_19->pOptDesc->fOptState & VAR_4) == 0) )

                FUNC_6(VAR_21, VAR_6);
        }

        VAR_22 = 4 - ((VAR_22 + 15) / 8);
        if (VAR_22 > 0)
            VAR_8 = VAR_22;
        FUNC_8(VAR_19, VAR_20, VAR_21);
    }




    switch (VAR_19->fOptSet & 129) {
    case 129: FUNC_6(VAR_9, VAR_6); break;
    case 128: break;
    case 130: FUNC_6(VAR_11, VAR_6); break;
    case 0: FUNC_6(VAR_13, VAR_6); break;
    }

    if ((VAR_19->fOptSet & VAR_2) != 0)
        FUNC_6(VAR_12, VAR_6);

    if ((VAR_19->fOptSet & VAR_3) != 0)
        FUNC_6(VAR_15, VAR_6);

    if (VAR_19->pzExplain != ((void*)0))
        FUNC_6(VAR_19->pzExplain, VAR_6);





    if (VAR_20 == VAR_0)
        FUNC_9(VAR_19);




    if (FUNC_0(VAR_19) && (VAR_19->pzPackager != ((void*)0)))
        FUNC_6(VAR_19->pzPackager, VAR_6);

    else if (VAR_19->pzBugAddr != ((void*)0))
        FUNC_4(VAR_6, VAR_14, VAR_19->pzBugAddr);

    FUNC_3(VAR_6);

    if (FUNC_2(VAR_6) != 0)
        FUNC_7(VAR_19->pzProgName, VAR_18, (VAR_6 == VAR_7)
                   ? VAR_16 : VAR_17);
}
