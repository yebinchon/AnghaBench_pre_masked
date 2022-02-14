
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_rdma_glob_cfg {scalar_t__ dscp; int dscp_en; scalar_t__ ecn; int ecn_en; scalar_t__ vlan_pri; int vlan_pri_en; } ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; int p_dev; } ;
typedef int glob_cfg ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {struct ecore_rdma_glob_cfg glob_cfg; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ,char*,scalar_t__,int,scalar_t__,int,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct ecore_rdma_glob_cfg*,struct ecore_rdma_glob_cfg*,int) ;

enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_12,
   struct ecore_rdma_glob_cfg *VAR_13,
   u32 VAR_14)
{
 struct ecore_rdma_glob_cfg VAR_15;
 enum _ecore_status_t VAR_16 = VAR_8;

 FUNC_1(VAR_12->p_dev, VAR_1,
     "dscp %d dscp en %d ecn %d ecn en %d vlan pri %d vlan_pri_en %d\n",
     VAR_13->dscp, VAR_13->dscp_en,
     VAR_13->ecn, VAR_13->ecn_en, VAR_13->vlan_pri,
     VAR_13->vlan_pri_en);


 FUNC_2(&VAR_15, &VAR_12->p_rdma_info->glob_cfg,
      sizeof(VAR_15));

 if (VAR_14 & VAR_2) {
  if (VAR_13->dscp > VAR_10) {
   FUNC_0(VAR_12->p_dev, "invalid glob dscp %d\n",
          VAR_13->dscp);
   return VAR_0;
  }
  VAR_15.dscp = VAR_13->dscp;
 }

 if (VAR_14 & VAR_3) {
  if (VAR_13->dscp_en > 1) {
   FUNC_0(VAR_12->p_dev, "invalid glob_dscp_en %d\n",
          VAR_13->dscp_en);
   return VAR_0;
  }
  VAR_15.dscp_en = VAR_13->dscp_en;
 }

 if (VAR_14 & VAR_4) {
  if (VAR_13->ecn > VAR_9) {
   FUNC_0(VAR_12->p_dev, "invalid glob ecn %d\n",
          VAR_13->ecn);
   return VAR_0;
  }
  VAR_15.ecn = VAR_13->ecn;
 }

 if (VAR_14 & VAR_5) {
  if (VAR_13->ecn_en > 1) {
   FUNC_0(VAR_12->p_dev, "invalid glob ecn en %d\n",
          VAR_13->ecn_en);
   return VAR_0;
  }
  VAR_15.ecn_en = VAR_13->ecn_en;
 }

 if (VAR_14 & VAR_6) {
  if (VAR_13->vlan_pri > VAR_11) {
   FUNC_0(VAR_12->p_dev, "invalid glob vlan pri %d\n",
          VAR_13->vlan_pri);
   return VAR_0;
  }
  VAR_15.vlan_pri = VAR_13->vlan_pri;
 }

 if (VAR_14 & VAR_7) {
  if (VAR_13->vlan_pri_en > 1) {
   FUNC_0(VAR_12->p_dev, "invalid glob vlan pri en %d\n",
          VAR_13->vlan_pri_en);
   return VAR_0;
  }
  VAR_15.vlan_pri_en = VAR_13->vlan_pri_en;
 }


 FUNC_2(&VAR_12->p_rdma_info->glob_cfg, &VAR_15,
      sizeof(VAR_15));

 return VAR_16;
}
