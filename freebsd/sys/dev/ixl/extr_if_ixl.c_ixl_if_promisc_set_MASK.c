
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int seid; struct i40e_hw* hw; } ;
struct ixl_pf {struct ixl_vsi vsi; } ;
struct ifnet {int dummy; } ;
struct i40e_hw {int dummy; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_hw*,int ,int,int *) ;
 int FUNC_1 (struct i40e_hw*,int ,int,int *,int) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 struct ifnet* FUNC_3 (int ) ;
 struct ixl_pf* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(if_ctx_t VAR_5, int VAR_6)
{
 struct ixl_pf *VAR_7 = FUNC_4(VAR_5);
 struct ixl_vsi *VAR_8 = &VAR_7->vsi;
 struct ifnet *VAR_9 = FUNC_3(VAR_5);
 struct i40e_hw *VAR_10 = VAR_8->hw;
 int VAR_11;
 bool VAR_12 = VAR_0, VAR_13 = VAR_0;

 if (VAR_6 & VAR_2)
  VAR_12 = VAR_13 = VAR_4;
 else if (VAR_6 & VAR_1 || FUNC_2(VAR_9) >=
     VAR_3)
  VAR_13 = VAR_4;

 VAR_11 = FUNC_1(VAR_10,
     VAR_8->seid, VAR_12, ((void*)0), 1);
 if (VAR_11)
  return (VAR_11);
 VAR_11 = FUNC_0(VAR_10,
     VAR_8->seid, VAR_13, ((void*)0));
 return (VAR_11);
}
