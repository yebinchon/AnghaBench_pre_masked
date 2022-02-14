
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_5__ {TYPE_1__* p_FmFpmRegs; } ;
typedef TYPE_2__ t_Fm ;
typedef int t_Error ;
struct TYPE_4__ {int fm_rstc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

t_Error FUNC_4(t_Handle VAR_3)
{
 t_Fm *VAR_4 = (t_Fm*)VAR_3;

    FUNC_1(VAR_4, VAR_0);

    FUNC_2(VAR_4->p_FmFpmRegs->fm_rstc, VAR_2);
    FUNC_0();
    FUNC_3(100);

    return VAR_1;
}
