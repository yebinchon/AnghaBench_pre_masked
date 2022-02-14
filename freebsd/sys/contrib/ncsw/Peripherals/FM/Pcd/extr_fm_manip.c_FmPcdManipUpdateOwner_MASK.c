
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int h_Spinlock; int owner; } ;
typedef TYPE_1__ t_FmPcdManip ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(t_Handle VAR_0, bool VAR_1)
{

    uint32_t VAR_2;

    VAR_2 = FUNC_1(((t_FmPcdManip *)VAR_0)->h_Spinlock);
    if (VAR_1)
        ((t_FmPcdManip *)VAR_0)->owner++;
    else
    {
        FUNC_0(((t_FmPcdManip *)VAR_0)->owner);
        ((t_FmPcdManip *)VAR_0)->owner--;
    }
    FUNC_2(((t_FmPcdManip *)VAR_0)->h_Spinlock, VAR_2);
}
