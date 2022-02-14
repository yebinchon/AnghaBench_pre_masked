
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cie {scalar_t__ hash; scalar_t__ length; scalar_t__ version; scalar_t__ local_personality; char* augmentation; scalar_t__ code_align; scalar_t__ data_align; scalar_t__ ra_column; scalar_t__ augmentation_size; scalar_t__ output_sec; scalar_t__ per_encoding; scalar_t__ lsda_encoding; scalar_t__ fde_encoding; int initial_insn_length; int * initial_instructions; int personality; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2 (const void *VAR_0, const void *VAR_1)
{
  const struct cie *VAR_2 = VAR_0;
  const struct cie *VAR_3 = VAR_1;

  if (VAR_2->hash == VAR_3->hash
      && VAR_2->length == VAR_3->length
      && VAR_2->version == VAR_3->version
      && VAR_2->local_personality == VAR_3->local_personality
      && FUNC_1 (VAR_2->augmentation, VAR_3->augmentation) == 0
      && FUNC_1 (VAR_2->augmentation, "eh") != 0
      && VAR_2->code_align == VAR_3->code_align
      && VAR_2->data_align == VAR_3->data_align
      && VAR_2->ra_column == VAR_3->ra_column
      && VAR_2->augmentation_size == VAR_3->augmentation_size
      && FUNC_0 (&VAR_2->personality, &VAR_3->personality,
   sizeof (VAR_2->personality)) == 0
      && VAR_2->output_sec == VAR_3->output_sec
      && VAR_2->per_encoding == VAR_3->per_encoding
      && VAR_2->lsda_encoding == VAR_3->lsda_encoding
      && VAR_2->fde_encoding == VAR_3->fde_encoding
      && VAR_2->initial_insn_length == VAR_3->initial_insn_length
      && FUNC_0 (VAR_2->initial_instructions,
   VAR_3->initial_instructions,
   VAR_2->initial_insn_length) == 0)
    return 1;

  return 0;
}
