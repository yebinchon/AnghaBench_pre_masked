
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int sli4_t ;
struct TYPE_6__ {int command; } ;
struct TYPE_8__ {int upd; int vfi; int vpi; int wwpn; int local_n_port_id; TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_cmd_reg_vpi_t ;
struct TYPE_9__ {TYPE_2__* domain; int indicator; int sli_wwpn; int fc_id; } ;
typedef TYPE_4__ ocs_sli_port_t ;
typedef int int32_t ;
struct TYPE_7__ {int indicator; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (void*,int ,size_t) ;

int32_t
FUNC_2(sli4_t *VAR_1, void *VAR_2, size_t VAR_3, ocs_sli_port_t *VAR_4, uint8_t VAR_5)
{
 sli4_cmd_reg_vpi_t *VAR_6 = VAR_2;

 if (!VAR_1 || !VAR_2 || !VAR_4) {
  return 0;
 }

 FUNC_1(VAR_2, 0, VAR_3);

 VAR_6->hdr.command = VAR_0;

 VAR_6->local_n_port_id = VAR_4->fc_id;
 VAR_6->upd = VAR_5 != 0;
 FUNC_0(VAR_6->wwpn, &VAR_4->sli_wwpn, sizeof(VAR_6->wwpn));
 VAR_6->vpi = VAR_4->indicator;
 VAR_6->vfi = VAR_4->domain->indicator;

 return sizeof(sli4_cmd_reg_vpi_t);
}
