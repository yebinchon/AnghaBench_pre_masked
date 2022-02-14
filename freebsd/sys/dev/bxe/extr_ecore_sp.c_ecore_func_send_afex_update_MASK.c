
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function_update_data {int vif_id_change_flg; int afex_default_vlan_change_flg; int allowed_priorities_change_flg; int allowed_priorities; void* afex_default_vlan; void* vif_id; int echo; } ;
struct ecore_func_afex_update_params {int allowed_priorities; int afex_default_vlan; int vif_id; } ;
struct TYPE_2__ {struct ecore_func_afex_update_params afex_update; } ;
struct ecore_func_state_params {TYPE_1__ params; struct ecore_func_sp_obj* f_obj; } ;
struct ecore_func_sp_obj {int afex_rdata_mapping; scalar_t__ afex_rdata; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct function_update_data*,int ,int) ;
 int FUNC_2 (struct bxe_softc*,char*,void*,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct bxe_softc *VAR_3,
      struct ecore_func_state_params *VAR_4)
{
 struct ecore_func_sp_obj *VAR_5 = VAR_4->f_obj;
 struct function_update_data *VAR_6 =
  (struct function_update_data *)VAR_5->afex_rdata;
 ecore_dma_addr_t VAR_7 = VAR_5->afex_rdata_mapping;
 struct ecore_func_afex_update_params *VAR_8 =
  &VAR_4->params.afex_update;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));


 VAR_6->vif_id_change_flg = 1;
 VAR_6->vif_id = FUNC_0(VAR_8->vif_id);
 VAR_6->afex_default_vlan_change_flg = 1;
 VAR_6->afex_default_vlan =
  FUNC_0(VAR_8->afex_default_vlan);
 VAR_6->allowed_priorities_change_flg = 1;
 VAR_6->allowed_priorities = VAR_8->allowed_priorities;
 VAR_6->echo = VAR_0;







 FUNC_2(VAR_3,
    "afex: sending func_update vif_id 0x%x dvlan 0x%x prio 0x%x\n",
    VAR_6->vif_id,
    VAR_6->afex_default_vlan, VAR_6->allowed_priorities);

 return FUNC_3(VAR_3, VAR_2, 0,
        VAR_7, VAR_1);
}
