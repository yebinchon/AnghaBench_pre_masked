
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int X_op; int X_add_number; int * X_op_symbol; int * X_add_symbol; } ;
struct TYPE_6__ {TYPE_5__ exp; void* rtype; TYPE_2__* arg; } ;
typedef TYPE_1__ ins ;
struct TYPE_7__ {int X_op; int size; int type; int constant; } ;
typedef TYPE_2__ argument ;
struct TYPE_8__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_24 ;






 int VAR_25 ;
 int FUNC_2 (char*) ;






 int FUNC_3 (int ,...) ;
 int VAR_26 ;
 int FUNC_4 (TYPE_5__*) ;
 char* VAR_27 ;
 TYPE_4__* VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_30, ins * VAR_31)
{
  char *VAR_32;
  int VAR_33 = 0;
  int VAR_34 = 0;
  int VAR_35 = 0;
  int VAR_36 = 0;
  argument *VAR_37 = VAR_31->arg + VAR_26;

  VAR_32 = VAR_27;
  VAR_27 = VAR_30;

  FUNC_4 (&VAR_31->exp);

  switch (VAR_31->exp.X_op)
    {
    case 137:
    case 139:

      FUNC_3 (FUNC_2("missing or invalid displacement expression `%s' taken as 0"),
       VAR_30);
      VAR_31->exp.X_op = 136;
      VAR_31->exp.X_add_number = 0;
      VAR_31->exp.X_add_symbol = ((void*)0);
      VAR_31->exp.X_op_symbol = ((void*)0);


    case 136:
      VAR_37->X_op = 136;
      VAR_37->constant = VAR_31->exp.X_add_number;
      break;

    case 134:
    case 135:
    case 138:
      VAR_37->X_op = 134;
      VAR_31->rtype = VAR_20;
      VAR_29 = 1;

      if (FUNC_5 (VAR_27, "@c", 2))
 VAR_33 = 1;

      if (FUNC_5 (VAR_27, "@l", 2)
   || FUNC_5 (VAR_27, ":l", 2))
 VAR_36 = 1;

      if (FUNC_5 (VAR_27, "@m", 2)
   || FUNC_5 (VAR_27, ":m", 2))
 VAR_35 = 1;

      if (FUNC_5 (VAR_27, "@s", 2)
   || FUNC_5 (VAR_27, ":s", 2))
 VAR_34 = 1;

      switch (VAR_37->type)
        {
 case 132:
   if (FUNC_1 (VAR_24) || FUNC_1 (VAR_23))
     {
       if (VAR_37->size == 20)
  VAR_31->rtype = VAR_16;
       else
  VAR_31->rtype = VAR_17;
     }
   break;

 case 131:
   if (FUNC_1 (VAR_24) || FUNC_1 (VAR_23))
     switch (VAR_28->size)
       {
       case 1:
  switch (VAR_37->size)
    {
    case 0:
      VAR_31->rtype = VAR_13;
      break;
    case 4:
      if (FUNC_0 ("loadb") || FUNC_0 ("storb"))
        VAR_31->rtype = VAR_18;
      else
        VAR_31->rtype = VAR_19;
      break;
    default: break;
    }
  break;
       case 2:
  VAR_31->rtype = VAR_15;
  break;
       case 3:
  if (VAR_37->size == 20)
    VAR_31->rtype = VAR_16;
  else
    VAR_31->rtype = VAR_17;
  break;
       default:
  break;
       }
   break;

 case 129:
   if (FUNC_1 (VAR_24) || FUNC_1 (VAR_23))
     VAR_31->rtype = VAR_16;
   break;

 case 128:
   if (FUNC_1 (VAR_24) || FUNC_1 (VAR_23))
     switch (VAR_28->size)
       {
       case 1: VAR_31->rtype = VAR_13; break;
       case 2: VAR_31->rtype = VAR_14; break;
       case 3: VAR_31->rtype = VAR_16; break;
       default: break;
       }
   break;

 case 133:
   if (FUNC_0 ("bal"))
     VAR_31->rtype = VAR_5;
   else if (FUNC_1 (VAR_21))
     {
       if (VAR_34)
  VAR_31->rtype = VAR_7;
       else if (VAR_35)
  VAR_31->rtype = VAR_4;
       else
  VAR_31->rtype = VAR_5;
     }
   else if (FUNC_1 (VAR_25) || FUNC_1 (VAR_24)
     || FUNC_1 (VAR_23))
     {
       if (VAR_34)
  FUNC_3 (FUNC_2("operand %d: illegal use expression: `%s`"), VAR_26 + 1, VAR_30);
       if (VAR_35)
  VAR_31->rtype = VAR_2;
       else
  VAR_31->rtype = VAR_3;
     }
   else if (FUNC_1 (VAR_22))
     VAR_31->rtype = VAR_6;
          break;

        case 130:
          if (FUNC_1 (VAR_1))
            {
              if (VAR_34)
                VAR_31->rtype = VAR_12;
              else if (VAR_35)
                VAR_31->rtype = VAR_9;
              else if (VAR_33)
                VAR_31->rtype = VAR_11;
              else
                VAR_31->rtype = VAR_10;
            }
          else if (FUNC_1 (VAR_0))
     {
       VAR_31->rtype = VAR_8;
     }
          break;
        default:
          break;
 }
      break;

    default:
      VAR_37->X_op = VAR_31->exp.X_op;
      break;
    }

  VAR_27 = VAR_32;
  return;
}
