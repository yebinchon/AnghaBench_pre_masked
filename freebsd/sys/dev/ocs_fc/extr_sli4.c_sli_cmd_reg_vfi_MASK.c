
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_19__ {int r_a_tov; int e_d_tov; } ;
struct TYPE_21__ {TYPE_6__ config; } ;
typedef TYPE_8__ sli4_t ;
struct TYPE_15__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_16__ {TYPE_2__ data; } ;
struct TYPE_17__ {int buffer_length; TYPE_3__ u; int bde_type; } ;
struct TYPE_14__ {int command; } ;
struct TYPE_22__ {int local_n_port_id; int wwpn; int vpi; int vp; int r_a_tov; int e_d_tov; TYPE_4__ sparm; int fcfi; int vfi; TYPE_1__ hdr; } ;
typedef TYPE_9__ sli4_cmd_reg_vfi_t ;
struct TYPE_18__ {int phys; } ;
struct TYPE_13__ {TYPE_7__* sport; TYPE_5__ dma; int fcf_indicator; int indicator; } ;
typedef TYPE_10__ ocs_domain_t ;
typedef int int32_t ;
struct TYPE_20__ {int fc_id; int sli_wwpn; int indicator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, ocs_domain_t *VAR_6)
{
 sli4_cmd_reg_vfi_t *VAR_7 = VAR_4;

 if (!VAR_3 || !VAR_4 || !VAR_6) {
  return 0;
 }

 FUNC_3(VAR_4, 0, VAR_5);

 VAR_7->hdr.command = VAR_1;

 VAR_7->vfi = VAR_6->indicator;

 VAR_7->fcfi = VAR_6->fcf_indicator;


 VAR_7->sparm.bde_type = VAR_0;
 VAR_7->sparm.buffer_length = 0x70;
 VAR_7->sparm.u.data.buffer_address_low = FUNC_1(VAR_6->dma.phys);
 VAR_7->sparm.u.data.buffer_address_high = FUNC_0(VAR_6->dma.phys);

 VAR_7->e_d_tov = VAR_3->config.e_d_tov;
 VAR_7->r_a_tov = VAR_3->config.r_a_tov;

 VAR_7->vp = VAR_2;
 VAR_7->vpi = VAR_6->sport->indicator;
 FUNC_2(VAR_7->wwpn, &VAR_6->sport->sli_wwpn, sizeof(VAR_7->wwpn));
 VAR_7->local_n_port_id = VAR_6->sport->fc_id;

 return sizeof(sli4_cmd_reg_vfi_t);
}
