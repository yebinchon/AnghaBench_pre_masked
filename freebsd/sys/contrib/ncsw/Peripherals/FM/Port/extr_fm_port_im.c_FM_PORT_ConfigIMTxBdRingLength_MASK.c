
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int bdRingSize; } ;
struct TYPE_5__ {TYPE_1__ im; struct TYPE_5__* p_FmPortDriverParam; struct TYPE_5__* imEn; } ;
typedef TYPE_2__ t_FmPort ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;

t_Error FUNC_1(t_Handle VAR_3, uint16_t VAR_4)
{
    t_FmPort *VAR_5 = (t_FmPort*)VAR_3;

    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_5->imEn, VAR_1);
    FUNC_0(VAR_5->p_FmPortDriverParam, VAR_0);

    VAR_5->im.bdRingSize = VAR_4;

    return VAR_2;
}
