
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fOptSet; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_5__ {char* pzStr; char const* pzReq; char* pzNum; char* pzKey; char* pzBool; char* pzOpt; char const* pzNo; void* pzOptFmt; int pzSpc; int pzNoF; int pzBrk; int pzNest; int pzFile; int pzTime; int pzKeyL; } ;





 TYPE_3__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 void* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_0(tOptions * VAR_16, char const ** VAR_17)
{
    static char const VAR_18[] = " ";
    int VAR_19 = 22;
    *VAR_17 = VAR_12;

    VAR_0.pzStr = VAR_10;
    VAR_0.pzReq = VAR_18;
    VAR_0.pzNum = VAR_7;
    VAR_0.pzKey = VAR_4;
    VAR_0.pzKeyL = VAR_5;
    VAR_0.pzTime = VAR_11;
    VAR_0.pzFile = VAR_3;
    VAR_0.pzBool = VAR_1;
    VAR_0.pzNest = VAR_6;
    VAR_0.pzOpt = VAR_8;
    VAR_0.pzNo = VAR_18;
    VAR_0.pzBrk = VAR_2;
    VAR_0.pzNoF = VAR_14;
    VAR_0.pzSpc = VAR_15;

    switch (VAR_16->fOptSet & 129) {
    case 129: VAR_0.pzOptFmt = VAR_9; break;
    case 130: VAR_0.pzOptFmt = VAR_9; break;
    case 0: VAR_0.pzOptFmt = VAR_9 + 2; break;
    case 128:
        VAR_0.pzOptFmt = VAR_13;
        VAR_10[0] = VAR_7[0] = VAR_4[0] = VAR_1[0] = ' ';
        VAR_0.pzOpt = " [arg]";
        VAR_19 = 8;
        break;
    }

    return VAR_19;
}
