
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int (* f_FM_MAC_Init ) (scalar_t__) ;int macId; int enetMode; int h_Fm; int f_FM_MAC_ConfigResetOnInit; scalar_t__ resetOnInit; } ;
typedef TYPE_1__ t_FmMacControllerDriver ;
typedef int t_Error ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__) ;

t_Error FUNC_5 (t_Handle VAR_10)
{
    t_FmMacControllerDriver *VAR_11 = (t_FmMacControllerDriver *)VAR_10;

    FUNC_3(VAR_11, VAR_0);

    if (VAR_11->resetOnInit &&
        !VAR_11->f_FM_MAC_ConfigResetOnInit &&
        (FUNC_1(VAR_11->h_Fm,
                    ((FUNC_0(VAR_11->enetMode) == VAR_7) ?
                        VAR_8 : VAR_9),
                    VAR_11->macId) != VAR_3))
        FUNC_2(VAR_4, VAR_1, ("Can't reset MAC!"));

    if (VAR_11->f_FM_MAC_Init)
        return VAR_11->f_FM_MAC_Init(VAR_10);
    FUNC_2(VAR_5, VAR_2, VAR_6);
}
