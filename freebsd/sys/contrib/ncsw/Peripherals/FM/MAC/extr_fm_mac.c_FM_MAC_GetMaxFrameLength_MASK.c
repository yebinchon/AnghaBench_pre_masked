
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int (* f_FM_MAC_GetMaxFrameLength ) (scalar_t__) ;} ;
typedef TYPE_1__ t_FmMacControllerDriver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

uint16_t FUNC_3(t_Handle VAR_4)
{
    t_FmMacControllerDriver *VAR_5 = (t_FmMacControllerDriver *)VAR_4;

    FUNC_1(VAR_5, VAR_0, 0);

    if (VAR_5->f_FM_MAC_GetMaxFrameLength)
        return VAR_5->f_FM_MAC_GetMaxFrameLength(VAR_4);

    FUNC_0(VAR_2, VAR_1, VAR_3);
    return 0;
}
