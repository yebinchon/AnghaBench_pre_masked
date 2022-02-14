
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ static_chain_decl; } ;
typedef int FILE ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int) ;

void
FUNC_4 (FILE *VAR_6, int VAR_7)
{
  bool VAR_8;







  if (VAR_5->static_chain_decl && !VAR_4 && !VAR_2)
    {
      FUNC_3 (VAR_1 == 15);
      VAR_8 = 1;
    }
  else
    VAR_8 = 0;

  if (VAR_3)
    FUNC_2 ("\t.prologue 4, r40\n", VAR_6);
  else
    FUNC_2 ("\t.prologue\n\t.save ar.pfs, r40\n", VAR_6);
  FUNC_2 ("\talloc out0 = ar.pfs, 8, 0, 4, 0\n", VAR_6);

  if (VAR_0)
    FUNC_2 ("\tmov out3 = r0\n", VAR_6);
  else
    {
      char VAR_9[20];
      FUNC_0 (VAR_9, "LP", VAR_7);

      if (VAR_2)
 FUNC_2 ("\tmovl out3 = @gprel(", VAR_6);
      else
 FUNC_2 ("\taddl out3 = @ltoff(", VAR_6);
      FUNC_1 (VAR_6, VAR_9);
      if (VAR_2)
 FUNC_2 (")\n", VAR_6);
      else
 FUNC_2 ("), r1\n", VAR_6);
    }

  if (VAR_8)
    FUNC_2 ("\taddl r14 = @ltoff(@fptr(_mcount)), r1\n", VAR_6);
  FUNC_2 ("\t;;\n", VAR_6);

  FUNC_2 ("\t.save rp, r42\n", VAR_6);
  FUNC_2 ("\tmov out2 = b0\n", VAR_6);
  if (VAR_8)
    FUNC_2 ("\tld8 r14 = [r14]\n\t;;\n", VAR_6);
  FUNC_2 ("\t.body\n", VAR_6);
  FUNC_2 ("\tmov out1 = r1\n", VAR_6);
  if (VAR_8)
    {
      FUNC_2 ("\tld8 r16 = [r14], 8\n\t;;\n", VAR_6);
      FUNC_2 ("\tmov b6 = r16\n", VAR_6);
      FUNC_2 ("\tld8 r1 = [r14]\n", VAR_6);
      FUNC_2 ("\tbr.call.sptk.many b0 = b6\n\t;;\n", VAR_6);
    }
  else
    FUNC_2 ("\tbr.call.sptk.many b0 = _mcount\n\t;;\n", VAR_6);
}
