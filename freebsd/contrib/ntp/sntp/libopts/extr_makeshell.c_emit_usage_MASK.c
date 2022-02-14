
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {char* pzPROGNAME; int optCt; TYPE_2__* pOptDesc; int pzProgName; int pzProgPath; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_7__ {scalar_t__ pOptProc; } ;
typedef TYPE_2__ tOptDesc ;
struct tm {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char** FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct tm* FUNC_4 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (char*,char*,...) ;
 int * VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (char*,int,int ,struct tm*) ;
 int FUNC_7 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (unsigned char) ;

__attribute__((used)) static void
FUNC_10(tOptions * VAR_16)
{
    char VAR_17[VAR_0];







    if (VAR_13 != ((void*)0))
        FUNC_3(VAR_13, VAR_15);

    {
        char const * VAR_18;

        {
            time_t VAR_19 = FUNC_8(((void*)0));
            struct tm * VAR_20 = FUNC_4(&VAR_19);
            FUNC_6(VAR_17, VAR_0, VAR_8, VAR_20 );
        }

        if (FUNC_1(VAR_4))
             VAR_18 = FUNC_0(VAR_4);
        else VAR_18 = VAR_7;

        if ((VAR_13 == ((void*)0)) && (VAR_14 != ((void*)0)))
            FUNC_5(VAR_5, VAR_14);

        FUNC_5(VAR_3, VAR_6, VAR_18, VAR_17);
    }

    FUNC_5(VAR_1, VAR_16->pzPROGNAME);





    {
        char * VAR_21 = VAR_17;
        char const * VAR_22 = VAR_16->pzPROGNAME;
        char ** VAR_23;


        for (;;) {
            if ((*VAR_21++ = (char)FUNC_9((unsigned char)*VAR_22++)) == VAR_2)
                break;
        }

        VAR_23 = FUNC_2(&(VAR_16->pzProgPath));
        *VAR_23 = VAR_17;
        VAR_23 = FUNC_2(&(VAR_16->pzProgName));
        *VAR_23 = VAR_17;
    }

    FUNC_7(VAR_16, VAR_9, ((void*)0));
    FUNC_7(VAR_16, VAR_10, ((void*)0));

    {
        tOptDesc * VAR_24 = VAR_16->pOptDesc;
        int VAR_25 = VAR_16->optCt;

        for (;;) {
            if (VAR_24->pOptProc == VAR_12) {
                FUNC_7(VAR_16, VAR_11, VAR_24);
                break;
            }

            if (--VAR_25 <= 0)
                break;
            VAR_24++;
        }
    }
}
