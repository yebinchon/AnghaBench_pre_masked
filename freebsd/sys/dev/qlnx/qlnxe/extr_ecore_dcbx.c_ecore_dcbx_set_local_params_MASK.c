
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ecore_hwfn {TYPE_2__* p_dcbx_info; } ;
struct TYPE_7__ {int params; } ;
struct ecore_dcbx_set {int ver_num; int override_flags; TYPE_3__ config; scalar_t__ enabled; } ;
struct TYPE_8__ {int app; int ets; int pfc; } ;
struct dcbx_local_params {int config; TYPE_4__ features; scalar_t__ flags; } ;
struct TYPE_5__ {int features; } ;
struct TYPE_6__ {TYPE_1__ operational; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int *,int) ;
 int FUNC_2 (struct ecore_hwfn*,int *,int *,int) ;
 int FUNC_3 (struct ecore_hwfn*,int *,int *) ;
 int FUNC_4 (struct ecore_hwfn*,int *,int *) ;

__attribute__((used)) static void
FUNC_5(struct ecore_hwfn *VAR_6,
       struct dcbx_local_params *VAR_7,
       struct ecore_dcbx_set *VAR_8)
{
 bool VAR_9 = 0;

 VAR_7->flags = 0;
 FUNC_1(&VAR_7->features,
      &VAR_6->p_dcbx_info->operational.features,
      sizeof(VAR_7->features));

 if (VAR_8->enabled) {
  VAR_7->config = VAR_8->ver_num;
  VAR_9 = !!(VAR_8->ver_num & VAR_1);
 } else
  VAR_7->config = VAR_0;

 FUNC_0(VAR_6, VAR_5, "Dcbx version = %d\n",
     VAR_7->config);

 if (VAR_8->override_flags & VAR_4)
  FUNC_4(VAR_6, &VAR_7->features.pfc,
     &VAR_8->config.params);

 if (VAR_8->override_flags & VAR_3)
  FUNC_3(VAR_6, &VAR_7->features.ets,
     &VAR_8->config.params);

 if (VAR_8->override_flags & VAR_2)
  FUNC_2(VAR_6, &VAR_7->features.app,
     &VAR_8->config.params, VAR_9);
}
