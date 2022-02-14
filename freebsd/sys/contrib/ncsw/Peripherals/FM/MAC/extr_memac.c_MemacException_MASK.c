
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int h_App; int (* f_Exception ) (int ,int ) ;int p_MemMap; } ;
typedef TYPE_1__ t_Memac ;
typedef scalar_t__ t_Handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(t_Handle VAR_3)
{
    t_Memac *VAR_4 = (t_Memac *)VAR_3;
    uint32_t VAR_5, VAR_6;

    VAR_5 = FUNC_1(VAR_4->p_MemMap, 0xffffffff);
    VAR_6 = FUNC_2(VAR_4->p_MemMap);





    VAR_5 &= ((VAR_6 & VAR_0) >> 16);

    FUNC_0(VAR_4->p_MemMap, VAR_5);

    if (VAR_5 & VAR_1)
        VAR_4->f_Exception(VAR_4->h_App, VAR_2);
}
