
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct HBD_MessageUnit0 {int doneq_index; } ;


 int VAR_0 ;

__attribute__((used)) static uint16_t FUNC_0(struct HBD_MessageUnit0 *VAR_1)
{
 uint16_t VAR_2, VAR_3;

 VAR_2 = VAR_1->doneq_index;
 if (VAR_2 & 0x4000) {
  VAR_3 = VAR_2 & 0xFF;
  VAR_3 += 1;
  VAR_3 %= VAR_0;
  VAR_1->doneq_index = VAR_3 ?
      (VAR_3 | 0x4000) : VAR_3;
 } else {
  VAR_3 = VAR_2;
  VAR_3 += 1;
  VAR_3 %= VAR_0;
  VAR_1->doneq_index = VAR_3 ?
      VAR_3 : (VAR_3 | 0x4000);
 }
 return (VAR_1->doneq_index);
}
