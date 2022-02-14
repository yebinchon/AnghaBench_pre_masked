
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct virtchnl_ether_addr_list {int num_elements; scalar_t__ vsi_id; struct virtchnl_ether_addr* list; } ;
struct virtchnl_ether_addr {int addr; } ;
struct TYPE_2__ {scalar_t__ vsi_num; } ;
struct ixl_vf {TYPE_1__ vsi; } ;
struct ixl_pf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (struct ixl_pf*,struct ixl_vf*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ixl_pf *VAR_4, struct ixl_vf *VAR_5, void *VAR_6,
    uint16_t VAR_7)
{
 struct virtchnl_ether_addr_list *VAR_8;
 struct virtchnl_ether_addr *VAR_9;
 size_t VAR_10;
 int VAR_11;

 if (VAR_7 < sizeof(*VAR_8)) {
  FUNC_0(VAR_4, VAR_5, VAR_2,
      VAR_0);
  return;
 }

 VAR_8 = VAR_6;
 VAR_10 = sizeof(*VAR_8) +
     VAR_8->num_elements * sizeof(*VAR_9);

 if (VAR_8->num_elements == 0 ||
     VAR_8->vsi_id != VAR_5->vsi.vsi_num ||
     VAR_7 != VAR_10) {
  FUNC_0(VAR_4, VAR_5, VAR_2,
      VAR_0);
  return;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->num_elements; VAR_11++) {
  VAR_9 = &VAR_8->list[VAR_11];
  if (FUNC_4(VAR_9->addr) || FUNC_1(VAR_9->addr)) {
   FUNC_0(VAR_4, VAR_5,
       VAR_2, VAR_0);
   return;
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->num_elements; VAR_11++) {
  VAR_9 = &VAR_8->list[VAR_11];
  FUNC_2(&VAR_5->vsi, VAR_9->addr, VAR_1);
 }

 FUNC_3(VAR_4, VAR_5, VAR_3);
}
