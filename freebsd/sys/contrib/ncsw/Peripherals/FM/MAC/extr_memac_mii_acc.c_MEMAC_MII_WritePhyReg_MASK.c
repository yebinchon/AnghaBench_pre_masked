
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int enetMode; struct TYPE_4__* p_MiiMemMap; } ;
typedef TYPE_1__ t_Memac ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
typedef enum enet_speed { ____Placeholder_enet_speed } enet_speed ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int) ;

t_Error FUNC_3(t_Handle VAR_1,
                             uint8_t VAR_2,
                             uint8_t VAR_3,
                             uint16_t VAR_4)
{
    t_Memac *VAR_5 = (t_Memac *)VAR_1;

    FUNC_1(VAR_5, VAR_0);
    FUNC_1(VAR_5->p_MiiMemMap, VAR_0);

    return (t_Error)FUNC_2(VAR_5->p_MiiMemMap,
                                                 VAR_2,
                                                 VAR_3,
                                                 VAR_4,
                                                 (enum enet_speed)FUNC_0(VAR_5->enetMode));
}
