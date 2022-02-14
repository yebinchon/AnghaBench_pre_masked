
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_12__ {scalar_t__ virt; } ;
struct TYPE_13__ {scalar_t__ hio_type; scalar_t__ command_code; int display_name; struct TYPE_13__* ocs; struct TYPE_13__* els; TYPE_1__ els_req; struct TYPE_13__* app; } ;
typedef TYPE_2__ ocs_t ;
typedef int ocs_sm_event_t ;
typedef TYPE_2__ ocs_sm_ctx_t ;
typedef TYPE_2__ ocs_node_t ;
typedef int (* ocs_node_common_func_t ) (char const*,TYPE_2__*,int ,void*) ;
typedef TYPE_2__ ocs_node_cb_t ;
typedef int int32_t ;
typedef TYPE_2__ fc_els_gen_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,char*,int ,char const*,scalar_t__,scalar_t__) ;

int32_t
FUNC_2(ocs_sm_ctx_t *VAR_1, ocs_sm_event_t VAR_2, void *VAR_3, uint8_t VAR_4, ocs_node_common_func_t VAR_5, const char *VAR_6)
{
 ocs_node_t *VAR_7 = ((void*)0);
 ocs_t *VAR_8 = ((void*)0);
 ocs_node_cb_t *VAR_9 = VAR_3;
 fc_els_gen_t *VAR_10 = ((void*)0);
 FUNC_0(VAR_1, -1);
 VAR_7 = VAR_1->app;
 FUNC_0(VAR_7, -1);
 VAR_8 = VAR_7->ocs;
 FUNC_0(VAR_8, -1);
 VAR_9 = VAR_3;
 FUNC_0(VAR_9, -1);
 FUNC_0(VAR_9->els, -1);
 VAR_10 = (fc_els_gen_t *)VAR_9->els->els_req.virt;
 FUNC_0(VAR_10, -1);

 if ((VAR_9->els->hio_type != VAR_0) || (VAR_10->command_code != VAR_4)) {
  if (VAR_9->els->hio_type != VAR_0) {
   FUNC_1(VAR_7->ocs, "[%s] %-20s expecting ELS cmd=x%x received type=%d\n",
    VAR_7->display_name, VAR_6, VAR_4, VAR_9->els->hio_type);
  } else {
   FUNC_1(VAR_7->ocs, "[%s] %-20s expecting ELS cmd=x%x received cmd=x%x\n",
    VAR_7->display_name, VAR_6, VAR_4, VAR_10->command_code);
  }

  VAR_5(VAR_6, VAR_1, VAR_2, VAR_3);
  return -1;
 }
 return 0;
}
