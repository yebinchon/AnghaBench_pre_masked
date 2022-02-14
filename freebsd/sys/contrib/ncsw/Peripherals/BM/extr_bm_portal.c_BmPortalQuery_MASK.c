
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_11__ {int p_BmPortalLow; } ;
typedef TYPE_4__ t_BmPortal ;
struct bman_depletion {int dummy; } ;
struct TYPE_8__ {struct bman_depletion state; } ;
struct TYPE_10__ {struct bman_depletion state; } ;
struct TYPE_9__ {TYPE_1__ as; TYPE_3__ ds; } ;
struct bm_mc_result {TYPE_2__ query; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ) ;
 struct bm_mc_result* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

t_Error FUNC_6(t_Handle VAR_3, struct bman_depletion *VAR_4, bool VAR_5)
{
    t_BmPortal *VAR_6 = (t_BmPortal *)VAR_3;
    struct bm_mc_result *VAR_7;

    FUNC_2(VAR_6, VAR_1);

    FUNC_0(VAR_6);
    FUNC_5(VAR_6->p_BmPortalLow);
    FUNC_3(VAR_6->p_BmPortalLow, VAR_0);
    while (!(VAR_7 = FUNC_4(VAR_6->p_BmPortalLow))) ;
    if (VAR_5)
        *VAR_4 = VAR_7->query.ds.state;
    else
        *VAR_4 = VAR_7->query.as.state;
    FUNC_1(VAR_6);
    return VAR_2;
}
