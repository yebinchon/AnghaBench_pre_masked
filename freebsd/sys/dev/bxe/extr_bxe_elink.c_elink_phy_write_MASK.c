
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct elink_params {size_t num_phys; TYPE_1__* phy; int sc; } ;
typedef int elink_status_t ;
struct TYPE_2__ {size_t addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,size_t,int ,int ) ;

elink_status_t FUNC_1(struct elink_params *VAR_1, uint8_t VAR_2,
      uint8_t VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
 uint8_t VAR_6;



 for (VAR_6 = 0; VAR_6 < VAR_1->num_phys; VAR_6++) {
  if (VAR_1->phy[VAR_6].addr == VAR_2) {
   return FUNC_0(VAR_1->sc,
      &VAR_1->phy[VAR_6], VAR_3,
      VAR_4, VAR_5);
  }
 }
 return VAR_0;
}
