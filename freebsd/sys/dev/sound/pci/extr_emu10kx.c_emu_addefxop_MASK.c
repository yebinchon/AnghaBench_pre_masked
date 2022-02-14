
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {int code_size; unsigned int high_operand_shift; unsigned int opcode_shift; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct emu_sc_info*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct emu_sc_info *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5, uint32_t * VAR_6)
{
 if ((*VAR_6) + 1 > VAR_0->code_size) {
  FUNC_0(VAR_0->dev, "DSP CODE OVERRUN: attept to write past code_size (pc=%d)\n", (*VAR_6));
  return;
 }
 FUNC_1(VAR_0, (*VAR_6) * 2, (VAR_4 << VAR_0->high_operand_shift) | VAR_5);
 FUNC_1(VAR_0, (*VAR_6) * 2 + 1, (VAR_1 << VAR_0->opcode_shift) | (VAR_2 << VAR_0->high_operand_shift) | VAR_3);
 (*VAR_6)++;
}
