
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int fwExtStructsMemAttr; int fwExtStructsMemId; } ;
struct TYPE_5__ {TYPE_1__ im; struct TYPE_5__* p_FmPortDriverParam; struct TYPE_5__* imEn; } ;
typedef TYPE_2__ t_FmPort ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;

t_Error FUNC_1(t_Handle VAR_3,
                                                       uint8_t VAR_4,
                                                       uint32_t VAR_5)
{
    t_FmPort *VAR_6 = (t_FmPort*)VAR_3;

    FUNC_0(VAR_6, VAR_0);
    FUNC_0(VAR_6->imEn, VAR_1);
    FUNC_0(VAR_6->p_FmPortDriverParam, VAR_0);

    VAR_6->im.fwExtStructsMemId = VAR_4;
    VAR_6->im.fwExtStructsMemAttr = VAR_5;

    return VAR_2;
}
