
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
typedef int ocs_hw_linkcfg_e ;
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
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_6__*,TYPE_6__*,int ,int ,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,char*) ;
 TYPE_2__* FUNC_7 (int ,int,int ) ;
 int FUNC_8 (scalar_t__,char*,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,scalar_t__) ;
 int FUNC_10 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_11 (char*) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_12(ocs_hw_t *VAR_7, ocs_hw_linkcfg_e VAR_8, uint32_t VAR_9, ocs_hw_port_control_cb_t VAR_10, void *VAR_11)
{
 char VAR_12[VAR_1];
 ocs_hw_linkcfg_cb_arg_t *VAR_13;
 const char *VAR_14 = ((void*)0);
 ocs_hw_rtn_e VAR_15 = VAR_4;


 VAR_14 = FUNC_3(VAR_8);


 VAR_13 = FUNC_7(VAR_7->os, sizeof(*VAR_13), VAR_5);
 if (VAR_13 == ((void*)0)) {
  FUNC_5(VAR_7->os, "failed to malloc cb_arg");
  return VAR_3;
 }

 FUNC_10(VAR_12, VAR_1, "set / OEMELX_LinkConfig=%s", VAR_14);

 if (FUNC_0(VAR_7->os, &VAR_13->dma_cmd, FUNC_11(VAR_12)+1, 4096)) {
  FUNC_5(VAR_7->os, "malloc failed\n");
  FUNC_2(VAR_7->os, VAR_13, sizeof(*VAR_13));
  return VAR_3;
 }
 FUNC_9(VAR_13->dma_cmd.virt, 0, FUNC_11(VAR_12)+1);
 FUNC_8(VAR_13->dma_cmd.virt, VAR_12, FUNC_11(VAR_12));


 if (FUNC_0(VAR_7->os, &VAR_13->dma_resp, VAR_2, 4096)) {
  FUNC_5(VAR_7->os, "malloc failed\n");
  FUNC_1(VAR_7->os, &VAR_13->dma_cmd);
  FUNC_2(VAR_7->os, VAR_13, sizeof(*VAR_13));
  return VAR_3;
 }
 VAR_13->cb = VAR_10;
 VAR_13->arg = VAR_11;
 VAR_13->opts = VAR_9;

 VAR_15 = FUNC_4(VAR_7, &VAR_13->dma_cmd, &VAR_13->dma_resp,
     VAR_9, VAR_6, VAR_13);

 if (VAR_9 == VAR_0 || VAR_15 != VAR_4) {



  if (VAR_15) {
   FUNC_6(VAR_7->os, "CLP cmd=\"%s\" failed\n",
     (char *)VAR_13->dma_cmd.virt);
  }
  FUNC_1(VAR_7->os, &VAR_13->dma_cmd);
  FUNC_1(VAR_7->os, &VAR_13->dma_resp);
  FUNC_2(VAR_7->os, VAR_13, sizeof(*VAR_13));
 }
 return VAR_15;
}
