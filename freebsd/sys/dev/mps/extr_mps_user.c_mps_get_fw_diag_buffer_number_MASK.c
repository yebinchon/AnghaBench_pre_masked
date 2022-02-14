
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
struct mps_softc {TYPE_1__* fw_diag_buffer_list; } ;
struct TYPE_2__ {scalar_t__ unique_id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_0(struct mps_softc *VAR_2, uint32_t VAR_3)
{
 uint8_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->fw_diag_buffer_list[VAR_4].unique_id == VAR_3) {
   return (VAR_4);
  }
 }

 return (VAR_1);
}
