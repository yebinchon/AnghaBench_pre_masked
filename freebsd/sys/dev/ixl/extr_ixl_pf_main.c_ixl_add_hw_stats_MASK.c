
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ixl_vsi {int ctx; } ;
struct i40e_hw_port_stats {int dummy; } ;
struct ixl_pf {int admin_irq; struct i40e_hw_port_stats stats; struct ixl_vsi vsi; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct ixl_vsi*) ;
 int FUNC_6 (struct sysctl_ctx_list*,struct sysctl_oid_list*,struct i40e_hw_port_stats*) ;
 int FUNC_7 (int ,struct ixl_vsi*,struct sysctl_ctx_list*,char*) ;

void
FUNC_8(struct ixl_pf *VAR_2)
{
 struct ixl_vsi *VAR_3 = &VAR_2->vsi;
 device_t VAR_4 = FUNC_4(VAR_3->ctx);
 struct i40e_hw_port_stats *VAR_5 = &VAR_2->stats;

 struct sysctl_ctx_list *VAR_6 = FUNC_2(VAR_4);
 struct sysctl_oid *VAR_7 = FUNC_3(VAR_4);
 struct sysctl_oid_list *VAR_8 = FUNC_1(VAR_7);


 FUNC_0(VAR_6, VAR_8, VAR_1, "admin_irq",
   VAR_0, &VAR_2->admin_irq,
   "Admin Queue IRQs received");

 FUNC_7(VAR_4, VAR_3, VAR_6, "pf");

 FUNC_5(VAR_4, VAR_3);

 FUNC_6(VAR_6, VAR_8, VAR_5);
}
