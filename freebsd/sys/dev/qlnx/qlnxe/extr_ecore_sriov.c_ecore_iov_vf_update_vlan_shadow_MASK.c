
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* vlans; } ;
struct TYPE_6__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {int relative_vf_id; TYPE_4__ shadow_config; TYPE_2__ bulletin; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_filter_ucast {scalar_t__ opcode; scalar_t__ vlan; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_7__ {int used; scalar_t__ vid; } ;
struct TYPE_5__ {int valid_bitmap; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_9,
           struct ecore_vf_info *VAR_10,
           struct ecore_filter_ucast *VAR_11)
{
 int VAR_12;


 if (VAR_11->opcode == VAR_3) {
  for (VAR_12 = 0; VAR_12 < VAR_0 + 1; VAR_12++)
   if (VAR_10->shadow_config.vlans[VAR_12].used &&
       VAR_10->shadow_config.vlans[VAR_12].vid ==
       VAR_11->vlan) {
    VAR_10->shadow_config.vlans[VAR_12].used = 0;
    break;
   }
  if (VAR_12 == VAR_0 + 1) {
   FUNC_0(VAR_9, VAR_6,
       "VF [%d] - Tries to remove a non-existing vlan\n",
        VAR_10->relative_vf_id);
   return VAR_5;
  }
 } else if (VAR_11->opcode == VAR_4 ||
     VAR_11->opcode == VAR_2) {
  for (VAR_12 = 0; VAR_12 < VAR_0 + 1; VAR_12++)
   VAR_10->shadow_config.vlans[VAR_12].used = 0;
 }




 if (VAR_10->bulletin.p_virt->valid_bitmap & (1 << VAR_8))
  return VAR_7;

 if (VAR_11->opcode == VAR_1 ||
     VAR_11->opcode == VAR_4) {
  for (VAR_12 = 0; VAR_12 < VAR_0 + 1; VAR_12++) {
   if (VAR_10->shadow_config.vlans[VAR_12].used)
    continue;

   VAR_10->shadow_config.vlans[VAR_12].used = 1;
   VAR_10->shadow_config.vlans[VAR_12].vid = VAR_11->vlan;
   break;
  }

  if (VAR_12 == VAR_0 + 1) {
   FUNC_0(VAR_9, VAR_6,
       "VF [%d] - Tries to configure more than %d vlan filters\n",
       VAR_10->relative_vf_id,
       VAR_0 + 1);
   return VAR_5;
  }
 }

 return VAR_7;
}
