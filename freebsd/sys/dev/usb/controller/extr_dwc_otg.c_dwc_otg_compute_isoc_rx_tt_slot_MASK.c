
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct dwc_otg_tt_info {scalar_t__ slot_index; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint16_t
FUNC_0(struct dwc_otg_tt_info *VAR_1)
{
 if (VAR_1->slot_index < VAR_0)
  VAR_1->slot_index++;
 return (VAR_1->slot_index);
}
