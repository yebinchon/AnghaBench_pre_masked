
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ixl_vsi {scalar_t__ link_active; int ctx; } ;
struct TYPE_3__ {int link_speed; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct i40e_hw {TYPE_2__ phy; } ;
struct ixl_pf {scalar_t__ link_up; struct i40e_hw hw; struct ixl_vsi vsi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ixl_pf*) ;
 int FUNC_2 (struct ixl_pf*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct ixl_pf *VAR_4)
{
 struct ixl_vsi *VAR_5 = &VAR_4->vsi;
 struct i40e_hw *VAR_6 = &VAR_4->hw;
 u64 VAR_7;

 if (VAR_4->link_up) {
  if (VAR_5->link_active == VAR_0) {
   VAR_5->link_active = VAR_3;
   VAR_7 = FUNC_3(VAR_6->phy.link_info.link_speed);
   FUNC_0(VAR_5->ctx, VAR_2, VAR_7);
   FUNC_2(VAR_4);




  }
 } else {
  if (VAR_5->link_active == VAR_3) {
   VAR_5->link_active = VAR_0;
   FUNC_0(VAR_5->ctx, VAR_1, 0);



  }
 }
}
