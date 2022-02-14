
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixl_vsi {TYPE_1__* ifp; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int state; struct i40e_hw hw; struct ixl_vsi vsi; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixl_pf*,int ,char*,int) ;
 int FUNC_3 (struct ixl_pf*,int) ;
 int FUNC_4 (struct ixl_pf*) ;
 int FUNC_5 (struct i40e_hw*,int ) ;

void
FUNC_6(struct ixl_pf *VAR_5)
{
 struct ixl_vsi *VAR_6 = &VAR_5->vsi;
 struct i40e_hw *VAR_7 = &VAR_5->hw;
 bool VAR_8 = !!(VAR_6->ifp->if_drv_flags & VAR_2);
 int VAR_9 = 0;
 u32 VAR_10;

 FUNC_3(VAR_5, VAR_8);


 while (VAR_9++ < 100) {
  VAR_10 = FUNC_5(VAR_7, VAR_0)
   & VAR_1;
  if (VAR_10)
   FUNC_1(100);
  else
   break;
 }
 FUNC_2(VAR_5, VAR_3,
   "Reset wait count: %d\n", VAR_9);

 FUNC_4(VAR_5);

 FUNC_0(&VAR_5->state, VAR_4);
}
