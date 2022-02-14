
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* pUsageProc ) (TYPE_2__*,int ) ;int pzProgName; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_8__ {int argString; } ;
struct TYPE_10__ {int fOptState; int pz_Name; TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;

__attribute__((used)) static void
FUNC_7(tOptions * VAR_15, tOptDesc * VAR_16,
         char const * const * VAR_17, int VAR_18)
{
    size_t VAR_19 = 0;
    size_t VAR_20 = 0;
    int VAR_21 = VAR_18;
    int VAR_22 = 0;




    if (VAR_15 > VAR_7)
        FUNC_1(VAR_9, VAR_10, VAR_15->pzProgName,
                VAR_16->optArg.argString, VAR_16->pz_Name);

    FUNC_1(VAR_9, VAR_14, VAR_16->pz_Name);






    if (**VAR_17 == 0x7F) {
        VAR_17++;
        VAR_22 = 1;
        VAR_21 = --VAR_18;
    }





    {
        char const * const * VAR_23 = VAR_17;

        do {
            size_t VAR_24 = FUNC_5(*(VAR_23++)) + 1;
            if (VAR_24 > VAR_19)
                VAR_19 = VAR_24;
            VAR_20 += VAR_24;
        } while (--VAR_21 > 0);

        VAR_21 = VAR_18;
    }




    if (VAR_19 > 35) {
        do {
            FUNC_1(VAR_9, VAR_0, *(VAR_17++));
        } while (--VAR_21 > 0);
    }




    else if (VAR_20 < 76) {
        FUNC_2(' ', VAR_9);
        do {
            FUNC_2(' ', VAR_9);
            FUNC_3(*(VAR_17++), VAR_9);
        } while (--VAR_21 > 0);
        FUNC_2(VAR_3, VAR_9);
    }




    else {
        unsigned int VAR_25 = 0;
        char VAR_26[16];

        FUNC_4(VAR_26, VAR_1, (int)VAR_19);
        VAR_19 = 78 / VAR_19;
        FUNC_3(VAR_8, VAR_9);




        VAR_21 = VAR_18;
        while (--VAR_21 > 0) {
            if (++VAR_25 == VAR_19) {



                FUNC_1(VAR_9, VAR_5, *(VAR_17++));
                VAR_25 = 0;
            }

            else
                FUNC_1(VAR_9, VAR_26, *(VAR_17++) );
        }
        FUNC_1(VAR_9, VAR_4, *VAR_17);
    }

    if (VAR_15 > VAR_7) {
        FUNC_1(VAR_9, VAR_11, VAR_22, VAR_18 - 1 + VAR_22);

        (*(VAR_15->pUsageProc))(VAR_15, VAR_2);

    }

    if (FUNC_0(VAR_16->fOptState) == VAR_6) {
        FUNC_1(VAR_9, VAR_12, VAR_18);
        FUNC_3(VAR_13, VAR_9);
    } else {
        FUNC_1(VAR_9, VAR_11, VAR_22, VAR_18 - 1 + VAR_22);
    }
}
