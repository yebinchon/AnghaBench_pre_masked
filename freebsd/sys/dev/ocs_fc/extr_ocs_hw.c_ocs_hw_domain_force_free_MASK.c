
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_8__ {int indicator; } ;
typedef TYPE_2__ ocs_domain_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ) ;

ocs_hw_rtn_e
FUNC_2(ocs_hw_t *VAR_3, ocs_domain_t *VAR_4)
{
 if (!VAR_3 || !VAR_4) {
  FUNC_0(((void*)0), "bad parameter(s) hw=%p domain=%p\n", VAR_3, VAR_4);
  return VAR_0;
 }

 FUNC_1(&VAR_3->sli, VAR_2, VAR_4->indicator);

 return VAR_1;
}
