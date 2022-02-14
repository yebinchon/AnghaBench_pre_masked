
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int length; int vaddr; } ;
typedef TYPE_1__ ocs_scsi_vaddr_len_t ;
struct TYPE_9__ {scalar_t__ dif_seed; int check_guard; } ;
typedef TYPE_2__ ocs_hw_dif_info_t ;
struct TYPE_10__ {scalar_t__ crc; } ;
typedef TYPE_3__ ocs_dif_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_3(ocs_hw_dif_info_t *VAR_1, ocs_scsi_vaddr_len_t VAR_2[], uint32_t VAR_3,
 ocs_dif_t *VAR_4, int VAR_5)
{
 uint16_t VAR_6 = VAR_1->dif_seed;
 uint32_t VAR_7;
 uint16_t VAR_8;

 if ((VAR_4 == ((void*)0)) || !VAR_1->check_guard) {
  return VAR_0;
 }

 if (VAR_5) {
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   VAR_6 = FUNC_2(VAR_2[VAR_7].vaddr, VAR_2[VAR_7].length, VAR_6);
  }
  return (VAR_6 == FUNC_0(VAR_4->crc));
 } else {
  VAR_8 = FUNC_1(VAR_2, VAR_3);

  return (VAR_8 == VAR_4->crc);
 }
}
