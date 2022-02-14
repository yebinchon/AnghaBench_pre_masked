
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int * t_Handle ;
struct TYPE_8__ {int macId; int enetMode; int h_Fm; } ;
typedef TYPE_1__ t_FmMacParams ;
struct TYPE_9__ {scalar_t__ clkFreq; int resetOnInit; int macId; int enetMode; int h_Fm; } ;
typedef TYPE_2__ t_FmMacControllerDriver ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;

t_Handle FUNC_7 (t_FmMacParams *VAR_5)
{
    t_FmMacControllerDriver *VAR_6;
    uint16_t VAR_7;

    FUNC_5(VAR_5, VAR_1, ((void*)0));

    VAR_7 = FUNC_2(VAR_5->h_Fm);
    if (VAR_7 == 0)
    {
        FUNC_4(VAR_3, VAR_2, ("Can't get clock for MAC!"));
        return ((void*)0);
    }
    VAR_6 = (t_FmMacControllerDriver *)FUNC_3(VAR_5);


    if (!VAR_6)
        return ((void*)0);

    VAR_6->h_Fm = VAR_5->h_Fm;
    VAR_6->enetMode = VAR_5->enetMode;
    VAR_6->macId = VAR_5->macId;
    VAR_6->resetOnInit = VAR_0;

    VAR_6->clkFreq = VAR_7;

    return (t_Handle)VAR_6;
}
