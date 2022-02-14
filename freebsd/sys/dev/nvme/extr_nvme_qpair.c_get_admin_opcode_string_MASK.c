
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nvme_opcode_string {int opc; char const* str; } ;


 struct nvme_opcode_string* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(uint16_t VAR_1)
{
 struct nvme_opcode_string *VAR_2;

 VAR_2 = VAR_0;

 while (VAR_2->opc != 0xFFFF) {
  if (VAR_2->opc == VAR_1)
   return (VAR_2->str);
  VAR_2++;
 }
 return (VAR_2->str);
}
