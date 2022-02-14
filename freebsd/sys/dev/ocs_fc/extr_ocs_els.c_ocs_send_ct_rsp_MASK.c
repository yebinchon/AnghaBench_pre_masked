
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_12__ {int r_ctl; int timeout; scalar_t__ df_ctl; int type; int ox_id; } ;
struct TYPE_15__ {TYPE_2__ fc_ct_rsp; } ;
struct TYPE_11__ {TYPE_4__* virt; } ;
struct TYPE_13__ {char* display_name; int wire_len; TYPE_8__ iparam; int hio_type; void* io_type; void* init_task_tag; TYPE_1__ els_rsp; } ;
typedef TYPE_3__ ocs_io_t ;
typedef int int32_t ;
struct TYPE_14__ {void* reason_code_explanation; void* reason_code; } ;
typedef TYPE_4__ fcct_iu_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_4__*,void*,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;

int32_t
FUNC_5(ocs_io_t *VAR_4, uint32_t VAR_5, fcct_iu_header_t *VAR_6, uint32_t VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 fcct_iu_header_t *VAR_10 = VAR_4->els_rsp.virt;

 VAR_4->io_type = VAR_2;

 *VAR_10 = *VAR_6;

 FUNC_0(VAR_10, VAR_7, 0);
 VAR_10->reason_code = VAR_8;
 VAR_10->reason_code_explanation = VAR_9;

 VAR_4->display_name = "ct response";
 VAR_4->init_task_tag = VAR_5;
 VAR_4->wire_len += sizeof(*VAR_10);

 FUNC_3(&VAR_4->iparam, 0, sizeof(VAR_4->iparam));

 VAR_4->io_type = VAR_2;
 VAR_4->hio_type = VAR_1;
 VAR_4->iparam.fc_ct_rsp.ox_id = FUNC_2(VAR_5);
 VAR_4->iparam.fc_ct_rsp.r_ctl = 3;
 VAR_4->iparam.fc_ct_rsp.type = VAR_0;
 VAR_4->iparam.fc_ct_rsp.df_ctl = 0;
 VAR_4->iparam.fc_ct_rsp.timeout = 5;

 if (FUNC_4(VAR_4, VAR_3) < 0) {
  FUNC_1(VAR_4);
  return -1;
 }
 return 0;
}
