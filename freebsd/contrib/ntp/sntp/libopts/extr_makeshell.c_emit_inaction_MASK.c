
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pzPROGNAME; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_6__ {scalar_t__ pOptProc; int optMaxCt; int pz_DisablePfx; int pz_NAME; } ;
typedef TYPE_2__ tOptDesc ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(tOptions * VAR_8, tOptDesc * VAR_9)
{
    if (VAR_9->pOptProc == VAR_5) {
        FUNC_1(VAR_0, VAR_4);

    } else if (VAR_9->optMaxCt == 1)
        FUNC_1(VAR_3, VAR_8->pzPROGNAME,
               VAR_9->pz_NAME, VAR_9->pz_DisablePfx);
    else
        FUNC_1(VAR_2, VAR_8->pzPROGNAME,
               VAR_9->pz_NAME, VAR_9->pz_DisablePfx);

    FUNC_1(VAR_0, VAR_1);
    FUNC_0(VAR_7, VAR_6);
}
