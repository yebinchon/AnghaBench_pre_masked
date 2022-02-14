
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct unwind_state {scalar_t__* registers; int* insn; int byte; int entries; scalar_t__ start_pc; int update_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct unwind_state*) ;

__attribute__((used)) static int
FUNC_2(struct unwind_state *VAR_5)
{
 uint32_t VAR_6;


 VAR_5->registers[VAR_4] = 0;


 VAR_6 = *VAR_5->insn & VAR_2;

 if (VAR_6 == VAR_1) {
  VAR_5->byte = 2;
  VAR_5->entries = 1;
 } else if (VAR_6 == VAR_0) {
  VAR_5->byte = 1;
  VAR_5->entries = ((*VAR_5->insn >> 16) & 0xFF) + 1;
 } else {



  return 1;
 }

 while (VAR_5->entries > 0) {
  if (FUNC_1(VAR_5) != 0)
   return 1;
 }




 if (VAR_5->registers[VAR_4] == 0) {
  VAR_5->registers[VAR_4] = VAR_5->registers[VAR_3];




  if (VAR_5->start_pc != VAR_5->registers[VAR_4])
   VAR_5->update_mask |= 1 << VAR_4;
 }

 return 0;
}
