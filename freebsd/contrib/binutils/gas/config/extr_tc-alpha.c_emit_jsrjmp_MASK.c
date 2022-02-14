
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct alpha_insn {size_t nfixups; long sequence; TYPE_2__* fixups; } ;
struct TYPE_12__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_3__ expressionS ;
struct TYPE_10__ {int X_op; } ;
struct TYPE_11__ {TYPE_1__ exp; int reloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char const*,TYPE_3__*,int,struct alpha_insn*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct alpha_insn*) ;
 long FUNC_3 (int,TYPE_3__ const*,int*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__,int ) ;
 int FUNC_6 (TYPE_3__,int) ;
 int FUNC_7 (TYPE_3__,int) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static void
FUNC_9 (const expressionS *VAR_10,
      int VAR_11,
      const void * VAR_12)
{
  const char *VAR_13 = (const char *) VAR_12;
  struct alpha_insn VAR_14;
  expressionS VAR_15[3];
  int VAR_16, VAR_17 = 0;
  long VAR_18 = 0;

  if (VAR_17 < VAR_11 && VAR_10[VAR_17].X_op == VAR_8)
    VAR_16 = FUNC_4 (VAR_10[VAR_17++].X_add_number);
  else
    VAR_16 = FUNC_8 (VAR_13, "jmp") == 0 ? VAR_2 : VAR_1;

  FUNC_7 (VAR_15[0], VAR_16);

  if (VAR_17 < VAR_11 &&
      (VAR_10[VAR_17].X_op == VAR_7 || VAR_10[VAR_17].X_op == VAR_6))
    VAR_16 = FUNC_4 (VAR_10[VAR_17++].X_add_number);



  else
    {
      int VAR_19 = VAR_9;
      VAR_18 = FUNC_3 (VAR_16 = VAR_0, &VAR_10[VAR_17], &VAR_19, ((void*)0));
    }


  FUNC_6 (VAR_15[1], VAR_16);




  if (VAR_17 < VAR_11)
    VAR_15[2] = VAR_10[VAR_17];
  else

    FUNC_5 (VAR_15[2], 0);

  FUNC_0 (VAR_13, VAR_15, 3, &VAR_14);

  if (VAR_18)
    {
      FUNC_1 (VAR_14.nfixups < VAR_4);
      VAR_14.fixups[VAR_14.nfixups].reloc = VAR_3;
      VAR_14.fixups[VAR_14.nfixups].exp.X_op = VAR_5;
      VAR_14.nfixups++;
      VAR_14.sequence = VAR_18;
    }

  FUNC_2 (&VAR_14);
}
