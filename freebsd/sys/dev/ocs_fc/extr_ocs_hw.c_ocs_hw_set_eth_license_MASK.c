
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int os; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_10__ {scalar_t__ virt; } ;
typedef TYPE_2__ ocs_dma_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,scalar_t__,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int ,int *,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__,char*,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (char*,int,char*,int ) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_10(ocs_hw_t *VAR_7, uint32_t VAR_8)
{
 ocs_hw_rtn_e VAR_9 = VAR_5;
 char VAR_10[VAR_1];
 ocs_dma_t VAR_11;
 ocs_dma_t VAR_12;


 if (VAR_6 != FUNC_9(&VAR_7->sli)) {
  FUNC_4(VAR_7->os, "Function only supported for I/F type 2\n");
  return VAR_3;
 }

 FUNC_7(VAR_10, VAR_1, "set / OEMELX_Ethernet_License=%X", VAR_8);

 if (FUNC_0(VAR_7->os, &VAR_11, FUNC_8(VAR_10)+1, 4096)) {
  FUNC_3(VAR_7->os, "malloc failed\n");
  return VAR_4;
 }
 FUNC_6(VAR_11.virt, 0, FUNC_8(VAR_10)+1);
 FUNC_5(VAR_11.virt, VAR_10, FUNC_8(VAR_10));


 if (FUNC_0(VAR_7->os, &VAR_12, VAR_2, 4096)) {
  FUNC_3(VAR_7->os, "malloc failed\n");
  FUNC_1(VAR_7->os, &VAR_11);
  return VAR_4;
 }


 if (FUNC_2(VAR_7, &VAR_11, &VAR_12, VAR_0, ((void*)0), ((void*)0))) {
  FUNC_3(VAR_7->os, "CLP cmd=\"%s\" failed\n", (char *)VAR_11.virt);
  VAR_9 = VAR_3;
 }

 FUNC_1(VAR_7->os, &VAR_11);
 FUNC_1(VAR_7->os, &VAR_12);
 return VAR_9;
}
