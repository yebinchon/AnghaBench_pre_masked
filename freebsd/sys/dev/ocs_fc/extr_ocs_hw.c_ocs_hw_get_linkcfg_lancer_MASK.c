
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int os; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_port_control_cb_t ;
struct TYPE_14__ {scalar_t__ virt; } ;
struct TYPE_13__ {TYPE_6__ dma_resp; TYPE_6__ dma_cmd; int opts; void* arg; int cb; } ;
typedef TYPE_2__ ocs_hw_linkcfg_cb_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,TYPE_6__*,scalar_t__,int) ;
 int FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_6__*,TYPE_6__*,int ,int ,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 TYPE_2__* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (scalar_t__,char*,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__) ;
 int FUNC_9 (char*,int,char*) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_11(ocs_hw_t *VAR_7, uint32_t VAR_8, ocs_hw_port_control_cb_t VAR_9, void *VAR_10)
{
 char VAR_11[VAR_1];
 ocs_hw_linkcfg_cb_arg_t *VAR_12;
 ocs_hw_rtn_e VAR_13 = VAR_4;


 VAR_12 = FUNC_6(VAR_7->os, sizeof(*VAR_12), VAR_5);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_7->os, "failed to malloc cb_arg");
  return VAR_3;
 }

 FUNC_9(VAR_11, VAR_1, "show / OEMELX_LinkConfig");


 if (FUNC_0(VAR_7->os, &VAR_12->dma_cmd, FUNC_10(VAR_11)+1, 4096)) {
  FUNC_4(VAR_7->os, "malloc failed\n");
  FUNC_2(VAR_7->os, VAR_12, sizeof(*VAR_12));
  return VAR_3;
 }


 FUNC_8(VAR_12->dma_cmd.virt, 0, FUNC_10(VAR_11)+1);
 FUNC_7(VAR_12->dma_cmd.virt, VAR_11, FUNC_10(VAR_11));


 if (FUNC_0(VAR_7->os, &VAR_12->dma_resp, VAR_2, 4096)) {
  FUNC_4(VAR_7->os, "malloc failed\n");
  FUNC_1(VAR_7->os, &VAR_12->dma_cmd);
  FUNC_2(VAR_7->os, VAR_12, sizeof(*VAR_12));
  return VAR_3;
 }
 VAR_12->cb = VAR_9;
 VAR_12->arg = VAR_10;
 VAR_12->opts = VAR_8;

 VAR_13 = FUNC_3(VAR_7, &VAR_12->dma_cmd, &VAR_12->dma_resp,
     VAR_8, VAR_6, VAR_12);

 if (VAR_8 == VAR_0 || VAR_13 != VAR_4) {



  if (VAR_13) {
   FUNC_5(VAR_7->os, "CLP cmd=\"%s\" failed\n",
     (char *)VAR_12->dma_cmd.virt);
  }
  FUNC_1(VAR_7->os, &VAR_12->dma_cmd);
  FUNC_1(VAR_7->os, &VAR_12->dma_resp);
  FUNC_2(VAR_7->os, VAR_12, sizeof(*VAR_12));
 }
 return VAR_13;
}
