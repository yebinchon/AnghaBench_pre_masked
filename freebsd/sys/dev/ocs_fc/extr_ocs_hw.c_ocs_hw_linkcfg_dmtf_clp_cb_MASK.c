
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int retdata_str ;
struct TYPE_7__ {int os; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_linkcfg_e ;
struct TYPE_9__ {int virt; } ;
struct TYPE_8__ {scalar_t__ opts; TYPE_6__ dma_resp; TYPE_6__ dma_cmd; int arg; int (* cb ) (scalar_t__,int ,int ) ;} ;
typedef TYPE_2__ ocs_hw_linkcfg_cb_arg_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,char*,int,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_7(ocs_hw_t *VAR_2, int32_t VAR_3, uint32_t VAR_4, void *VAR_5)
{
 int32_t VAR_6;
 char VAR_7[64];
 ocs_hw_linkcfg_cb_arg_t *VAR_8 = (ocs_hw_linkcfg_cb_arg_t *)VAR_5;
 ocs_hw_linkcfg_e VAR_9 = VAR_1;

 if (VAR_3) {
  FUNC_5(VAR_2->os, "CLP cmd failed, status=%d\n", VAR_3);
 } else {

  VAR_6 = FUNC_2(VAR_2, "retdata", VAR_7,
        sizeof(VAR_7),
        VAR_8->dma_resp.virt,
        VAR_4);

  if (VAR_6 <= 0) {
   FUNC_4(VAR_2->os, "failed to get retdata %d\n", VAR_4);
  } else {

   VAR_9 = FUNC_3(VAR_7);
  }
 }


 if (VAR_8->cb) {
  VAR_8->cb(VAR_3, VAR_9, VAR_8->arg);
 }


 if (VAR_8->opts != VAR_0) {
  FUNC_0(VAR_2->os, &VAR_8->dma_cmd);
  FUNC_0(VAR_2->os, &VAR_8->dma_resp);
  FUNC_1(VAR_2->os, VAR_8, sizeof(*VAR_8));
 }
}
