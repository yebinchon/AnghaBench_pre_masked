
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct init_qm_port_params {int active; size_t active_phys_tcs; size_t num_pbf_cmd_lines; size_t num_btb_blocks; } ;
struct TYPE_3__ {struct init_qm_port_params* qm_port_params; } ;
struct ecore_hwfn {TYPE_1__ qm_info; TYPE_2__* p_dev; } ;
struct TYPE_4__ {size_t num_ports_in_engine; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void FUNC_0(struct ecore_hwfn *VAR_5)
{

 u8 VAR_6, VAR_7, VAR_8 = VAR_5->p_dev->num_ports_in_engine;


 VAR_7 = VAR_8 == VAR_3 ?
  VAR_1 : VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  struct init_qm_port_params *VAR_9 =
   &VAR_5->qm_info.qm_port_params[VAR_6];

  VAR_9->active = 1;
  VAR_9->active_phys_tcs = VAR_7;
  VAR_9->num_pbf_cmd_lines = VAR_4 / VAR_8;
  VAR_9->num_btb_blocks = VAR_2 / VAR_8;
 }
}
