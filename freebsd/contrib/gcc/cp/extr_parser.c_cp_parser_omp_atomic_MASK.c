
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int cp_token ;
struct TYPE_10__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;
struct TYPE_11__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 TYPE_9__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int VAR_9 ;
 int FUNC_10 (int,int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_11 (cp_parser *VAR_11, cp_token *VAR_12)
{
  tree VAR_13, VAR_14;
  enum tree_code VAR_15;

  FUNC_7 (VAR_11, VAR_12);

  VAR_13 = FUNC_9 (VAR_11, 0,
                   0);
  switch (FUNC_0 (VAR_13))
    {
    case 132:
      goto saw_error;

    case 128:
    case 130:
      VAR_13 = FUNC_1 (VAR_13, 0);
      VAR_15 = VAR_6;
      VAR_14 = VAR_10;
      break;

    case 129:
    case 131:
      VAR_13 = FUNC_1 (VAR_13, 0);
      VAR_15 = VAR_4;
      VAR_14 = VAR_10;
      break;

    default:
      switch (FUNC_3 (VAR_11->lexer)->type)
 {
 case 137:
   VAR_15 = VAR_5;
   break;
 case 140:
   VAR_15 = VAR_8;
   break;
 case 135:
   VAR_15 = VAR_6;
   break;
 case 138:
   VAR_15 = VAR_4;
   break;
 case 139:
   VAR_15 = VAR_3;
   break;
 case 134:
   VAR_15 = VAR_7;
   break;
 case 141:
   VAR_15 = VAR_0;
   break;
 case 136:
   VAR_15 = VAR_1;
   break;
 case 133:
   VAR_15 = VAR_2;
   break;
 default:
   FUNC_5 (VAR_11,
      "invalid operator for %<#pragma omp atomic%>");
   goto saw_error;
 }
      FUNC_2 (VAR_11->lexer);

      VAR_14 = FUNC_6 (VAR_11, 0);
      if (VAR_14 == VAR_9)
 goto saw_error;
      break;
    }
  FUNC_10 (VAR_15, VAR_13, VAR_14);
  FUNC_4 (VAR_11);
  return;

 saw_error:
  FUNC_8 (VAR_11);
}
