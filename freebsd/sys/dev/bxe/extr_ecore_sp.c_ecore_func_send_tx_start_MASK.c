
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flow_control_configuration {int * dcb_outer_pri; int * traffic_type_to_priority_cos; int dont_add_pri_0; int dcb_version; int dcb_enabled; } ;
struct ecore_func_tx_start_params {int * dcb_outer_pri; int * traffic_type_to_priority_cos; int dont_add_pri_0; int dcb_version; int dcb_enabled; } ;
struct TYPE_2__ {struct ecore_func_tx_start_params tx_start; } ;
struct ecore_func_state_params {TYPE_1__ params; struct ecore_func_sp_obj* f_obj; } ;
struct ecore_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct flow_control_configuration*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct bxe_softc *VAR_3,
           struct ecore_func_state_params *VAR_4)
{
 struct ecore_func_sp_obj *VAR_5 = VAR_4->f_obj;
 struct flow_control_configuration *VAR_6 =
  (struct flow_control_configuration *)VAR_5->rdata;
 ecore_dma_addr_t VAR_7 = VAR_5->rdata_mapping;
 struct ecore_func_tx_start_params *VAR_8 =
  &VAR_4->params.tx_start;
 int VAR_9;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->dcb_enabled = VAR_8->dcb_enabled;
 VAR_6->dcb_version = VAR_8->dcb_version;
 VAR_6->dont_add_pri_0 = VAR_8->dont_add_pri_0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->traffic_type_to_priority_cos); VAR_9++)
  VAR_6->traffic_type_to_priority_cos[VAR_9] =
   VAR_8->traffic_type_to_priority_cos[VAR_9];

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_6->dcb_outer_pri[VAR_9] = VAR_8->dcb_outer_pri[VAR_9];







 return FUNC_2(VAR_3, VAR_2, 0,
        VAR_7, VAR_1);
}
