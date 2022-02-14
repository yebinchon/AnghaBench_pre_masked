
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_6__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static enum tree_code
FUNC_2 (cp_parser* VAR_12)
{
  enum tree_code VAR_13;
  cp_token *VAR_14;


  VAR_14 = FUNC_1 (VAR_12->lexer);

  switch (VAR_14->type)
    {
    case 136:
      VAR_13 = VAR_7;
      break;

    case 132:
      VAR_13 = VAR_6;
      break;

    case 137:
      VAR_13 = VAR_10;
      break;

    case 133:
      VAR_13 = VAR_11;
      break;

    case 130:
      VAR_13 = VAR_8;
      break;

    case 134:
      VAR_13 = VAR_5;
      break;

    case 129:
      VAR_13 = VAR_9;
      break;

    case 135:
      VAR_13 = VAR_4;
      break;

    case 138:
      VAR_13 = VAR_0;
      break;

    case 128:
      VAR_13 = VAR_2;
      break;

    case 131:
      VAR_13 = VAR_1;
      break;

    default:

      VAR_13 = VAR_3;
    }


  if (VAR_13 != VAR_3)
    FUNC_0 (VAR_12->lexer);

  return VAR_13;
}
