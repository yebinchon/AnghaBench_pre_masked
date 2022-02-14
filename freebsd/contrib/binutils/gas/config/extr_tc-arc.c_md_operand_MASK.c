
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; } ;
struct arc_ext_operand_value {struct arc_ext_operand_value* next; TYPE_1__ operand; } ;
typedef void* offsetT ;
struct TYPE_8__ {void* X_add_number; void* X_op; } ;
typedef TYPE_2__ expressionS ;
struct TYPE_9__ {char* name; } ;


 int FUNC_0 (char) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 struct arc_ext_operand_value* VAR_1 ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 char* VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

void
FUNC_6 (expressionS *VAR_5)
{
  char *VAR_6 = VAR_4;

  if (*VAR_6 != '%')
    return;

  if (FUNC_5 (VAR_6, "%st(", 4) == 0)
    {
      VAR_4 += 4;
      FUNC_3 (VAR_5);
      if (*VAR_4 != ')')
 {
   FUNC_2 ("missing ')' in %%-op");
   return;
 }
      ++VAR_4;
      FUNC_1 (VAR_5);
    }
  else
    {

      int VAR_7, VAR_8;
      struct arc_ext_operand_value *VAR_9 = VAR_1;
      VAR_6++;

      while (VAR_9)
 {
   VAR_8 = FUNC_4 (VAR_9->operand.name);
   if (!FUNC_5 (VAR_6, VAR_9->operand.name, VAR_8) && !FUNC_0 (*(VAR_6 + VAR_8)))
     {
       VAR_4 += VAR_8 + 1;
       VAR_5->X_op = VAR_0;
       VAR_5->X_add_number = (offsetT) &VAR_9->operand;
       return;
     }
   VAR_9 = VAR_9->next;
 }
      for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
   VAR_8 = FUNC_4 (VAR_2[VAR_7].name);
   if (!FUNC_5 (VAR_6, VAR_2[VAR_7].name, VAR_8) && !FUNC_0 (*(VAR_6 + VAR_8)))
     {
       VAR_4 += VAR_8 + 1;
       VAR_5->X_op = VAR_0;
       VAR_5->X_add_number = (offsetT) &VAR_2[VAR_7];
       break;
     }
 }
    }
}
