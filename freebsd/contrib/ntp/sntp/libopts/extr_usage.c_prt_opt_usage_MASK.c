
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int optCt; int fOptSet; int presetOptCt; TYPE_2__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_14__ {int fOptState; char* pz_Name; char* pzText; int optValue; } ;
typedef TYPE_2__ tOptDesc ;
struct TYPE_15__ {char* pzBrk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__ VAR_7 ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_5__*) ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;

__attribute__((used)) static void
FUNC_6(tOptions * VAR_13, int VAR_14, char const * VAR_15)
{
    int VAR_16 = VAR_13->optCt;
    int VAR_17 = 0;
    tOptDesc * VAR_18 = VAR_13->pOptDesc;
    int VAR_19 = 0;

    do {





        if ((VAR_18->fOptState & VAR_5) != 0) {







            if ( (VAR_18->fOptState == (VAR_6 | VAR_4))
               && (VAR_18->pz_Name != ((void*)0))
               && (VAR_14 == VAR_0)) {

                char const * VAR_20 =
                    (VAR_18->pzText == ((void*)0)) ? VAR_11 : VAR_18->pzText;
                FUNC_5(VAR_13, VAR_18, &VAR_7);
                FUNC_1(VAR_8, VAR_10, VAR_18->pz_Name, VAR_20);
            }

            continue;
        }

        if ((VAR_18->fOptState & VAR_3) != 0) {
            if (VAR_14 == VAR_0) {
                FUNC_1(VAR_8, VAR_7.pzBrk, VAR_18->pzText,
                        VAR_15);
                VAR_19++;
            }

            continue;
        }


        if ( ((VAR_13->fOptSet & VAR_2) != 0)
           && (! FUNC_0(VAR_18->optValue)))
            continue;
        if ((VAR_19 > 0) && (VAR_14 == VAR_0)) {
            if (VAR_13->presetOptCt == VAR_17) {
                if ((VAR_18[-1].fOptState & VAR_3) == 0)
                    FUNC_1(VAR_8, VAR_7.pzBrk, VAR_9, VAR_15);

            } else if ((VAR_16 == 1) &&
                       (VAR_13->fOptSet & VAR_2))
                FUNC_1(VAR_8, VAR_7.pzBrk, VAR_12, VAR_15);
        }

        FUNC_4(VAR_13, VAR_18, &VAR_7);





        if (VAR_14 == VAR_0)
            FUNC_3(VAR_13, VAR_18, VAR_15);

    } while (VAR_18++, VAR_17++, (--VAR_16 > 0));

    FUNC_2(VAR_1, VAR_8);
}
