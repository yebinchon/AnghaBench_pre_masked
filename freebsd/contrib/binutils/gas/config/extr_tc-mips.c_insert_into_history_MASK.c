
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_cl_insn {int dummy; } ;
struct TYPE_2__ {int sequence; } ;


 unsigned int FUNC_0 (struct mips_cl_insn*) ;
 struct mips_cl_insn* VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (unsigned int VAR_2, unsigned int VAR_3,
       const struct mips_cl_insn *VAR_4)
{
  if (VAR_1.sequence != 2)
    {
      unsigned int VAR_5;

      for (VAR_5 = FUNC_0 (VAR_0); VAR_5-- > VAR_2;)
 if (VAR_5 >= VAR_2 + VAR_3)
   VAR_0[VAR_5] = VAR_0[VAR_5 - VAR_3];
 else
   VAR_0[VAR_5] = *VAR_4;
    }
}
