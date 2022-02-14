
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int tree ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_14__ {int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_15__ {unsigned char in_statement; int lexer; } ;
typedef TYPE_2__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_11 (TYPE_2__*,int ,char*) ;
 int FUNC_12 (TYPE_2__*,int const,char*) ;
 int VAR_6 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static tree
FUNC_21 (cp_parser* VAR_7)
{
  cp_token *VAR_8;
  enum rid VAR_9;

  tree VAR_10, VAR_11;

  unsigned char VAR_12;




  VAR_8 = FUNC_11 (VAR_7, VAR_1, "iteration-statement");
  if (!VAR_8)
    return VAR_6;



  VAR_12 = VAR_7->in_statement;



  VAR_11 = FUNC_5 (VAR_7);



  VAR_9 = VAR_8->keyword;
  switch (VAR_9)
    {
    case 128:
      {
 tree VAR_13;



 VAR_10 = FUNC_2 (VAR_11);


 FUNC_11 (VAR_7, VAR_2, "`('");

 VAR_13 = FUNC_6 (VAR_7);
 FUNC_20 (VAR_13, VAR_10);

 FUNC_11 (VAR_7, VAR_0, "`)'");

 VAR_7->in_statement = VAR_4;
 FUNC_4 (VAR_7);
 VAR_7->in_statement = VAR_12;

 FUNC_19 (VAR_10);
      }
      break;

    case 130:
      {
 tree VAR_14;



 VAR_10 = FUNC_0 (VAR_11);


 VAR_7->in_statement = VAR_4;
 FUNC_10 (VAR_7, ((void*)0));
 VAR_7->in_statement = VAR_12;
 FUNC_13 (VAR_10);

 FUNC_12 (VAR_7, 128, "`while'");

 FUNC_11 (VAR_7, VAR_2, "`('");

 VAR_14 = FUNC_8 (VAR_7, 0);

 FUNC_14 (VAR_14, VAR_10);

 FUNC_11 (VAR_7, VAR_0, "`)'");

 FUNC_11 (VAR_7, VAR_3, "`;'");
      }
      break;

    case 129:
      {
 tree VAR_15 = VAR_5;
 tree VAR_16 = VAR_5;



 VAR_10 = FUNC_1 (VAR_11);


 FUNC_11 (VAR_7, VAR_2, "`('");

 FUNC_9 (VAR_7);
 FUNC_17 (VAR_10);


 if (FUNC_3 (VAR_7->lexer, VAR_3))
   VAR_15 = FUNC_6 (VAR_7);
 FUNC_15 (VAR_15, VAR_10);

 FUNC_11 (VAR_7, VAR_3, "`;'");


 if (FUNC_3 (VAR_7->lexer, VAR_0))
   VAR_16 = FUNC_8 (VAR_7, 0);
 FUNC_16 (VAR_16, VAR_10);

 FUNC_11 (VAR_7, VAR_0, "`)'");


 VAR_7->in_statement = VAR_4;
 FUNC_4 (VAR_7);
 VAR_7->in_statement = VAR_12;


 FUNC_18 (VAR_10);
      }
      break;

    default:
      FUNC_7 (VAR_7, "expected iteration-statement");
      VAR_10 = VAR_6;
      break;
    }

  return VAR_10;
}
