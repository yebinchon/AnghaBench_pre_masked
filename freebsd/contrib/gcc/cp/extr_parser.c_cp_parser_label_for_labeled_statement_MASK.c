
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tree ;
struct TYPE_9__ {scalar_t__ type; int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_10__ {int in_switch_statement_p; int lexer; } ;
typedef TYPE_2__ cp_parser ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,int *) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (cp_parser* VAR_5)
{
  cp_token *VAR_6;


  VAR_6 = FUNC_1 (VAR_5->lexer);
  if (VAR_6->type != VAR_3
      && VAR_6->type != VAR_2)
    {
      FUNC_3 (VAR_5, "expected labeled-statement");
      return;
    }

  switch (VAR_6->keyword)
    {
    case 129:
      {
 tree VAR_7, VAR_8;
 cp_token *VAR_9;


 FUNC_0 (VAR_5->lexer);

 VAR_7 = FUNC_2 (VAR_5,
                                    0,
           ((void*)0));

 VAR_9 = FUNC_1 (VAR_5->lexer);
 if (VAR_9->type == VAR_1)
   {

     FUNC_0 (VAR_5->lexer);
     VAR_8 =
       FUNC_2 (VAR_5,
                                   0,
          ((void*)0));


   }
 else
   VAR_8 = VAR_4;

 if (VAR_5->in_switch_statement_p)
   FUNC_7 (VAR_7, VAR_8);
 else
   FUNC_6 ("case label %qE not within a switch statement", VAR_7);
      }
      break;

    case 128:

      FUNC_0 (VAR_5->lexer);

      if (VAR_5->in_switch_statement_p)
 FUNC_7 (VAR_4, VAR_4);
      else
 FUNC_6 ("case label not within a switch statement");
      break;

    default:

      FUNC_8 (FUNC_4 (VAR_5));
      break;
    }


  FUNC_5 (VAR_5, VAR_0, "`:'");
}
