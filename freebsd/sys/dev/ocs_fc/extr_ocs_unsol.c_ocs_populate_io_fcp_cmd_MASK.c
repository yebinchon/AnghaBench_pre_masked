
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int seq_init; scalar_t__ cs_ctl; scalar_t__ transferred; int exp_xfer_len; int init_task_tag; } ;
typedef TYPE_1__ ocs_io_t ;
struct TYPE_8__ {int additional_fcp_cdb_length; int fcp_cdb_and_dl; } ;
typedef TYPE_2__ fcp_cmnd_iu_t ;
struct TYPE_9__ {scalar_t__ cs_ctl; int f_ctl; int ox_id; } ;
typedef TYPE_3__ fc_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ocs_io_t *VAR_1, fcp_cmnd_iu_t *VAR_2, fc_header_t *VAR_3, uint8_t VAR_4)
{
 uint32_t *VAR_5;
 VAR_1->init_task_tag = FUNC_1(VAR_3->ox_id);

 VAR_5 = (uint32_t*)(&(VAR_2->fcp_cdb_and_dl));
 VAR_5 += VAR_2->additional_fcp_cdb_length;
 VAR_1->exp_xfer_len = FUNC_2(*VAR_5);
 VAR_1->transferred = 0;






 if (FUNC_0(VAR_3->f_ctl) & VAR_0) {
  VAR_1->cs_ctl = VAR_3->cs_ctl;
 } else {
  VAR_1->cs_ctl = 0;
 }
 VAR_1->seq_init = VAR_4;
}
