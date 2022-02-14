
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data {int n_operands; int n_alternatives; int lineno; TYPE_1__* operand; } ;
struct TYPE_2__ {int n_alternatives; char* constraint; } ;


 int FUNC_0 (char,char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (char const*,int ,int) ;
 int FUNC_4 (int ,char*,char const,...) ;
 scalar_t__ FUNC_5 (char*,char const) ;

__attribute__((used)) static void
FUNC_6 (struct data *VAR_2)
{
  int VAR_3 = 0, VAR_4;



  for (VAR_4 = 0; VAR_4 < VAR_2->n_operands; VAR_4++)
    if (VAR_2->operand[VAR_4].n_alternatives > 0)
      {
 int VAR_5, VAR_6;
 const char *VAR_7;
 char VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 for (VAR_7 = VAR_2->operand[VAR_4].constraint; (VAR_8 = *VAR_7); VAR_7 += VAR_5)
   {
     VAR_5 = FUNC_0 (VAR_8, VAR_7);

     if (VAR_5 < 1 || (VAR_5 > 1 && FUNC_5 (",#*+=&%!0123456789", VAR_8)))
       {
  FUNC_4 (VAR_2->lineno,
       "invalid length %d for char '%c' in alternative %d of operand %d",
        VAR_5, VAR_8, VAR_9, VAR_4);
  VAR_5 = 1;
  VAR_0 = 1;
       }


     if (VAR_8 == ',')
       {
         VAR_9++;
  continue;
       }

     for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++)
       if (VAR_7[VAR_6] == '\0')
  {
    FUNC_4 (VAR_2->lineno,
         "NUL in alternative %d of operand %d",
         VAR_9, VAR_4);
    VAR_10 = 1;
    break;
  }
       else if (FUNC_5 (",#*", VAR_7[VAR_6]))
  {
    FUNC_4 (VAR_2->lineno,
         "'%c' in alternative %d of operand %d",
         VAR_7[VAR_6], VAR_9, VAR_4);
    VAR_10 = 1;
  }
   }
 if (VAR_10)
   VAR_0 = 1;
 else if (VAR_3 == 0)
   VAR_3 = VAR_2->operand[VAR_4].n_alternatives;
 else if (VAR_3 != VAR_2->operand[VAR_4].n_alternatives)
   {
     FUNC_4 (VAR_2->lineno,
          "wrong number of alternatives in operand %d",
          VAR_4);
     VAR_0 = 1;
   }
      }


  VAR_2->n_alternatives = VAR_3;
}
