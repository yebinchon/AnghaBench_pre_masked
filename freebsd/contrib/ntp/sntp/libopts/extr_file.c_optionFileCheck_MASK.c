
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tuFileMode ;
typedef int teOptFileType ;
typedef int tOptions ;
struct TYPE_6__ {int fOptState; int * optCookie; } ;
typedef TYPE_1__ tOptDesc ;


 int FUNC_0 (int *) ;
 int VAR_0 ;





 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void
FUNC_5(tOptions * VAR_9, tOptDesc * VAR_10,
                teOptFileType VAR_11, tuFileMode VAR_12)
{
    if (VAR_9 <= VAR_2) {
        if (VAR_9 != VAR_3)
            return;

        switch (VAR_11 & VAR_0) {
        case 130:
            FUNC_3(VAR_7 + VAR_6, VAR_5);
            break;

        case 131:
            FUNC_3(VAR_8 + VAR_6, VAR_5);
            break;
        }
        return;
    }

    if ((VAR_10->fOptState & VAR_4) != 0) {
        if (VAR_10->optCookie != ((void*)0))
            FUNC_0(VAR_10->optCookie);
        return;
    }

    FUNC_1(VAR_11, VAR_9, VAR_10);

    switch (VAR_11 & VAR_1) {
    default:
    case 129: break;
    case 128: FUNC_4( VAR_9, VAR_10, VAR_12); break;
    case 132: FUNC_2(VAR_9, VAR_10, VAR_12); break;
    }
}
