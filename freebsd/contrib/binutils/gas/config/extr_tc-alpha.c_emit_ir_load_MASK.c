
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
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,TYPE_3__*,int,struct alpha_insn*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct alpha_insn*) ;
 long FUNC_3 (int,TYPE_3__ const*,int*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__,int) ;

__attribute__((used)) static void
FUNC_5 (const expressionS *VAR_6,
       int VAR_7,
       const void * VAR_8)
{
  int VAR_9;
  long VAR_10;
  expressionS VAR_11[3];
  struct alpha_insn VAR_12;

  if (VAR_7 == 2)
    VAR_9 = (VAR_6[1].X_op == VAR_4 ? VAR_0 : VAR_5);
  else
    VAR_9 = VAR_6[2].X_add_number;

  VAR_10 = FUNC_3 (VAR_6[0].X_add_number, &VAR_6[1], &VAR_9,
       &VAR_11[1]);

  VAR_11[0] = VAR_6[0];
  FUNC_4 (VAR_11[2], VAR_9);

  FUNC_0 ((const char *) VAR_8, VAR_11, 3, &VAR_12);

  if (VAR_10)
    {
      FUNC_1 (VAR_12.nfixups < VAR_2);
      VAR_12.fixups[VAR_12.nfixups].reloc = VAR_1;
      VAR_12.fixups[VAR_12.nfixups].exp.X_op = VAR_3;
      VAR_12.nfixups++;
      VAR_12.sequence = VAR_10;
    }

  FUNC_2 (&VAR_12);
}
