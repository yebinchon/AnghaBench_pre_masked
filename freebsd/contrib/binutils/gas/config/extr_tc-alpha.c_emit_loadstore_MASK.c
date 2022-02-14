
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct alpha_insn {size_t nfixups; long sequence; TYPE_2__* fixups; } ;
struct TYPE_11__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_3__ expressionS ;
struct TYPE_9__ {int X_op; } ;
struct TYPE_10__ {TYPE_1__ exp; int reloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,TYPE_3__*,int,struct alpha_insn*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct alpha_insn*) ;
 long FUNC_5 (int ,TYPE_3__ const*,int*,TYPE_3__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__,int) ;

__attribute__((used)) static void
FUNC_8 (const expressionS *VAR_8,
  int VAR_9,
  const void * VAR_10)
{
  int VAR_11;
  long VAR_12;
  expressionS VAR_13[3];
  struct alpha_insn VAR_14;

  if (VAR_9 == 2)
    VAR_11 = (VAR_8[1].X_op == VAR_5 ? VAR_1 : VAR_6);
  else
    VAR_11 = VAR_8[2].X_add_number;

  if (VAR_8[1].X_op != VAR_5 || !FUNC_6 (VAR_8[1].X_add_number))
    {
      if (VAR_7)
 FUNC_1 (FUNC_0("macro requires $at register while noat in effect"));

      VAR_12 = FUNC_5 (VAR_0, &VAR_8[1], &VAR_11, &VAR_13[1]);
    }
  else
    {
      VAR_13[1] = VAR_8[1];
      VAR_12 = 0;
    }

  VAR_13[0] = VAR_8[0];
  FUNC_7 (VAR_13[2], VAR_11);

  FUNC_2 ((const char *) VAR_10, VAR_13, 3, &VAR_14);

  if (VAR_12)
    {
      FUNC_3 (VAR_14.nfixups < VAR_3);
      VAR_14.fixups[VAR_14.nfixups].reloc = VAR_2;
      VAR_14.fixups[VAR_14.nfixups].exp.X_op = VAR_4;
      VAR_14.nfixups++;
      VAR_14.sequence = VAR_12;
    }

  FUNC_4 (&VAR_14);
}
