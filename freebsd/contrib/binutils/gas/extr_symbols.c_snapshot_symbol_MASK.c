
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_10__ {int X_op; int X_add_number; TYPE_2__* X_add_symbol; } ;
struct TYPE_9__ {int sy_resolving; int * sy_frag; TYPE_1__* bsym; int sy_resolved; TYPE_3__ sy_value; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {scalar_t__ lsy_section; int lsy_value; } ;
typedef scalar_t__ segT ;
typedef int fragS ;
typedef TYPE_3__ expressionS ;
struct TYPE_8__ {scalar_t__ section; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (struct local_symbol*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;

int
FUNC_4 (symbolS **VAR_5, valueT *VAR_6, segT *VAR_7, fragS **VAR_8)
{
  symbolS *VAR_9 = *VAR_5;

  if (FUNC_0 (VAR_9))
    {
      struct local_symbol *VAR_10 = (struct local_symbol *) VAR_9;

      *VAR_6 = VAR_10->lsy_value;
      *VAR_7 = VAR_10->lsy_section;
      *VAR_8 = FUNC_1 (VAR_10);
    }
  else
    {
      expressionS VAR_11 = VAR_9->sy_value;

      if (!VAR_9->sy_resolved && VAR_11.X_op != VAR_0)
 {
   int VAR_12;

   if (VAR_9->sy_resolving)
     return 0;
   VAR_9->sy_resolving = 1;
   VAR_12 = FUNC_2 (&VAR_11);
   VAR_9->sy_resolving = 0;
   if (!VAR_12)
     return 0;

   switch (VAR_11.X_op)
     {
     case 131:
     case 130:
       if (!FUNC_3 (VAR_9))
  break;

     case 129:
     case 128:
       VAR_9 = VAR_11.X_add_symbol;
       break;
     default:
       return 0;
     }
 }


      if (VAR_9->bsym->section == VAR_4
   || VAR_9->bsym->section == VAR_2)
 *VAR_5 = VAR_9;
      *VAR_6 = VAR_11.X_add_number;
      *VAR_7 = VAR_9->bsym->section;
      *VAR_8 = VAR_9->sy_frag;

      if (*VAR_7 == VAR_2)
 switch (VAR_11.X_op)
   {
   case 131: *VAR_7 = VAR_1; break;
   case 130: *VAR_7 = VAR_3; break;
   default: break;
   }
    }

  return 1;
}
