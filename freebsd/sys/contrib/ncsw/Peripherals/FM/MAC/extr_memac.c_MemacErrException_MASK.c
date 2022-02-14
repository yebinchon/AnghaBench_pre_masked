
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(t_Handle VAR_7)
{
    t_Memac *VAR_8 = (t_Memac *)VAR_7;
    uint32_t VAR_9, VAR_10;

    VAR_9 = FUNC_1(VAR_8->p_MemMap, 0xffffffff);
    VAR_10 = FUNC_2(VAR_8->p_MemMap);





    VAR_9 &= ((VAR_10 & VAR_0) >> 16);

    FUNC_0(VAR_8->p_MemMap, VAR_9);

    if (VAR_9 & VAR_2)
        VAR_8->f_Exception(VAR_8->h_App, VAR_6);
    if (VAR_9 & VAR_3)
        VAR_8->f_Exception(VAR_8->h_App, VAR_4);
    if (VAR_9 & VAR_1)
        VAR_8->f_Exception(VAR_8->h_App, VAR_5);
}
