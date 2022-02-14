
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int released_xri_count; TYPE_1__* xri_tbl; } ;
typedef TYPE_2__ sli4_cmd_release_xri_t ;
struct TYPE_8__ {int os; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {int xri_tag1; int xri_tag0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{
 sli4_cmd_release_xri_t *VAR_5 = (sli4_cmd_release_xri_t*)VAR_3;
 uint8_t VAR_6;


 if (VAR_2 != 0) {
  FUNC_2(VAR_1->os, "Status 0x%x\n", VAR_2);
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_5->released_xri_count; VAR_6++) {
   uint16_t VAR_7 = ((VAR_6 & 1) == 0 ? VAR_5->xri_tbl[VAR_6/2].xri_tag0 :
     VAR_5->xri_tbl[VAR_6/2].xri_tag1);
   FUNC_1(VAR_1, VAR_7, 1);
  }
 }

 FUNC_0(VAR_1->os, VAR_3, VAR_0);
 return 0;
}
