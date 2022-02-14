
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int fdt_xfer_hint; } ;
typedef TYPE_1__ sli4_req_common_set_features_set_fdt_xfer_hint_t ;
typedef int param ;
struct TYPE_8__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int ,int *,int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,int *,int,int ,int,TYPE_1__*) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_4, uint32_t VAR_5)
{
 ocs_hw_rtn_e VAR_6 = VAR_1;
 uint8_t VAR_7[VAR_2];
 sli4_req_common_set_features_set_fdt_xfer_hint_t VAR_8;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.fdt_xfer_hint = VAR_5;

 FUNC_4(&VAR_4->sli, VAR_7, VAR_2,
        VAR_3,
        sizeof(VAR_8),
        &VAR_8);


 VAR_6 = FUNC_0(VAR_4, VAR_7, VAR_0, ((void*)0), ((void*)0));
 if (VAR_6) {
  FUNC_2(VAR_4->os, "set FDT hint %d failed: %d\n", VAR_5, VAR_6);
 } else {
  FUNC_1(VAR_4->os, "Set FTD transfer hint to %d\n", VAR_8.fdt_xfer_hint);
 }

 return VAR_6;
}
