
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alpha_opcode {int dummy; } ;
struct alpha_insn {int dummy; } ;
typedef int expressionS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,...) ;
 int FUNC_2 (struct alpha_opcode const*,int const*,int,struct alpha_insn*,int ) ;
 struct alpha_opcode* FUNC_3 (struct alpha_opcode const*,int const*,int*,int*) ;
 scalar_t__ FUNC_4 (int ,char const*) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_3,
    const expressionS *VAR_4,
    int VAR_5,
    struct alpha_insn *VAR_6)
{
  const struct alpha_opcode *VAR_7;


  VAR_7 = (const struct alpha_opcode *) FUNC_4 (VAR_1, VAR_3);
  if (VAR_7)
    {
      int VAR_8;
      VAR_7 = FUNC_3 (VAR_7, VAR_4, &VAR_5, &VAR_8);
      if (VAR_7)
 {
   FUNC_2 (VAR_7, VAR_4, VAR_5, VAR_6, VAR_0);
   return;
 }
      else if (VAR_8)
 FUNC_1 (FUNC_0("inappropriate arguments for opcode `%s'"), VAR_3);
      else
 FUNC_1 (FUNC_0("opcode `%s' not supported for target %s"), VAR_3,
  VAR_2);
    }
  else
    FUNC_1 (FUNC_0("unknown opcode `%s'"), VAR_3);
}
