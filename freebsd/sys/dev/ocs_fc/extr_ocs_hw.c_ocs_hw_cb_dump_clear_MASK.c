
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_cmd_sli_config_t ;
struct TYPE_9__ {int os; } ;
typedef TYPE_3__ ocs_hw_t ;
struct TYPE_10__ {struct TYPE_10__* mbox_cmd; int arg; int (* cb ) (scalar_t__,int ) ;} ;
typedef TYPE_4__ ocs_hw_dump_clear_cb_arg_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*,int) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{
 ocs_hw_dump_clear_cb_arg_t *VAR_5 = VAR_4;
 sli4_cmd_sli_config_t* VAR_6 = (sli4_cmd_sli_config_t*) VAR_3;

 if (VAR_5) {
  if (VAR_5->cb) {
   if ((VAR_2 == 0) && VAR_6->hdr.status) {
    VAR_2 = VAR_6->hdr.status;
   }
   VAR_5->cb(VAR_2, VAR_5->arg);
  }

  FUNC_0(VAR_1->os, VAR_5->mbox_cmd, VAR_0);
  FUNC_0(VAR_1->os, VAR_5, sizeof(ocs_hw_dump_clear_cb_arg_t));
 }

 return 0;
}
