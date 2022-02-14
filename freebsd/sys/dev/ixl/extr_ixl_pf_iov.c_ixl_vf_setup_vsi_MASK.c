
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hw_filters_del; scalar_t__ hw_filters_add; int seid; } ;
struct ixl_vf {TYPE_1__ vsi; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct i40e_hw*,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ixl_pf*,struct ixl_vf*) ;

__attribute__((used)) static int
FUNC_4(struct ixl_pf *VAR_1, struct ixl_vf *VAR_2)
{
 struct i40e_hw *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_1->hw;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4 != 0)
  return (VAR_4);


 VAR_4 = FUNC_1(VAR_3, VAR_2->vsi.seid, VAR_0, ((void*)0));
 if (VAR_4)
  FUNC_0(VAR_1->dev, "Error configuring VF VSI for broadcast promiscuous\n");

 FUNC_2(&VAR_2->vsi);

 VAR_2->vsi.hw_filters_add = 0;
 VAR_2->vsi.hw_filters_del = 0;

 return (0);
}
