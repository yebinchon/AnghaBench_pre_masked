
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data {TYPE_1__* operand; int lineno; } ;
typedef scalar_t__ rtx ;
struct TYPE_2__ {int seen; int strict_low; char* predicate; int address_p; int eliminable; void* constraint; void* mode; int n_alternatives; } ;



 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;







 int VAR_0 ;

 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 void* FUNC_6 (scalar_t__,int) ;
 int * FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char,void*) ;
 int VAR_3 ;
 void* FUNC_12 (void*) ;

__attribute__((used)) static void
FUNC_13 (struct data *VAR_4, rtx VAR_5, int VAR_6,
        int VAR_7)
{
  int VAR_8, VAR_9;
  const char *VAR_10;
  int VAR_11;

  if (VAR_5 == 0)
    return;

  switch (FUNC_0 (VAR_5))
    {
    case 134:
      VAR_11 = FUNC_5 (VAR_5, 0);
      if (VAR_11 > VAR_2)
 VAR_2 = VAR_11;
      if (VAR_2 >= VAR_0)
 {
   FUNC_10 (VAR_4->lineno,
        "maximum number of operands exceeded");
   VAR_1 = 1;
   return;
 }
      if (VAR_4->operand[VAR_11].seen)
 {
   FUNC_10 (VAR_4->lineno,
        "repeated operand number %d\n", VAR_11);
   VAR_1 = 1;
 }

      VAR_4->operand[VAR_11].seen = 1;
      VAR_4->operand[VAR_11].mode = FUNC_1 (VAR_5);
      VAR_4->operand[VAR_11].strict_low = VAR_7;
      VAR_4->operand[VAR_11].predicate = FUNC_6 (VAR_5, 1);
      VAR_4->operand[VAR_11].constraint = FUNC_12 (FUNC_6 (VAR_5, 2));
      VAR_4->operand[VAR_11].n_alternatives
 = FUNC_11 (',', VAR_4->operand[VAR_11].constraint) + 1;
      VAR_4->operand[VAR_11].address_p = VAR_6;
      VAR_4->operand[VAR_11].eliminable = 1;
      return;

    case 129:
      VAR_11 = FUNC_5 (VAR_5, 0);
      if (VAR_11 > VAR_2)
 VAR_2 = VAR_11;
      if (VAR_2 >= VAR_0)
 {
   FUNC_10 (VAR_4->lineno,
        "maximum number of operands exceeded");
   VAR_1 = 1;
   return;
 }
      if (VAR_4->operand[VAR_11].seen)
 {
   FUNC_10 (VAR_4->lineno,
        "repeated operand number %d\n", VAR_11);
   VAR_1 = 1;
 }

      VAR_4->operand[VAR_11].seen = 1;
      VAR_4->operand[VAR_11].mode = FUNC_1 (VAR_5);
      VAR_4->operand[VAR_11].strict_low = 0;
      VAR_4->operand[VAR_11].predicate = "scratch_operand";
      VAR_4->operand[VAR_11].constraint = FUNC_12 (FUNC_6 (VAR_5, 1));
      VAR_4->operand[VAR_11].n_alternatives
 = FUNC_11 (',', VAR_4->operand[VAR_11].constraint) + 1;
      VAR_4->operand[VAR_11].address_p = 0;
      VAR_4->operand[VAR_11].eliminable = 0;
      return;

    case 133:
    case 131:
      VAR_11 = FUNC_5 (VAR_5, 0);
      if (VAR_11 > VAR_2)
 VAR_2 = VAR_11;
      if (VAR_2 >= VAR_0)
 {
   FUNC_10 (VAR_4->lineno,
        "maximum number of operands exceeded");
   VAR_1 = 1;
   return;
 }
      if (VAR_4->operand[VAR_11].seen)
 {
   FUNC_10 (VAR_4->lineno,
        "repeated operand number %d\n", VAR_11);
   VAR_1 = 1;
 }

      VAR_4->operand[VAR_11].seen = 1;
      VAR_4->operand[VAR_11].mode = FUNC_1 (VAR_5);
      VAR_4->operand[VAR_11].strict_low = 0;
      VAR_4->operand[VAR_11].predicate = FUNC_6 (VAR_5, 1);
      VAR_4->operand[VAR_11].constraint = 0;
      VAR_4->operand[VAR_11].address_p = 0;
      VAR_4->operand[VAR_11].eliminable = 0;
      for (VAR_8 = 0; VAR_8 < FUNC_9 (VAR_5, 2); VAR_8++)
 FUNC_13 (VAR_4, FUNC_8 (VAR_5, 2, VAR_8), 0, 0);
      return;

    case 135:
    case 132:
    case 130:
      ++VAR_3;
      break;

    case 136:
      FUNC_13 (VAR_4, FUNC_4 (VAR_5, 0), 1, 0);
      return;

    case 128:
      FUNC_13 (VAR_4, FUNC_4 (VAR_5, 0), 0, 1);
      return;

    default:
      break;
    }

  VAR_10 = FUNC_2 (FUNC_0 (VAR_5));

  for (VAR_8 = 0; VAR_8 < FUNC_3 (FUNC_0 (VAR_5)); VAR_8++)
    switch (*VAR_10++)
      {
      case 'e':
      case 'u':
 FUNC_13 (VAR_4, FUNC_4 (VAR_5, VAR_8), 0, 0);
 break;
      case 'E':
 if (FUNC_7 (VAR_5, VAR_8) != ((void*)0))
   for (VAR_9 = 0; VAR_9 < FUNC_9 (VAR_5, VAR_8); VAR_9++)
     FUNC_13 (VAR_4, FUNC_8 (VAR_5, VAR_8, VAR_9), 0, 0);
 break;
      }
}
