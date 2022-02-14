
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tree ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_11__ {int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_12__ {int in_switch_statement_p; unsigned char in_statement; int lexer; } ;
typedef TYPE_2__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,int*) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,int ,char*) ;
 int FUNC_10 (TYPE_2__*,int,int,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,int ) ;

__attribute__((used)) static tree
FUNC_19 (cp_parser* VAR_7, bool *VAR_8)
{
  cp_token *VAR_9;
  enum rid VAR_10;

  if (VAR_8 != ((void*)0))
    *VAR_8 = 0;


  VAR_9 = FUNC_9 (VAR_7, VAR_1, "selection-statement");


  VAR_10 = VAR_9->keyword;
  switch (VAR_10)
    {
    case 129:
    case 128:
      {
 tree VAR_11;
 tree VAR_12;


 if (!FUNC_9 (VAR_7, VAR_2, "`('"))
   {
     FUNC_11 (VAR_7);
     return VAR_6;
   }


 if (VAR_10 == 129)
   VAR_11 = FUNC_2 ();
 else
   VAR_11 = FUNC_3 ();


 VAR_12 = FUNC_6 (VAR_7);

 if (!FUNC_9 (VAR_7, VAR_0, "`)'"))
   FUNC_10 (VAR_7, 1, 0,
                         1);

 if (VAR_10 == 129)
   {
     bool VAR_13;


     FUNC_14 (VAR_12, VAR_11);


     FUNC_8 (VAR_7, &VAR_13);
     FUNC_17 (VAR_11);


     if (FUNC_5 (VAR_7->lexer,
      VAR_5))
       {

  FUNC_4 (VAR_7->lexer);
  FUNC_1 (VAR_11);

  FUNC_8 (VAR_7, ((void*)0));
  FUNC_12 (VAR_11);






  if (VAR_8 != ((void*)0))
    *VAR_8 = 1;
       }
     else
       {




  if (VAR_13)
    FUNC_18 (VAR_4,
      ("%Hsuggest explicit braces "
       "to avoid ambiguous %<else%>"),
      FUNC_0 (VAR_11));
       }


     FUNC_13 (VAR_11);
   }
 else
   {
     bool VAR_14;
     unsigned char VAR_15;


     FUNC_15 (VAR_12, VAR_11);


     VAR_14 = VAR_7->in_switch_statement_p;
     VAR_15 = VAR_7->in_statement;
     VAR_7->in_switch_statement_p = 1;
     VAR_7->in_statement |= VAR_3;
     FUNC_8 (VAR_7, ((void*)0));
     VAR_7->in_switch_statement_p = VAR_14;
     VAR_7->in_statement = VAR_15;


     FUNC_16 (VAR_11);
   }

 return VAR_11;
      }
      break;

    default:
      FUNC_7 (VAR_7, "expected selection-statement");
      return VAR_6;
    }
}
