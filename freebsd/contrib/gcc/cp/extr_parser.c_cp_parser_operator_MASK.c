
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_7__ {int type; int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_8__ {int lexer; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 scalar_t__ VAR_37 ;

__attribute__((used)) static tree
FUNC_6 (cp_parser* VAR_38)
{
  tree VAR_39 = VAR_23;
  cp_token *VAR_40;


  VAR_40 = FUNC_3 (VAR_38->lexer);

  switch (VAR_40->type)
    {
    case 153:
      {
 enum tree_code VAR_41;


 if (VAR_40->keyword == VAR_28)
   VAR_41 = VAR_20;
 else if (VAR_40->keyword == VAR_27)
   VAR_41 = VAR_10;
 else
   break;


 FUNC_2 (VAR_38->lexer);


 VAR_40 = FUNC_3 (VAR_38->lexer);


 if (VAR_40->type == 138)
   {

     FUNC_2 (VAR_38->lexer);

     FUNC_5 (VAR_38, VAR_9, "`]'");
     VAR_39 = FUNC_1 (VAR_41 == VAR_20
         ? VAR_36 : VAR_35);
   }

 else
   VAR_39 = FUNC_1 (VAR_41);

 return VAR_39;
      }

    case 134:
      VAR_39 = FUNC_1 (VAR_24);
      break;

    case 148:
      VAR_39 = FUNC_1 (VAR_18);
      break;

    case 143:
      VAR_39 = FUNC_1 (VAR_19);
      break;

    case 159:
      VAR_39 = FUNC_1 (VAR_30);
      break;

    case 145:
      VAR_39 = FUNC_1 (VAR_31);
      break;

    case 129:
      VAR_39 = FUNC_1 (VAR_4);
      break;

    case 166:
      VAR_39 = FUNC_1 (VAR_1);
      break;

    case 137:
      VAR_39 = FUNC_1 (VAR_2);
      break;

    case 162:
      VAR_39 = FUNC_1 (VAR_3);
      break;

    case 141:
      VAR_39 = FUNC_1 (VAR_33);
      break;

    case 157:
      VAR_39 = FUNC_0 (VAR_22);
      break;

    case 152:
      VAR_39 = FUNC_1 (VAR_16);
      break;

    case 155:
      VAR_39 = FUNC_1 (VAR_13);
      break;

    case 133:
      VAR_39 = FUNC_0 (VAR_24);
      break;

    case 147:
      VAR_39 = FUNC_0 (VAR_18);
      break;

    case 142:
      VAR_39 = FUNC_0 (VAR_19);
      break;

    case 158:
      VAR_39 = FUNC_0 (VAR_30);
      break;

    case 144:
      VAR_39 = FUNC_0 (VAR_31);
      break;

    case 128:
      VAR_39 = FUNC_0 (VAR_4);
      break;

    case 164:
      VAR_39 = FUNC_0 (VAR_1);
      break;

    case 136:
      VAR_39 = FUNC_0 (VAR_2);
      break;

    case 150:
      VAR_39 = FUNC_1 (VAR_15);
      break;

    case 131:
      VAR_39 = FUNC_1 (VAR_29);
      break;

    case 149:
      VAR_39 = FUNC_0 (VAR_15);
      break;

    case 130:
      VAR_39 = FUNC_0 (VAR_29);
      break;

    case 156:
      VAR_39 = FUNC_1 (VAR_11);
      break;

    case 140:
      VAR_39 = FUNC_1 (VAR_21);
      break;

    case 151:
      VAR_39 = FUNC_1 (VAR_14);
      break;

    case 154:
      VAR_39 = FUNC_1 (VAR_12);
      break;

    case 165:
      VAR_39 = FUNC_1 (VAR_32);
      break;

    case 135:
      VAR_39 = FUNC_1 (VAR_34);
      break;

    case 132:
      VAR_39 = FUNC_1 (VAR_25);
      break;

    case 146:
      VAR_39 = FUNC_1 (VAR_26);
      break;

    case 163:
      VAR_39 = FUNC_1 (VAR_7);
      break;

    case 160:
      VAR_39 = FUNC_1 (VAR_17);
      break;

    case 161:
      VAR_39 = FUNC_1 (VAR_6);
      break;

    case 139:

      FUNC_2 (VAR_38->lexer);

      FUNC_5 (VAR_38, VAR_8, "`)'");
      return FUNC_1 (VAR_5);

    case 138:

      FUNC_2 (VAR_38->lexer);

      FUNC_5 (VAR_38, VAR_9, "`]'");
      return FUNC_1 (VAR_0);

    default:

      break;
    }



  if (VAR_39)
    FUNC_2 (VAR_38->lexer);

  else
    {
      FUNC_4 (VAR_38, "expected operator");
      VAR_39 = VAR_37;
    }

  return VAR_39;
}
