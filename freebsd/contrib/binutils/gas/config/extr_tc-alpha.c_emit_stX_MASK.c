
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct alpha_insn {size_t nfixups; long sequence; TYPE_2__* fixups; } ;
struct TYPE_14__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_3__ expressionS ;
struct TYPE_12__ {void* X_op; } ;
struct TYPE_13__ {TYPE_1__ exp; void* reloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_3__*,int,int) ;
 int FUNC_3 (char*,TYPE_3__*,int,struct alpha_insn*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct alpha_insn*) ;
 int FUNC_6 (TYPE_3__ const*,int,int ) ;
 char** VAR_13 ;
 long FUNC_7 (int,TYPE_3__ const*,int*,int *) ;
 char** VAR_14 ;
 int FUNC_8 (TYPE_3__,int ) ;
 int FUNC_9 (TYPE_3__,int) ;
 int FUNC_10 (TYPE_3__,int) ;
 int * VAR_15 ;

__attribute__((used)) static void
FUNC_11 (const expressionS *VAR_16,
   int VAR_17,
   const void * VAR_18)
{
  int VAR_19 = (int) (long) VAR_18;

  if (VAR_12 & VAR_0)
    FUNC_6 (VAR_16, VAR_17, VAR_15[VAR_19]);
  else
    {
      expressionS VAR_20[3];
      struct alpha_insn VAR_21;
      int VAR_22;
      long VAR_23;

      if (VAR_11)
 FUNC_1 (FUNC_0("macro requires $at register while noat in effect"));

      if (VAR_17 == 2)
 VAR_22 = (VAR_16[1].X_op == VAR_9
     ? VAR_4 : VAR_10);
      else
 VAR_22 = VAR_16[2].X_add_number;


      VAR_23 = FUNC_7 (VAR_1, &VAR_16[1], &VAR_22, ((void*)0));


      FUNC_10 (VAR_20[0], VAR_3);
      FUNC_8 (VAR_20[1], 0);
      FUNC_9 (VAR_20[2], VAR_22);
      FUNC_3 ("ldq_u", VAR_20, 3, &VAR_21);

      if (VAR_23)
 {
   FUNC_4 (VAR_21.nfixups < VAR_7);
   VAR_21.fixups[VAR_21.nfixups].reloc = VAR_5;
   VAR_21.fixups[VAR_21.nfixups].exp.X_op = VAR_8;
   VAR_21.nfixups++;
   VAR_21.sequence = VAR_23;
 }

      FUNC_5 (&VAR_21);


      VAR_20[0] = VAR_16[0];
      FUNC_10 (VAR_20[1], VAR_22);
      FUNC_10 (VAR_20[2], VAR_2);
      FUNC_3 (VAR_13[VAR_19], VAR_20, 3, &VAR_21);

      if (VAR_23)
 {
   FUNC_4 (VAR_21.nfixups < VAR_7);
   VAR_21.fixups[VAR_21.nfixups].reloc = VAR_6;
   VAR_21.fixups[VAR_21.nfixups].exp.X_op = VAR_8;
   VAR_21.nfixups++;
   VAR_21.sequence = VAR_23;
 }

      FUNC_5 (&VAR_21);


      FUNC_10 (VAR_20[0], VAR_3);
      VAR_20[2] = VAR_20[0];
      FUNC_3 (VAR_14[VAR_19], VAR_20, 3, &VAR_21);

      if (VAR_23)
 {
   FUNC_4 (VAR_21.nfixups < VAR_7);
   VAR_21.fixups[VAR_21.nfixups].reloc = VAR_6;
   VAR_21.fixups[VAR_21.nfixups].exp.X_op = VAR_8;
   VAR_21.nfixups++;
   VAR_21.sequence = VAR_23;
 }

      FUNC_5 (&VAR_21);


      FUNC_10 (VAR_20[1], VAR_2);
      FUNC_2 ("or", VAR_20, 3, 1);


      FUNC_8(VAR_20[1], 0);
      FUNC_9 (VAR_20[2], VAR_1);
      FUNC_3 ("stq_u", VAR_20, 3, &VAR_21);

      if (VAR_23)
 {
   FUNC_4 (VAR_21.nfixups < VAR_7);
   VAR_21.fixups[VAR_21.nfixups].reloc = VAR_5;
   VAR_21.fixups[VAR_21.nfixups].exp.X_op = VAR_8;
   VAR_21.nfixups++;
   VAR_21.sequence = VAR_23;
 }

      FUNC_5 (&VAR_21);
    }
}
