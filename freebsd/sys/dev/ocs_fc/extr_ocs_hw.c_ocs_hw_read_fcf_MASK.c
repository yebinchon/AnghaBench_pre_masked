
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int os; int fcf_dmem; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *,int ) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_6(ocs_hw_t *VAR_7, uint32_t VAR_8)
{
 uint8_t *VAR_9 = ((void*)0);
 int32_t VAR_10 = VAR_1;

 VAR_9 = FUNC_4(VAR_7->os, VAR_5, VAR_4);
 if (!VAR_9) {
  FUNC_2(VAR_7->os, "no buffer for command\n");
  return VAR_2;
 }

 if (FUNC_5(&VAR_7->sli, VAR_9, VAR_5, &VAR_7->fcf_dmem,
   VAR_8)) {
  VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_0, VAR_6, &VAR_7->fcf_dmem);
 }

 if (VAR_10 != VAR_3) {
  FUNC_3(VAR_7->os, "FCOE_READ_FCF_TABLE failed\n");
  FUNC_0(VAR_7->os, VAR_9, VAR_5);
 }

 return VAR_10;
}
