
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int ctx; int fc_id; } ;
typedef TYPE_1__ ocs_sli_port_t ;
struct TYPE_6__ {int * os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;

ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_6, ocs_sli_port_t *VAR_7, uint32_t VAR_8)
{
 uint8_t *VAR_9 = ((void*)0);
 ocs_hw_rtn_e VAR_10 = VAR_3;

 if (!VAR_6 || !VAR_7) {
  FUNC_1(VAR_6 ? VAR_6->os : ((void*)0),
   "bad parameter(s) hw=%p sport=%p\n", VAR_6,
   VAR_7);
  return VAR_1;
 }




 if (FUNC_4(&VAR_6->sli) > 0) {
  FUNC_0(VAR_6->os, "Chip is in an error state - reset needed\n");
  return VAR_1;
 }

 VAR_9 = FUNC_2(VAR_6->os, VAR_5, VAR_4);
 if (!VAR_9) {
  FUNC_1(VAR_6->os, "no buffer for command\n");
  return VAR_2;
 }

 VAR_7->fc_id = VAR_8;
 FUNC_3(&VAR_7->ctx, VAR_0, VAR_9);
 return VAR_10;
}
