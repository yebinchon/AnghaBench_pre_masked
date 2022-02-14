
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int link_speed; int link_status; } ;
struct TYPE_9__ {TYPE_5__ link_event; } ;
struct virtchnl_pf_event {TYPE_4__ event_data; int severity; int event; } ;
struct ixl_vf {int dummy; } ;
struct TYPE_6__ {int link_active; } ;
struct TYPE_7__ {scalar_t__ link_speed; } ;
struct TYPE_8__ {TYPE_2__ link_info; } ;
struct i40e_hw {TYPE_3__ phy; } ;
struct ixl_pf {TYPE_1__ vsi; struct i40e_hw hw; } ;
typedef int event ;
typedef enum virtchnl_link_speed { ____Placeholder_virtchnl_link_speed } virtchnl_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixl_pf*,struct ixl_vf*,int ,int ,struct virtchnl_pf_event*,int) ;

__attribute__((used)) static void
FUNC_1(struct ixl_pf *VAR_4, struct ixl_vf *VAR_5)
{
 struct virtchnl_pf_event VAR_6;
 struct i40e_hw *VAR_7;

 VAR_7 = &VAR_4->hw;
 VAR_6.event = VAR_2;
 VAR_6.severity = VAR_1;
 VAR_6.event_data.link_event.link_status = VAR_4->vsi.link_active;
 VAR_6.event_data.link_event.link_speed =
  (enum virtchnl_link_speed)VAR_7->phy.link_info.link_speed;

 FUNC_0(VAR_4, VAR_5, VAR_3, VAR_0, &VAR_6,
   sizeof(VAR_6));
}
