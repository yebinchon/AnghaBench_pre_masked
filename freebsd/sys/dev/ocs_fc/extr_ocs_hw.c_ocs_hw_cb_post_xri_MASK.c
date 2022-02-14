
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int xri_count; int xri_base; } ;
typedef TYPE_1__ sli4_cmd_post_xri_t ;
struct TYPE_6__ {int os; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{
 sli4_cmd_post_xri_t *VAR_5 = (sli4_cmd_post_xri_t*)VAR_3;


 if (VAR_2 != 0) {
  FUNC_2(VAR_1->os, "Status 0x%x for XRI base 0x%x, cnt =x%x\n",
         VAR_2, VAR_5->xri_base, VAR_5->xri_count);
  FUNC_1(VAR_1, VAR_5->xri_base, VAR_5->xri_count);
 }

 FUNC_0(VAR_1->os, VAR_3, VAR_0);
 return 0;
}
