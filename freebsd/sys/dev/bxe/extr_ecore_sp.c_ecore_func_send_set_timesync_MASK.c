
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* hi; void* lo; } ;
struct set_timesync_ramrod_data {TYPE_2__ offset_delta; int drift_adjust_period; int drift_adjust_value; int add_sub_drift_adjust_value; int offset_cmd; int drift_adjust_cmd; } ;
struct ecore_func_set_timesync_params {int offset_delta; int drift_adjust_period; int drift_adjust_value; int add_sub_drift_adjust_value; int offset_cmd; int drift_adjust_cmd; } ;
struct TYPE_3__ {struct ecore_func_set_timesync_params set_timesync; } ;
struct ecore_func_state_params {TYPE_1__ params; struct ecore_func_sp_obj* f_obj; } ;
struct ecore_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct set_timesync_ramrod_data*,int ,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int ,int ,int ,int ,int ,void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_6(struct bxe_softc *VAR_2,
     struct ecore_func_state_params *VAR_3)
{
 struct ecore_func_sp_obj *VAR_4 = VAR_3->f_obj;
 struct set_timesync_ramrod_data *VAR_5 =
  (struct set_timesync_ramrod_data *)VAR_4->rdata;
 ecore_dma_addr_t VAR_6 = VAR_4->rdata_mapping;
 struct ecore_func_set_timesync_params *VAR_7 =
  &VAR_3->params.set_timesync;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));


 VAR_5->drift_adjust_cmd = VAR_7->drift_adjust_cmd;
 VAR_5->offset_cmd = VAR_7->offset_cmd;
 VAR_5->add_sub_drift_adjust_value =
  VAR_7->add_sub_drift_adjust_value;
 VAR_5->drift_adjust_value = VAR_7->drift_adjust_value;
 VAR_5->drift_adjust_period = VAR_7->drift_adjust_period;
 VAR_5->offset_delta.lo =
  FUNC_0(FUNC_4(VAR_7->offset_delta));
 VAR_5->offset_delta.hi =
  FUNC_0(FUNC_3(VAR_7->offset_delta));

 FUNC_2(VAR_2, "Set timesync command params: drift_cmd = %d, offset_cmd = %d, add_sub_drift = %d, drift_val = %d, drift_period = %d, offset_lo = %d, offset_hi = %d\n",
    VAR_5->drift_adjust_cmd, VAR_5->offset_cmd,
    VAR_5->add_sub_drift_adjust_value, VAR_5->drift_adjust_value,
    VAR_5->drift_adjust_period, VAR_5->offset_delta.lo,
    VAR_5->offset_delta.hi);

 return FUNC_5(VAR_2, VAR_1, 0,
        VAR_6, VAR_0);
}
