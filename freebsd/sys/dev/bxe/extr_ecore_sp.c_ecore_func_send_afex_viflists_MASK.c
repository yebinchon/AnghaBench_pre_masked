
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ecore_func_afex_viflists_params {int afex_vif_list_command; int func_to_clear; int func_bit_map; int vif_list_index; } ;
struct TYPE_2__ {struct ecore_func_afex_viflists_params afex_viflists; } ;
struct ecore_func_state_params {TYPE_1__ params; struct ecore_func_sp_obj* f_obj; } ;
struct ecore_func_sp_obj {scalar_t__ afex_rdata; } ;
struct bxe_softc {int dummy; } ;
struct afex_vif_list_ramrod_data {int func_to_clear; int func_bit_map; int vif_list_index; int afex_vif_list_command; int echo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct afex_vif_list_ramrod_data*,int ,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static
inline int FUNC_4(struct bxe_softc *VAR_2,
      struct ecore_func_state_params *VAR_3)
{
 struct ecore_func_sp_obj *VAR_4 = VAR_3->f_obj;
 struct afex_vif_list_ramrod_data *VAR_5 =
  (struct afex_vif_list_ramrod_data *)VAR_4->afex_rdata;
 struct ecore_func_afex_viflists_params *VAR_6 =
  &VAR_3->params.afex_viflists;
 uint64_t *VAR_7 = (uint64_t *)VAR_5;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));


 VAR_5->vif_list_index = FUNC_0(VAR_6->vif_list_index);
 VAR_5->func_bit_map = VAR_6->func_bit_map;
 VAR_5->afex_vif_list_command = VAR_6->afex_vif_list_command;
 VAR_5->func_to_clear = VAR_6->func_to_clear;


 VAR_5->echo = VAR_6->afex_vif_list_command;

 FUNC_2(VAR_2, "afex: ramrod lists, cmd 0x%x index 0x%x func_bit_map 0x%x func_to_clr 0x%x\n",
    VAR_5->afex_vif_list_command, VAR_5->vif_list_index,
    VAR_5->func_bit_map, VAR_5->func_to_clear);
 return FUNC_3(VAR_2, VAR_1, 0,
        *VAR_7, VAR_0);
}
