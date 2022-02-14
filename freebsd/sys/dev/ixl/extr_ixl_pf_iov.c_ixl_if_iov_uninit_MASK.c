
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixl_vsi {struct ifnet* ifp; } ;
struct TYPE_3__ {int num_allocated; } ;
struct TYPE_4__ {scalar_t__ seid; } ;
struct ixl_vf {int ctx; TYPE_1__ qtag; TYPE_2__ vsi; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {int num_vfs; scalar_t__ veb_seid; struct ixl_vf* vfs; scalar_t__ enable_vf_loopback; int qmgr; struct ixl_vsi vsi; struct i40e_hw hw; } ;
struct ifnet {int dummy; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (struct ixl_vf*,int ) ;
 int FUNC_1 (struct i40e_hw*,scalar_t__,int *) ;
 struct ixl_pf* FUNC_2 (int ) ;
 int FUNC_3 (struct ixl_pf*,int) ;
 int FUNC_4 (struct ixl_pf*,char*,int,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(if_ctx_t VAR_1)
{
 struct ixl_pf *VAR_2 = FUNC_2(VAR_1);
 struct i40e_hw *VAR_3;
 struct ixl_vsi *VAR_4;
 struct ifnet *VAR_5;
 struct ixl_vf *VAR_6;
 int VAR_7, VAR_8;

 VAR_3 = &VAR_2->hw;
 VAR_4 = &VAR_2->vsi;
 VAR_5 = VAR_4->ifp;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_vfs; VAR_7++) {
  if (VAR_2->vfs[VAR_7].vsi.seid != 0)
   FUNC_1(VAR_3, VAR_2->vfs[VAR_7].vsi.seid, ((void*)0));
  FUNC_7(&VAR_2->qmgr, &VAR_2->vfs[VAR_7].qtag);
  FUNC_5(&VAR_2->vfs[VAR_7].vsi);
  FUNC_4(VAR_2, "VF %d: %d released\n",
      VAR_7, VAR_2->vfs[VAR_7].qtag.num_allocated);
  FUNC_4(VAR_2, "Unallocated total: %d\n", FUNC_6(&VAR_2->qmgr));
 }

 if (VAR_2->veb_seid != 0) {
  FUNC_1(VAR_3, VAR_2->veb_seid, ((void*)0));
  VAR_2->veb_seid = 0;
 }

 if (VAR_2->enable_vf_loopback)
  FUNC_3(VAR_2, 0);

 VAR_6 = VAR_2->vfs;
 VAR_8 = VAR_2->num_vfs;

 VAR_2->vfs = ((void*)0);
 VAR_2->num_vfs = 0;


 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_8(&VAR_6[VAR_7].ctx);
 FUNC_0(VAR_6, VAR_0);
}
