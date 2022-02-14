
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ctx; } ;
typedef TYPE_1__ ocs_sli_port_t ;
struct TYPE_8__ {int * os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;

ocs_hw_rtn_e
FUNC_4(ocs_hw_t *VAR_3, ocs_sli_port_t *VAR_4)
{
 ocs_hw_rtn_e VAR_5 = VAR_2;

 if (!VAR_3 || !VAR_4) {
  FUNC_1(VAR_3 ? VAR_3->os : ((void*)0),
   "bad parameter(s) hw=%p sport=%p\n", VAR_3,
   VAR_4);
  return VAR_1;
 }




 if (FUNC_3(&VAR_3->sli) > 0) {
  FUNC_0(VAR_3->os, "Chip is in an error state - reset needed\n");
  return VAR_1;
 }

 FUNC_2(&VAR_4->ctx, VAR_0, ((void*)0));
 return VAR_5;
}
