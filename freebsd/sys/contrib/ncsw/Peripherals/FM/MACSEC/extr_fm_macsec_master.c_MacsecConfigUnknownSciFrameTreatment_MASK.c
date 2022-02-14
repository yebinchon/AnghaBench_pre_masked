
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int unknownSciTreatMode; struct TYPE_3__* p_FmMacsecDriverParam; } ;
typedef TYPE_1__ t_FmMacsec ;
typedef int t_Error ;
typedef int e_FmMacsecUnknownSciFrameTreatment ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static t_Error FUNC_1(t_Handle VAR_2, e_FmMacsecUnknownSciFrameTreatment VAR_3)
{
    t_FmMacsec *VAR_4 = (t_FmMacsec*)VAR_2;

    FUNC_0(VAR_4, VAR_0);
    FUNC_0(VAR_4->p_FmMacsecDriverParam, VAR_0);

    VAR_4->p_FmMacsecDriverParam->unknownSciTreatMode = VAR_3;

    return VAR_1;
}
