
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int (* f_FM_MAC_SetTxPauseFrames ) (scalar_t__,int ,int ,int ) ;} ;
typedef TYPE_1__ t_FmMacControllerDriver ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;

t_Error FUNC_3(t_Handle VAR_4,
                                uint8_t VAR_5,
                                uint16_t VAR_6,
                                uint16_t VAR_7)
{
    t_FmMacControllerDriver *VAR_8 = (t_FmMacControllerDriver *)VAR_4;

    FUNC_1(VAR_8, VAR_0);

    if (VAR_8->f_FM_MAC_SetTxPauseFrames)
        return VAR_8->f_FM_MAC_SetTxPauseFrames(VAR_4,
                                                                  VAR_5,
                                                                  VAR_6,
                                                                  VAR_7);

    FUNC_0(VAR_2, VAR_1, VAR_3);
}
