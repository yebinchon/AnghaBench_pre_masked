
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_cl_insn {long where; TYPE_1__** fixp; int * frag; } ;
typedef int fragS ;
struct TYPE_2__ {long fx_where; int * fx_frag; } ;


 size_t FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (struct mips_cl_insn*) ;

__attribute__((used)) static void
FUNC_2 (struct mips_cl_insn *VAR_0, fragS *VAR_1, long VAR_2)
{
  size_t VAR_3;

  VAR_0->frag = VAR_1;
  VAR_0->where = VAR_2;
  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_0->fixp); VAR_3++)
    if (VAR_0->fixp[VAR_3] != ((void*)0))
      {
 VAR_0->fixp[VAR_3]->fx_frag = VAR_1;
 VAR_0->fixp[VAR_3]->fx_where = VAR_2;
      }
  FUNC_1 (VAR_0);
}
