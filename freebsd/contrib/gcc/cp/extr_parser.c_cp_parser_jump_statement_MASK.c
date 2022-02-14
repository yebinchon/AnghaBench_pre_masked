
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tree ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_9__ {int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_10__ {int in_statement; int lexer; } ;
typedef TYPE_2__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int ,char*) ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 int VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int VAR_7 ;
 int FUNC_14 (char*) ;

__attribute__((used)) static tree
FUNC_15 (cp_parser* VAR_8)
{
  tree VAR_9 = VAR_6;
  cp_token *VAR_10;
  enum rid VAR_11;


  VAR_10 = FUNC_6 (VAR_8, VAR_0, "jump-statement");
  if (!VAR_10)
    return VAR_6;


  VAR_11 = VAR_10->keyword;
  switch (VAR_11)
    {
    case 131:
      switch (VAR_8->in_statement)
 {
 case 0:
   FUNC_7 ("break statement not within loop or switch");
   break;
 default:
   FUNC_12 ((VAR_8->in_statement & VAR_3)
        || VAR_8->in_statement == 134);
   VAR_9 = FUNC_8 ();
   break;
 case 133:
   FUNC_7 ("invalid exit from OpenMP structured block");
   break;
 case 132:
   FUNC_7 ("break statement used with OpenMP for loop");
   break;
 }
      FUNC_6 (VAR_8, VAR_2, "%<;%>");
      break;

    case 130:
      switch (VAR_8->in_statement & ~VAR_3)
 {
 case 0:
   FUNC_7 ("continue statement not within a loop");
   break;
 case 134:
 case 132:
   VAR_9 = FUNC_9 ();
   break;
 case 133:
   FUNC_7 ("invalid exit from OpenMP structured block");
   break;
 default:
   FUNC_13 ();
 }
      FUNC_6 (VAR_8, VAR_2, "%<;%>");
      break;

    case 128:
      {
 tree VAR_12;



 if (FUNC_2 (VAR_8->lexer, VAR_2))
   VAR_12 = FUNC_4 (VAR_8, 0);
 else
   VAR_12 = VAR_4;

 VAR_9 = FUNC_11 (VAR_12);

 FUNC_6 (VAR_8, VAR_2, "%<;%>");
      }
      break;

    case 129:

      if (VAR_5)
 FUNC_7 ("goto not allowed in block literal");


      if (FUNC_1 (VAR_8->lexer, VAR_1))
 {

   if (VAR_7)
     FUNC_14 ("ISO C++ forbids computed gotos");

   FUNC_0 (VAR_8->lexer);

   FUNC_10 (FUNC_4 (VAR_8, 0));
 }
      else
 FUNC_10 (FUNC_5 (VAR_8));

      FUNC_6 (VAR_8, VAR_2, "%<;%>");
      break;

    default:
      FUNC_3 (VAR_8, "expected jump-statement");
      break;
    }

  return VAR_9;
}
