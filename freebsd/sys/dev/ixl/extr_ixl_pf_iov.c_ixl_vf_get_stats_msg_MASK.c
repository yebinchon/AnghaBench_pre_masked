
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct virtchnl_queue_select {scalar_t__ vsi_id; } ;
struct TYPE_2__ {scalar_t__ vsi_num; int eth_stats; } ;
struct ixl_vf {TYPE_1__ vsi; } ;
struct ixl_pf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_1 (struct ixl_pf*,struct ixl_vf*,int ,int ,int *,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct ixl_pf *VAR_3, struct ixl_vf *VAR_4, void *VAR_5,
    uint16_t VAR_6)
{
 struct virtchnl_queue_select *VAR_7;

 if (VAR_6 != sizeof(*VAR_7)) {
  FUNC_0(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }

 VAR_7 = VAR_5;
 if (VAR_7->vsi_id != VAR_4->vsi.vsi_num) {
  FUNC_0(VAR_3, VAR_4, VAR_2,
      VAR_0);
  return;
 }

 FUNC_2(&VAR_4->vsi);

 FUNC_1(VAR_3, VAR_4, VAR_2,
     VAR_1, &VAR_4->vsi.eth_stats, sizeof(VAR_4->vsi.eth_stats));
}
