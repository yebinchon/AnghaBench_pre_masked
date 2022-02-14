
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cl_insn {int noreorder_p; } ;


 int VAR_0 ;
 int FUNC_0 (struct mips_cl_insn const*,struct mips_cl_insn const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mips_cl_insn const*,struct mips_cl_insn const*) ;

__attribute__((used)) static int
FUNC_2 (const struct mips_cl_insn *VAR_2,
        const struct mips_cl_insn *VAR_3)
{
  int VAR_4, VAR_5, VAR_6;

  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (!VAR_2[VAR_4].noreorder_p)
      {
 VAR_6 = FUNC_0 (VAR_2 + VAR_4, VAR_3) - VAR_4;
 if (VAR_6 > VAR_5)
   VAR_5 = VAR_6;
      }

  if (VAR_1)
    {
      VAR_6 = FUNC_1 (VAR_2, VAR_3);
      if (VAR_6 > VAR_5)
 VAR_5 = VAR_6;
    }

  return VAR_5;
}
