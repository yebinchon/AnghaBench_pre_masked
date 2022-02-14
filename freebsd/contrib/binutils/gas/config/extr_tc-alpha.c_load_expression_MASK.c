
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct alpha_insn {int nfixups; long sequence; TYPE_2__* fixups; } ;
typedef int offsetT ;
struct TYPE_16__ {int X_add_number; int X_op; int * X_add_symbol; } ;
typedef TYPE_3__ expressionS ;
struct TYPE_14__ {int X_op; } ;
struct TYPE_15__ {TYPE_1__ exp; void* reloc; } ;
struct TYPE_13__ {int * symbol; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (char*) ;
 int VAR_7 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int,int *,int) ;
 TYPE_12__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,TYPE_3__*,int,int ) ;
 int FUNC_6 (char*,TYPE_3__*,int,struct alpha_insn*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int **,int **) ;
 int FUNC_9 (struct alpha_insn*) ;
 int VAR_16 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (TYPE_3__,int) ;
 int FUNC_14 (TYPE_3__,int) ;
 int FUNC_15 (TYPE_3__,int) ;
 int FUNC_16 (TYPE_3__,int *,int) ;
 int FUNC_17 (int) ;

__attribute__((used)) static long
FUNC_18 (int VAR_17,
   const expressionS *VAR_18,
   int *VAR_19,
   expressionS *VAR_20)
{
  long VAR_21 = 0;
  offsetT VAR_22 = VAR_18->X_add_number;
  int VAR_23 = *VAR_19;
  struct alpha_insn VAR_24;
  expressionS VAR_25[3];

  switch (VAR_18->X_op)
    {
    case 128:
      {
 FUNC_9 (&VAR_24);


 if (VAR_23 != VAR_9 && VAR_23 != VAR_1)
   {


     FUNC_15 (VAR_25[1], VAR_23);
     FUNC_15 (VAR_25[2], VAR_17);
     FUNC_5 ("addq", VAR_25, 3, 0);
   }

 VAR_23 = VAR_17;
      }
      break;

    case 130:
      break;

    case 129:



      FUNC_15 (VAR_25[0], VAR_17);
      VAR_25[1] = *VAR_18;
      FUNC_14 (VAR_25[2], VAR_23);
      FUNC_5 ("lda", VAR_25, 3, 0);

      if (VAR_20)
 FUNC_13 (*VAR_20, 0);
      return 0;

    case 131:
      if (VAR_18->X_add_number > 0)
 FUNC_3 (FUNC_0("bignum invalid; zero assumed"));
      else
 FUNC_3 (FUNC_0("floating point number invalid; zero assumed"));
      VAR_22 = 0;
      break;

    default:
      FUNC_3 (FUNC_0("can't handle expression"));
      VAR_22 = 0;
      break;
    }

  if (!FUNC_11 (VAR_22))
    {
      offsetT VAR_26;
      long VAR_27 = VAR_16--;
      if (VAR_11 == ((void*)0))
 {
   FUNC_8 (".lit8",
      &VAR_11,
      &VAR_12);







 }

      VAR_26 = FUNC_2 (((void*)0), VAR_22, VAR_11, 8) - 0x8000;
      if (VAR_26 >= 0x8000)
 FUNC_4 (FUNC_0("overflow in literal (.lit8) table"));



      if (VAR_17 == VAR_23)
 {
   if (VAR_15)
     FUNC_3 (FUNC_0("macro requires $at register while noat in effect"));
   if (VAR_17 == VAR_0)
     FUNC_3 (FUNC_0("macro requires $at while $at in use"));

   FUNC_15 (VAR_25[0], VAR_0);
 }
      else
 FUNC_15 (VAR_25[0], VAR_17);






      FUNC_14 (VAR_25[2], VAR_9);

      FUNC_6 ("ldq", VAR_25, 3, &VAR_24);

      FUNC_7 (VAR_24.nfixups == 1);






      VAR_24.sequence = VAR_27;

      FUNC_9 (&VAR_24);



      FUNC_13 (VAR_25[1], VAR_26);
      FUNC_14 (VAR_25[2], VAR_25[0].X_add_number);

      FUNC_6 ("ldq", VAR_25, 3, &VAR_24);

      FUNC_7 (VAR_24.nfixups < VAR_5);
      VAR_24.fixups[VAR_24.nfixups].reloc = VAR_4;
      VAR_24.fixups[VAR_24.nfixups].exp.X_op = VAR_6;
      VAR_24.nfixups++;
      VAR_24.sequence = VAR_27;
      VAR_21 = 0;

      FUNC_9 (&VAR_24);



      if (VAR_23 != VAR_1)
 {
   FUNC_15 (VAR_25[1], VAR_23);
   FUNC_15 (VAR_25[2], VAR_17);
   FUNC_5 ("addq", VAR_25, 3, 0);
 }


      if (VAR_20)
 FUNC_13 (*VAR_20, 0);
      *VAR_19 = VAR_17;
    }
  else
    {
      offsetT VAR_28, VAR_29, VAR_30, VAR_31;



      VAR_28 = FUNC_17 (VAR_22);
      VAR_31 = VAR_22 - VAR_28;
      VAR_29 = FUNC_17 (VAR_31 >> 16);

      if (VAR_31 - (VAR_29 << 16))
 {
   VAR_30 = 0x4000;
   VAR_31 -= 0x40000000;
   VAR_29 = FUNC_17 (VAR_31 >> 16);
 }
      else
 VAR_30 = 0;

      FUNC_15 (VAR_25[0], VAR_17);
      FUNC_14 (VAR_25[2], VAR_23);

      if (VAR_30)
 {

   FUNC_13 (VAR_25[1], VAR_30);
   FUNC_5 ("ldah", VAR_25, 3, 0);
   FUNC_14 (VAR_25[2], VAR_23 = VAR_17);
 }

      if (VAR_29)
 {

   FUNC_13 (VAR_25[1], VAR_29);
   FUNC_5 ("ldah", VAR_25, 3, 0);
   VAR_23 = VAR_17;
   FUNC_14 (VAR_25[2], VAR_23);
 }

      if ((VAR_28 && !VAR_20) || (!VAR_20 && VAR_23 != VAR_17))
 {

   FUNC_13 (VAR_25[1], VAR_28);
   FUNC_5 ("lda", VAR_25, 3, 0);
   VAR_23 = VAR_17;
   VAR_28 = 0;
 }

      if (VAR_20)
 FUNC_13 (*VAR_20, VAR_28);
      *VAR_19 = VAR_23;
    }

  return VAR_21;
}
