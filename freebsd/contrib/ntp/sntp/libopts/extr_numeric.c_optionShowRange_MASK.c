
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char const* pzProgName; int (* pUsageProc ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ tOptions ;
struct TYPE_9__ {long const argInt; } ;
struct TYPE_11__ {long const pz_Name; int fOptState; TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;


 int VAR_0 ;
 long const VAR_1 ;
 long const VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;

void
FUNC_4(tOptions * VAR_21, tOptDesc * VAR_22, void * VAR_23, int VAR_24)
{
    const struct {long const rmin, rmax;} * VAR_25 = VAR_23;

    char const * VAR_26 = VAR_19 + VAR_9;





    if (VAR_21 != VAR_6) {
        if (VAR_21 <= VAR_5)
            return;
        VAR_26 = VAR_4;

        FUNC_0(VAR_8, VAR_12, VAR_21->pzProgName,
                VAR_22->pz_Name, VAR_22->optArg.argInt);
        VAR_26 = "";
    }

    if (VAR_22->fOptState & VAR_7)
        FUNC_0(VAR_8, VAR_17, VAR_26);

    FUNC_0(VAR_8, (VAR_24 > 1) ? VAR_14 : VAR_15, VAR_26);
    VAR_26 = (VAR_21 != VAR_6)
        ? VAR_4
        : (VAR_20 + VAR_9);

    for (;;) {
        if (VAR_25->rmax == VAR_2)
            FUNC_0(VAR_8, VAR_13, VAR_26, VAR_25->rmin);
        else if (VAR_25->rmin == VAR_2)
            FUNC_0(VAR_8, VAR_18, VAR_26, VAR_25->rmax);
        else if (VAR_25->rmax == VAR_1)
            FUNC_0(VAR_8, VAR_11, VAR_26, VAR_25->rmin);
        else
            FUNC_0(VAR_8, VAR_10, VAR_26, VAR_25->rmin,
                    VAR_25->rmax);

        if (--VAR_24 <= 0) {
            FUNC_1(VAR_3, VAR_8);
            break;
        }
        FUNC_2(VAR_16, VAR_8);
        VAR_25++;
    }

    if (VAR_21 > VAR_5)
        VAR_21->pUsageProc(VAR_21, VAR_0);
}
