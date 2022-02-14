
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int keysUnreadable; struct TYPE_3__* p_FmMacsecDriverParam; } ;
typedef TYPE_1__ t_FmMacsec ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static t_Error FUNC_1(t_Handle VAR_3)
{
    t_FmMacsec *VAR_4 = (t_FmMacsec*)VAR_3;

    FUNC_0(VAR_4, VAR_0);
    FUNC_0(VAR_4->p_FmMacsecDriverParam, VAR_0);

    VAR_4->p_FmMacsecDriverParam->keysUnreadable = VAR_2;

    return VAR_1;
}
