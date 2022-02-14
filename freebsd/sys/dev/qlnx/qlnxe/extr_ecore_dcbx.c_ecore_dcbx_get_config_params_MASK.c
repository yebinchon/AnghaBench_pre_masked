
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ecore_hwfn {int p_dev; TYPE_4__* p_dcbx_info; } ;
struct ecore_dcbx_set {int dummy; } ;
struct TYPE_8__ {int valid; struct ecore_dcbx_set params; } ;
struct TYPE_10__ {TYPE_3__ config; struct ecore_dcbx_set dscp; int enabled; int ver_num; scalar_t__ override_flags; } ;
struct TYPE_7__ {TYPE_5__ params; int enabled; scalar_t__ local; scalar_t__ ieee; scalar_t__ cee; } ;
struct ecore_dcbx_get {TYPE_2__ operational; } ;
struct ecore_dcbx_dscp_params {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {TYPE_5__ dscp; } ;
struct TYPE_9__ {TYPE_5__ set; TYPE_1__ get; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ecore_dcbx_get* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,struct ecore_dcbx_get*) ;
 int FUNC_2 (struct ecore_dcbx_set*,TYPE_5__*,int) ;
 int FUNC_3 (struct ecore_dcbx_get*,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_dcbx_get*,int ) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_8,
        struct ecore_dcbx_set *VAR_9)
{
 struct ecore_dcbx_get *VAR_10;
 enum _ecore_status_t VAR_11;

 if (VAR_8->p_dcbx_info->set.config.valid) {
  FUNC_2(VAR_9, &VAR_8->p_dcbx_info->set,
       sizeof(struct ecore_dcbx_set));
  return VAR_6;
 }

 VAR_10 = FUNC_0(VAR_8->p_dev, VAR_7,
          sizeof(*VAR_10));
 if (!VAR_10)
  return VAR_5;

 FUNC_3(VAR_10, 0, sizeof(*VAR_10));
 VAR_11 = FUNC_4(VAR_8, VAR_10,
         VAR_4);
 if (VAR_11) {
  FUNC_1(VAR_8->p_dev, VAR_10);
  return VAR_11;
 }
 VAR_8->p_dcbx_info->set.override_flags = 0;

 VAR_8->p_dcbx_info->set.ver_num = VAR_1;
 if (VAR_10->operational.cee)
  VAR_8->p_dcbx_info->set.ver_num |= VAR_0;
 if (VAR_10->operational.ieee)
  VAR_8->p_dcbx_info->set.ver_num |= VAR_2;
 if (VAR_10->operational.local)
  VAR_8->p_dcbx_info->set.ver_num |= VAR_3;

 VAR_8->p_dcbx_info->set.enabled = VAR_10->operational.enabled;
 FUNC_2(&VAR_8->p_dcbx_info->set.dscp,
      &VAR_8->p_dcbx_info->get.dscp,
      sizeof(struct ecore_dcbx_dscp_params));
 FUNC_2(&VAR_8->p_dcbx_info->set.config.params,
      &VAR_10->operational.params,
      sizeof(VAR_8->p_dcbx_info->set.config.params));
 VAR_8->p_dcbx_info->set.config.valid = 1;

 FUNC_2(VAR_9, &VAR_8->p_dcbx_info->set,
      sizeof(struct ecore_dcbx_set));

 FUNC_1(VAR_8->p_dev, VAR_10);

 return VAR_6;
}
