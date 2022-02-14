
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_7__ {char* (* insert_operand ) (TYPE_1__*,int ,int *,int ,int ) ;scalar_t__ base_insn_bitsize; } ;
typedef scalar_t__ CGEN_SYNTAX_CHAR_TYPE ;
typedef int CGEN_SYNTAX ;
typedef int CGEN_INSN_BYTES_PTR ;
typedef int CGEN_INSN ;
typedef int CGEN_FIELDS ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned long FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (scalar_t__ const) ;
 int FUNC_5 (scalar_t__ const) ;
 scalar_t__* FUNC_6 (int const*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,unsigned long) ;
 int FUNC_8 (unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_1__*,int ,scalar_t__,scalar_t__,unsigned long) ;
 char* FUNC_10 (TYPE_1__*,int ,int *,int ,int ) ;

__attribute__((used)) static const char *
FUNC_11 (CGEN_CPU_DESC VAR_0,
      const CGEN_INSN * VAR_1,
      CGEN_FIELDS * VAR_2,
      CGEN_INSN_BYTES_PTR VAR_3,
      bfd_vma VAR_4)
{
  const CGEN_SYNTAX *VAR_5 = FUNC_3 (VAR_1);
  unsigned long VAR_6;
  const CGEN_SYNTAX_CHAR_TYPE * VAR_7;

  FUNC_1 (VAR_0);
  VAR_6 = FUNC_2 (VAR_1);
  FUNC_7 (VAR_0, VAR_3, FUNC_8 ((unsigned) VAR_0->base_insn_bitsize,
     (unsigned) FUNC_0 (VAR_2)),
         VAR_6);
  for (VAR_7 = FUNC_6 (VAR_5); * VAR_7; ++ VAR_7)
    {
      const char *VAR_8;

      if (FUNC_4 (* VAR_7))
 continue;

      VAR_8 = (* VAR_0->insert_operand) (VAR_0, FUNC_5 (*VAR_7),
           VAR_2, VAR_3, VAR_4);
      if (VAR_8)
 return VAR_8;
    }

  return ((void*)0);
}
