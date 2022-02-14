
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int z ;
struct TYPE_10__ {char* pzProgName; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_11__ {int fOptState; char* pz_Name; char* pzText; int * pOptProc; } ;
typedef TYPE_2__ tOptDesc ;
struct TYPE_12__ {char* pzOpt; char* pzNo; char* pzKey; char* pzFile; char* pzKeyL; char* pzBool; char* pzNum; char* pzNest; char* pzStr; char* pzTime; } ;
typedef TYPE_3__ arg_types_t ;


 char const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char const*,char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (char*,int,char*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;

__attribute__((used)) static void
FUNC_6(tOptions * VAR_7, tOptDesc * VAR_8,
               arg_types_t * VAR_9, char const * VAR_10)
{
    FUNC_4(VAR_7, VAR_8, VAR_9);

    {
        char VAR_11[ 80 ];
        char const * VAR_12;






        if (VAR_8->fOptState & VAR_1) {
            VAR_12 = VAR_9->pzOpt;

        } else switch (FUNC_0(VAR_8->fOptState)) {
        case 131: VAR_12 = VAR_9->pzNo; break;
        case 135: VAR_12 = VAR_9->pzKey; break;
        case 134: VAR_12 = VAR_9->pzFile; break;
        case 132: VAR_12 = VAR_9->pzKeyL; break;
        case 136: VAR_12 = VAR_9->pzBool; break;
        case 130: VAR_12 = VAR_9->pzNum; break;
        case 133: VAR_12 = VAR_9->pzNest; break;
        case 129: VAR_12 = VAR_9->pzStr; break;
        case 128: VAR_12 = VAR_9->pzTime; break;
        default: goto bogus_desc;
        }

        VAR_12 = FUNC_1(VAR_12);
        if (*VAR_12 == VAR_0)
            FUNC_5(VAR_11, sizeof(VAR_11), "%s", VAR_8->pz_Name);
        else
            FUNC_5(VAR_11, sizeof(VAR_11), "%s=%s", VAR_8->pz_Name, VAR_12);
        FUNC_3(VAR_3, VAR_10, VAR_11, VAR_8->pzText);

        switch (FUNC_0(VAR_8->fOptState)) {
        case 135:
        case 132:
            VAR_2 = (VAR_8->pOptProc != ((void*)0)) ? 1 : VAR_2;
        }
    }

    return;

 bogus_desc:
    FUNC_3(VAR_4, VAR_6, VAR_7->pzProgName, VAR_8->pz_Name);
    FUNC_2(VAR_5);
}
