
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct virtchnl_ether_addr_list {int num_elements; scalar_t__ vsi_id; struct virtchnl_ether_addr* list; } ;
struct virtchnl_ether_addr {int addr; } ;
struct ixl_vsi {scalar_t__ vsi_num; } ;
struct ixl_vf {struct ixl_vsi vsi; } ;
struct ixl_pf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_1 (struct ixl_vsi*,int ,int ) ;
 int FUNC_2 (struct ixl_pf*,struct ixl_vf*,int ) ;
 scalar_t__ FUNC_3 (struct ixl_vf*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ixl_pf *VAR_3, struct ixl_vf *VAR_4, void *VAR_5,
    uint16_t VAR_6)
{
 struct virtchnl_ether_addr_list *VAR_7;
 struct virtchnl_ether_addr *VAR_8;
 struct ixl_vsi *VAR_9;
 int VAR_10;
 size_t VAR_11;

 VAR_9 = &VAR_4->vsi;

 if (VAR_6 < sizeof(*VAR_7)) {
  FUNC_0(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }

 VAR_7 = VAR_5;
 VAR_11 = sizeof(*VAR_7) +
     VAR_7->num_elements * sizeof(*VAR_8);

 if (VAR_7->num_elements == 0 ||
     VAR_7->vsi_id != VAR_9->vsi_num ||
     VAR_6 != VAR_11) {
  FUNC_0(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->num_elements; VAR_10++) {
  if (FUNC_3(VAR_4, VAR_7->list[VAR_10].addr) != 0) {
   FUNC_0(VAR_3, VAR_4,
       VAR_2, VAR_0);
   return;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->num_elements; VAR_10++) {
  VAR_8 = &VAR_7->list[VAR_10];
  FUNC_1(VAR_9, VAR_8->addr, VAR_1);
 }

 FUNC_2(VAR_3, VAR_4, VAR_2);
}
