
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ctx; } ;
struct TYPE_7__ {int get_link_info; } ;
struct i40e_hw {TYPE_3__ phy; } ;
struct ixl_pf {scalar_t__ advertised_speed; int link_up; TYPE_4__ vsi; struct i40e_hw hw; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {TYPE_1__ params; } ;
struct i40e_arq_event_info {TYPE_2__ desc; } ;
struct i40e_aqc_get_link_status {int link_info; int an_info; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct i40e_hw*,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct ixl_pf *VAR_4, struct i40e_arq_event_info *VAR_5)
{
 struct i40e_hw *VAR_6 = &VAR_4->hw;
 device_t VAR_7 = FUNC_2(VAR_4->vsi.ctx);
 struct i40e_aqc_get_link_status *VAR_8 =
     (struct i40e_aqc_get_link_status *)&VAR_5->desc.params.raw;


 VAR_6->phy.get_link_info = VAR_3;
 FUNC_1(VAR_6, &VAR_4->link_up);


 if ((VAR_8->link_info & VAR_1) &&
     (VAR_4->advertised_speed) &&
     (!(VAR_8->an_info & VAR_2)) &&
     (!(VAR_8->link_info & VAR_0)))
  FUNC_0(VAR_7, "Link failed because "
      "an unqualified module was detected!\n");


}
