
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct unwind_state {int* insn; int byte; int entries; } ;



__attribute__((used)) static uint8_t
FUNC_0(struct unwind_state *VAR_0)
{
 uint8_t VAR_1;


 VAR_1 = (*VAR_0->insn) >> (VAR_0->byte * 8);


 if (VAR_0->byte == 0) {
  VAR_0->byte = 3;
  VAR_0->insn++;
  VAR_0->entries--;
 } else
  VAR_0->byte--;

 return VAR_1;
}
