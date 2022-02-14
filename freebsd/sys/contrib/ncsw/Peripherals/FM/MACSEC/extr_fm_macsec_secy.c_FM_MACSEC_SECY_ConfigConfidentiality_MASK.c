
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int confidentialityEnable; int confidentialityOffset; struct TYPE_3__* p_FmMacsecSecYDriverParam; } ;
typedef TYPE_1__ t_FmMacsecSecY ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

t_Error FUNC_1(t_Handle VAR_3, bool VAR_4, uint16_t VAR_5)
{
    t_FmMacsecSecY *VAR_6 = (t_FmMacsecSecY *)VAR_3;

    FUNC_0(VAR_6, VAR_0);
    FUNC_0(VAR_6->p_FmMacsecSecYDriverParam, VAR_1);

    VAR_6->confidentialityEnable = VAR_4;
    VAR_6->confidentialityOffset = VAR_5;

    return VAR_2;
}
