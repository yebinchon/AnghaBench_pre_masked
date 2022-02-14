
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int t_Handle ;
struct TYPE_4__ {scalar_t__ nextEngine; } ;
typedef TYPE_1__ t_FmPcdCcNextEngineParams ;
typedef scalar_t__ t_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static t_Error FUNC_2(t_Handle VAR_7,
                                 t_FmPcdCcNextEngineParams *VAR_8)
{
    t_Error VAR_9;


    if ((VAR_8->nextEngine != VAR_4) &&
        (VAR_8->nextEngine != VAR_5) &&
        (VAR_8->nextEngine != VAR_6))
        FUNC_0(VAR_2, VAR_0, ("Next engine of a member should be MatchTable(cc) or Done or Policer"));


    VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_3);
    if (VAR_9)
        FUNC_0(VAR_2, VAR_9, ("member next engine parameters"));

    return VAR_1;
}
