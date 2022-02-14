
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ocs_scsi_sgl_t ;
struct TYPE_3__ {scalar_t__ dif_oper; scalar_t__ dif_separate; } ;
typedef TYPE_1__ ocs_hw_dif_info_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(ocs_hw_dif_info_t *VAR_1, ocs_scsi_sgl_t *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = 0;
 uint32_t VAR_5;


 if (VAR_1->dif_oper != VAR_0) {


  if (!VAR_1->dif_separate) {
   VAR_4++;
  }

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

   if (VAR_1->dif_separate) {
    VAR_4 += 2;
   }

   VAR_4++;
  }
 } else {
  VAR_4 = VAR_3;
 }
 return VAR_4;
}
