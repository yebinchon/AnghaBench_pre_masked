
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct virtchnl_vlan_filter_list {int num_elements; scalar_t__ vsi_id; scalar_t__* vlan_id; } ;
struct TYPE_2__ {scalar_t__ vsi_num; } ;
struct ixl_vf {int vf_flags; int mac; TYPE_1__ vsi; } ;
struct ixl_pf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (struct ixl_pf*,struct ixl_vf*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ixl_pf *VAR_5, struct ixl_vf *VAR_6, void *VAR_7,
    uint16_t VAR_8)
{
 struct virtchnl_vlan_filter_list *VAR_9;
 int VAR_10;
 size_t VAR_11;

 if (VAR_8 < sizeof(*VAR_9)) {
  FUNC_0(VAR_5, VAR_6, VAR_4,
      VAR_1);
  return;
 }

 VAR_9 = VAR_7;
 VAR_11 = sizeof(*VAR_9) +
     VAR_9->num_elements * sizeof(uint16_t);
 if (VAR_9->num_elements == 0 ||
     VAR_9->vsi_id != VAR_6->vsi.vsi_num ||
     VAR_8 != VAR_11) {
  FUNC_0(VAR_5, VAR_6, VAR_4,
      VAR_1);
  return;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->num_elements; VAR_10++) {
  if (VAR_9->vlan_id[VAR_10] > VAR_0) {
   FUNC_0(VAR_5, VAR_6, VAR_3,
       VAR_1);
   return;
  }
 }

 if (!(VAR_6->vf_flags & VAR_2)) {
  FUNC_0(VAR_5, VAR_6, VAR_3,
      VAR_1);
  return;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->num_elements; VAR_10++)
  FUNC_1(&VAR_6->vsi, VAR_6->mac, VAR_9->vlan_id[VAR_10]);

 FUNC_2(VAR_5, VAR_6, VAR_4);
}
