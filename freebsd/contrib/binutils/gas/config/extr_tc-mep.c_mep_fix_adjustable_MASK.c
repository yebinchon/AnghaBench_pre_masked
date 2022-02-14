
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fx_r_type; int * fx_addsy; } ;
typedef TYPE_1__ fixS ;
typedef scalar_t__ bfd_reloc_code_real_type ;
typedef int bfd_boolean ;
typedef int CGEN_OPERAND ;
typedef int CGEN_INSN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int const*,int const*,TYPE_1__*) ;

bfd_boolean
FUNC_4 (fixS *VAR_4)
{
  bfd_reloc_code_real_type VAR_5;

  if ((int) VAR_4->fx_r_type >= (int) VAR_0)
    {
      const CGEN_INSN *VAR_6 = ((void*)0);
      int VAR_7 = (int) VAR_4->fx_r_type - (int) VAR_0;
      const CGEN_OPERAND *VAR_8
 = FUNC_2(VAR_3, VAR_7);
      VAR_5 = FUNC_3 (VAR_6, VAR_8, VAR_4);
    }
  else
    VAR_5 = VAR_4->fx_r_type;

  if (VAR_4->fx_addsy == ((void*)0))
    return 1;


  if (FUNC_0 (VAR_4->fx_addsy))
    return 0;

  if (FUNC_1 (VAR_4->fx_addsy))
    return 0;


  if (VAR_5 == VAR_2
      || VAR_5 == VAR_1)
    return 0;

  return 1;
}
