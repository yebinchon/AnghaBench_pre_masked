
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pzProgName; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_6__ {int optOccCt; int optMinCt; int fOptState; int pz_Name; } ;
typedef TYPE_2__ tOptDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;

__attribute__((used)) static bool
FUNC_1(tOptions * VAR_6, tOptDesc * VAR_7)
{
    (void)VAR_6;





    if (VAR_7->optOccCt >= VAR_7->optMinCt)
        return 1;





    if ( (VAR_7->fOptState & VAR_0)
       && (VAR_7->fOptState & (VAR_1 | VAR_2)) )
        return 1;

    if (VAR_7->optMinCt > 1)
         FUNC_0(VAR_3, VAR_4, VAR_6->pzProgName, VAR_7->pz_Name,
                 VAR_7->optMinCt);
    else FUNC_0(VAR_3, VAR_5, VAR_6->pzProgName, VAR_7->pz_Name);
    return 0;
}
