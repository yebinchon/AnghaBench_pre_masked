
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
struct TYPE_11__ {int fOptState; char* pz_Name; scalar_t__ optMinCt; char* pzText; int * pOptProc; } ;
typedef TYPE_2__ tOptDesc ;
struct TYPE_12__ {char* pzOpt; char* pzNo; char* pzKey; char* pzFile; char* pzKeyL; char* pzBool; char* pzNum; char* pzNest; char* pzStr; char* pzTime; char* pzOptFmt; char* pzReq; } ;
typedef TYPE_3__ arg_types_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char* VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (char*,int,char*,char const*,char const*,...) ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;

__attribute__((used)) static void
FUNC_5(tOptions * VAR_8, tOptDesc * VAR_9, arg_types_t * VAR_10)
{
    FUNC_3(VAR_8, VAR_9, VAR_10);

    {
        char VAR_11[80];
        char const * VAR_12;






        if (VAR_9->fOptState & VAR_1) {
            VAR_12 = VAR_10->pzOpt;

        } else switch (FUNC_0(VAR_9->fOptState)) {
        case 131: VAR_12 = VAR_10->pzNo; break;
        case 135: VAR_12 = VAR_10->pzKey; break;
        case 134: VAR_12 = VAR_10->pzFile; break;
        case 132: VAR_12 = VAR_10->pzKeyL; break;
        case 136: VAR_12 = VAR_10->pzBool; break;
        case 130: VAR_12 = VAR_10->pzNum; break;
        case 133: VAR_12 = VAR_10->pzNest; break;
        case 129: VAR_12 = VAR_10->pzStr; break;
        case 128: VAR_12 = VAR_10->pzTime; break;
        default: goto bogus_desc;
        }
        FUNC_4(VAR_11, sizeof(VAR_11), VAR_10->pzOptFmt, VAR_12, VAR_9->pz_Name,
                 (VAR_9->optMinCt != 0) ? VAR_10->pzReq : VAR_10->pzOpt);

        FUNC_1(VAR_4, VAR_3, VAR_11, VAR_9->pzText);

        switch (FUNC_0(VAR_9->fOptState)) {
        case 135:
        case 132:
            VAR_2 = (VAR_9->pOptProc != ((void*)0)) ? 1 : VAR_2;
        }
    }

    return;

 bogus_desc:
    FUNC_1(VAR_5, VAR_7, VAR_8->pzProgName, VAR_9->pz_Name);
    FUNC_2(VAR_0);
}
