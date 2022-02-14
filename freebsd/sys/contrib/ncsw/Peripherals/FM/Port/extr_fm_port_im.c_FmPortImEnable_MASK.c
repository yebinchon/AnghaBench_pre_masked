
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* p_FmPortImPram; } ;
struct TYPE_7__ {TYPE_2__ im; } ;
typedef TYPE_3__ t_FmPort ;
typedef int t_Error ;
struct TYPE_5__ {int mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;

t_Error FUNC_2(t_FmPort *VAR_2)
{
    uint32_t VAR_3 = FUNC_0(VAR_2->im.p_FmPortImPram->mode);
    FUNC_1(VAR_2->im.p_FmPortImPram->mode, (uint32_t)(VAR_3 & ~VAR_1));
    return VAR_0;
}
