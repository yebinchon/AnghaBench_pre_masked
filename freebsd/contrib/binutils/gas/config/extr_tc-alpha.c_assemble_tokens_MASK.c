
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct alpha_opcode {int dummy; } ;
struct alpha_macro {int arg; int (* emit ) (TYPE_1__ const*,int,int ) ;} ;
struct alpha_insn {int sequence; } ;
struct TYPE_8__ {int X_add_number; int X_op; } ;
typedef TYPE_1__ expressionS ;
typedef scalar_t__ bfd_reloc_code_real_type ;
struct TYPE_9__ {scalar_t__ reloc; } ;


 TYPE_7__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char const*,...) ;
 int FUNC_4 (struct alpha_opcode const*,TYPE_1__ const*,int,struct alpha_insn*,scalar_t__) ;
 int FUNC_5 (struct alpha_insn*) ;
 struct alpha_macro* FUNC_6 (struct alpha_macro const*,TYPE_1__ const*,int*) ;
 struct alpha_opcode* FUNC_7 (struct alpha_opcode const*,TYPE_1__ const*,int*,int*) ;
 scalar_t__ FUNC_8 (int ,char const*) ;
 int FUNC_9 (TYPE_1__ const*,int,int ) ;

__attribute__((used)) static void
FUNC_10 (const char *VAR_4,
   const expressionS *VAR_5,
   int VAR_6,
   int VAR_7)
{
  int VAR_8 = 0;
  const struct alpha_opcode *VAR_9;
  const struct alpha_macro *VAR_10;
  int VAR_11 = 1;
  bfd_reloc_code_real_type VAR_12 = VAR_0;
  if (VAR_7)
    {
      VAR_10 = ((const struct alpha_macro *)
        FUNC_8 (VAR_1, VAR_4));
      if (VAR_10)
 {
   VAR_8 = 1;
   VAR_10 = FUNC_6 (VAR_10, VAR_5, &VAR_6);
   if (VAR_10)
     {
       (*VAR_10->emit) (VAR_5, VAR_6, VAR_10->arg);
       return;
     }
 }
    }


  VAR_9 = (const struct alpha_opcode *) FUNC_8 (VAR_2, VAR_4);
  if (VAR_9)
    {
      VAR_8 = 1;
      VAR_9 = FUNC_7 (VAR_9, VAR_5, &VAR_6, &VAR_11);
      if (VAR_9)
 {
   struct alpha_insn VAR_13;
   FUNC_4 (VAR_9, VAR_5, VAR_6, &VAR_13, VAR_12);


   if (VAR_12 != VAR_0)
     VAR_13.sequence = VAR_5[VAR_6].X_add_number;

   FUNC_5 (&VAR_13);
   return;
 }
    }

  if (VAR_8)
    {
      if (VAR_11)
 FUNC_3 (FUNC_2("inappropriate arguments for opcode `%s'"), VAR_4);
      else
 FUNC_3 (FUNC_2("opcode `%s' not supported for target %s"), VAR_4,
  VAR_3);
    }
  else
    FUNC_3 (FUNC_2("unknown opcode `%s'"), VAR_4);
}
