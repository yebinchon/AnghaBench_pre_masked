
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* h_Portals; } ;
typedef TYPE_1__ t_Qm ;
typedef scalar_t__ t_Handle ;
typedef size_t e_DpaaSwPortal ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline__ void FUNC_1(t_Handle VAR_0, t_Handle VAR_1, e_DpaaSwPortal VAR_2)
{
    FUNC_0(!((t_Qm*)VAR_0)->h_Portals[VAR_2] || !VAR_1);
    ((t_Qm*)VAR_0)->h_Portals[VAR_2] = VAR_1;
}
