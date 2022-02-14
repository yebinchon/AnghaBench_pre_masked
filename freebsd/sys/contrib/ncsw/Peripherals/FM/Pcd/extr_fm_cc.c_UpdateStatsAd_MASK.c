
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {scalar_t__ h_StatsCounters; scalar_t__ h_StatsFLRs; scalar_t__ h_StatsAd; } ;
typedef TYPE_1__ t_FmPcdCcStatsParams ;
struct TYPE_6__ {int nextActionIndx; int profileTableAddr; } ;
typedef TYPE_2__ t_AdOfTypeStats ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(t_FmPcdCcStatsParams *VAR_7,
                          t_Handle VAR_8, uint64_t VAR_9)
{
    t_AdOfTypeStats *VAR_10;
    uint32_t VAR_11, VAR_12, VAR_13;




    VAR_10 = (t_AdOfTypeStats *)VAR_7->h_StatsAd;

    VAR_13 = VAR_6;
    FUNC_1(VAR_10->profileTableAddr, VAR_13);

    VAR_12 = (uint32_t)((FUNC_2(VAR_8) - VAR_9));
    VAR_13 = 0;
    VAR_13 |= (uint32_t)((VAR_12 << VAR_4)
            & VAR_3);
    VAR_13 |= (VAR_2 | VAR_5);






    FUNC_1(VAR_10->nextActionIndx, VAR_13);

    VAR_11 = (uint32_t)((FUNC_2(
            VAR_7->h_StatsCounters) - VAR_9));
    FUNC_0(VAR_10, VAR_11);
}
