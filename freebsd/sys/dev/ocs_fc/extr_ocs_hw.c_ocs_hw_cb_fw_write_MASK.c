
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int arg; int (* cb ) (scalar_t__,int ,int ,int ) ;} ;
typedef TYPE_3__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_14__ {int change_status; int actual_write_length; } ;
typedef TYPE_4__ sli4_res_common_write_object_t ;
struct TYPE_12__ {scalar_t__ status; } ;
struct TYPE_11__ {int embed; } ;
struct TYPE_15__ {TYPE_2__ hdr; TYPE_1__ payload; } ;
typedef TYPE_5__ sli4_cmd_sli_config_t ;
struct TYPE_16__ {int os; } ;
typedef TYPE_6__ ocs_hw_t ;
typedef TYPE_3__ ocs_hw_fw_write_cb_arg_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{

 sli4_cmd_sli_config_t* VAR_5 = (sli4_cmd_sli_config_t*) VAR_3;
 sli4_res_common_write_object_t* VAR_6 = (sli4_res_common_write_object_t*) &(VAR_5->payload.embed);
 ocs_hw_fw_write_cb_arg_t *VAR_7 = VAR_4;
 uint32_t VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10;

 VAR_8 = VAR_6->actual_write_length;
 VAR_9 = VAR_5->hdr.status;
 VAR_10 = VAR_6->change_status;

 FUNC_0(VAR_1->os, VAR_3, VAR_0);

 if (VAR_7) {
  if (VAR_7->cb) {
   if ((VAR_2 == 0) && VAR_9) {
    VAR_2 = VAR_9;
   }
   VAR_7->cb(VAR_2, VAR_8, VAR_10, VAR_7->arg);
  }

  FUNC_0(VAR_1->os, VAR_7, sizeof(ocs_hw_fw_write_cb_arg_t));
 }

 return 0;

}
