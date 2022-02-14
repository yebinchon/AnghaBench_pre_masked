
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int seid; struct i40e_hw* hw; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;
struct i40e_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct i40e_hw*,int ,int ,int *) ;
 int FUNC_3 (struct ifnet*,int ,struct ixl_vsi*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ixl_vsi*,int,int) ;
 int VAR_5 ;
 int FUNC_6 (struct ixl_vsi*,int) ;

void
FUNC_7(struct ixl_vsi *VAR_6)
{
 struct ifnet *VAR_7 = VAR_6->ifp;
 struct i40e_hw *VAR_8 = VAR_6->hw;
 int VAR_9 = 0, VAR_10;

 FUNC_0("ixl_add_multi: begin");





 VAR_9 = FUNC_4(VAR_7);
 if (FUNC_1(VAR_9 >= VAR_3)) {

  FUNC_6(VAR_6, VAR_9);
  FUNC_2(VAR_8,
      VAR_6->seid, VAR_4, ((void*)0));
  return;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_5, VAR_6);
 if (VAR_9 > 0) {
  VAR_10 = (VAR_0 | VAR_2 | VAR_1);
  FUNC_5(VAR_6, VAR_10, VAR_9);
 }

 FUNC_0("ixl_add_multi: end");
}
