
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * tree ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_4__ {int type; int keyword; int * value; int pragma_kind; int id_kind; int in_system_header; int location; } ;
typedef TYPE_1__ c_token ;
typedef int c_parser ;






 void* VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;

 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 () ;
 int FUNC_8 (int **,int *,int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 () ;
 int VAR_17 ;
 int * FUNC_11 (int *) ;
 int VAR_18 ;
 int * FUNC_12 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 void** VAR_21 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15 (c_token *VAR_22, c_parser *VAR_23)
{
  FUNC_14 (VAR_15);

  VAR_22->type = FUNC_8 (&VAR_22->value, &VAR_22->location, ((void*)0));
  VAR_22->id_kind = VAR_10;
  VAR_22->keyword = VAR_14;
  VAR_22->pragma_kind = VAR_12;
  VAR_22->in_system_header = VAR_17;

  switch (VAR_22->type)
    {
    case 130:
      {
 tree VAR_24;

 int VAR_25 = VAR_19;
 FUNC_4 (0);

 if (FUNC_0 (VAR_22->value))
   {
     enum rid VAR_26 = FUNC_1 (VAR_22->value);

     if (FUNC_7 ())
       {
  if (!FUNC_2 (VAR_26)
      && (!FUNC_3 (VAR_26) || VAR_20))
    {

      VAR_22->value = VAR_21[(int) VAR_26];
      VAR_22->type = VAR_0;
      VAR_22->keyword = VAR_26;
      break;
    }

  else if (VAR_18 && VAR_26 == VAR_13)
    {

      c_token *VAR_27 = FUNC_9 (VAR_23);
      if (VAR_27->type == 130
   || VAR_27->type == VAR_4
   || VAR_27->type == VAR_3
   || VAR_27->type == VAR_6
   || VAR_27->type == VAR_7
   || VAR_27->type == VAR_1
   || VAR_27->type == VAR_2

   || VAR_27->type == VAR_5)
        {
   VAR_22->type = VAR_0;
   VAR_22->keyword = VAR_26;
   break;
        }
    }

       }
     else
       {

  VAR_22->value = VAR_21[(int) VAR_26];
  VAR_22->type = VAR_0;
  VAR_22->keyword = VAR_26;
  break;
       }
   }

 VAR_24 = FUNC_11 (VAR_22->value);
 if (VAR_24)
   {
     if (FUNC_5 (VAR_24) == VAR_16)
       {
  VAR_22->id_kind = VAR_11;
  break;
       }
   }
 else if (FUNC_7 ())
   {
     tree VAR_28 = FUNC_12 (VAR_22->value);



     if (VAR_28
  && (FUNC_10 ()
      || (!VAR_25 && !VAR_24)))
       {
  VAR_22->value = VAR_28;
  VAR_22->id_kind = VAR_8;
  break;
       }
   }
        VAR_22->id_kind = VAR_9;
      }
      break;
    case 134:

      VAR_22->type = VAR_0;
      VAR_22->keyword = FUNC_1 (VAR_22->value);
      break;
    case 132:
    case 131:
    case 133:
    case 128:


      FUNC_4 (0);
      break;
    case 129:

      VAR_22->pragma_kind = FUNC_6 (VAR_22->value);
      VAR_22->value = ((void*)0);
      break;
    default:
      break;
    }
  FUNC_13 (VAR_15);
}
