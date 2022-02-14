
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct alpha_insn {size_t nfixups; long sequence; TYPE_2__* fixups; } ;
struct TYPE_13__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_3__ expressionS ;
struct TYPE_11__ {void* X_op; } ;
struct TYPE_12__ {TYPE_1__ exp; int reloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_3__*,int,struct alpha_insn*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct alpha_insn*) ;
 int FUNC_5 (TYPE_3__ const*,int,int ) ;
 char** VAR_11 ;
 int * VAR_12 ;
 long FUNC_6 (int ,TYPE_3__ const*,int*,int *) ;
 int FUNC_7 (TYPE_3__,int ) ;
 int FUNC_8 (TYPE_3__,int) ;
 int FUNC_9 (TYPE_3__,int) ;

__attribute__((used)) static void
FUNC_10 (const expressionS *VAR_13,
    int VAR_14,
    const void * VAR_15)
{
  if (VAR_10 & VAR_0)
    FUNC_5 (VAR_13, VAR_14, VAR_12[(long) VAR_15]);
  else
    {
      expressionS VAR_16[3];
      struct alpha_insn VAR_17;
      int VAR_18;
      long VAR_19;

      if (VAR_9)
 FUNC_1 (FUNC_0("macro requires $at register while noat in effect"));

      if (VAR_14 == 2)
 VAR_18 = (VAR_13[1].X_op == VAR_7
     ? VAR_2 : VAR_8);
      else
 VAR_18 = VAR_13[2].X_add_number;


      VAR_19 = FUNC_6 (VAR_1, &VAR_13[1], &VAR_18, ((void*)0));


      VAR_16[0] = VAR_13[0];
      FUNC_7 (VAR_16[1], 0);
      FUNC_8 (VAR_16[2], VAR_18);
      FUNC_2 ("ldq_u", VAR_16, 3, &VAR_17);

      if (VAR_19)
 {
   FUNC_3 (VAR_17.nfixups < VAR_5);
   VAR_17.fixups[VAR_17.nfixups].reloc = VAR_3;
   VAR_17.fixups[VAR_17.nfixups].exp.X_op = VAR_6;
   VAR_17.nfixups++;
   VAR_17.sequence = VAR_19;
 }

      FUNC_4 (&VAR_17);


      FUNC_9 (VAR_16[1], VAR_18);
      VAR_16[2] = VAR_16[0];
      FUNC_2 (VAR_11[(long) VAR_15], VAR_16, 3, &VAR_17);

      if (VAR_19)
 {
   FUNC_3 (VAR_17.nfixups < VAR_5);
   VAR_17.fixups[VAR_17.nfixups].reloc = VAR_4;
   VAR_17.fixups[VAR_17.nfixups].exp.X_op = VAR_6;
   VAR_17.nfixups++;
   VAR_17.sequence = VAR_19;
 }

      FUNC_4 (&VAR_17);
    }
}
