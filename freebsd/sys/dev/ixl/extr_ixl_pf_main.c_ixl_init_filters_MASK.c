
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixl_vsi {int seid; TYPE_2__* hw; int ftl; scalar_t__ back; } ;
struct ixl_pf {scalar_t__ enable_tx_fc_filter; int hw; } ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (struct ixl_vsi*,int ,int ) ;
 int FUNC_4 (struct ixl_vsi*) ;

void
FUNC_5(struct ixl_vsi *VAR_2)
{
 struct ixl_pf *VAR_3 = (struct ixl_pf *)VAR_2->back;


 FUNC_0(&VAR_2->ftl);


 FUNC_2(&VAR_3->hw, VAR_2->seid, VAR_1, ((void*)0));

 FUNC_4(VAR_2);

 FUNC_3(VAR_2, VAR_2->hw->mac.addr, VAR_0);





 if (VAR_3->enable_tx_fc_filter)
  FUNC_1(VAR_2->hw, VAR_2->seid);
}
