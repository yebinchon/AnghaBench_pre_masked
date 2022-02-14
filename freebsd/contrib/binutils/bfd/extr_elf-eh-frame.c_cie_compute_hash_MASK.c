
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cie {int hash; scalar_t__ initial_insn_length; int initial_instructions; scalar_t__ fde_encoding; scalar_t__ lsda_encoding; scalar_t__ per_encoding; scalar_t__ output_sec; scalar_t__ personality; scalar_t__ augmentation_size; scalar_t__ ra_column; scalar_t__ data_align; scalar_t__ code_align; int augmentation; scalar_t__ version; scalar_t__ length; } ;
typedef int hashval_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static hashval_t
FUNC_3 (struct cie *VAR_0)
{
  hashval_t VAR_1 = 0;
  VAR_1 = FUNC_1 (VAR_0->length, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->version, VAR_1);
  VAR_1 = FUNC_0 (VAR_0->augmentation, FUNC_2 (VAR_0->augmentation) + 1, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->code_align, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->data_align, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->ra_column, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->augmentation_size, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->personality, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->output_sec, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->per_encoding, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->lsda_encoding, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->fde_encoding, VAR_1);
  VAR_1 = FUNC_1 (VAR_0->initial_insn_length, VAR_1);
  VAR_1 = FUNC_0 (VAR_0->initial_instructions, VAR_0->initial_insn_length, VAR_1);
  VAR_0->hash = VAR_1;
  return VAR_1;
}
