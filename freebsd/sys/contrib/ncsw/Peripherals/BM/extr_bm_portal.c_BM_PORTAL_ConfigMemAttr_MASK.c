
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_3__ {int hwExtStructsMemAttr; struct TYPE_3__* p_BmPortalDriverParams; } ;
typedef TYPE_1__ t_BmPortal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

t_Error FUNC_1(t_Handle VAR_2, uint32_t VAR_3)
{
    t_BmPortal *VAR_4 = (t_BmPortal *)VAR_2;

    FUNC_0(VAR_4, VAR_0);
    FUNC_0(VAR_4->p_BmPortalDriverParams, VAR_0);

    VAR_4->p_BmPortalDriverParams->hwExtStructsMemAttr = VAR_3;

    return VAR_1;
}
