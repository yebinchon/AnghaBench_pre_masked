
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_20__ {int enclosing_scope; } ;
typedef TYPE_1__ cxx_pretty_printer ;


 int VAR_0 ;

 int FUNC_0 (int ) ;





 int FUNC_1 (int ) ;




 int VAR_1 ;


 int VAR_2 ;





 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

 int FUNC_7 (int ) ;

 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int FUNC_18 (TYPE_1__*,char*) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (TYPE_1__*,char) ;
 int FUNC_22 (TYPE_1__*,int ) ;
 int FUNC_23 (TYPE_1__*,int ) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static void
FUNC_27 (cxx_pretty_printer *VAR_3, tree VAR_4)
{
  enum tree_code VAR_5 = FUNC_3 (VAR_4);

  switch (VAR_5)
    {
    case 146:
    case 143:
      {
 tree VAR_6 = FUNC_4 (VAR_4, 0);
 tree VAR_7 = FUNC_4 (VAR_4, 1);
 tree VAR_8 = VAR_3->enclosing_scope;

 if (FUNC_3 (VAR_6) == VAR_0)
   VAR_6 = FUNC_4 (VAR_6, 0);





 if (FUNC_3 (VAR_6) != 137)
   ;
 else if (FUNC_1 (VAR_6))
   {
     tree VAR_9 = VAR_5 == 146 && FUNC_0 (VAR_4)
       ? FUNC_4 (VAR_4, 2)
       : FUNC_6 (VAR_7);

     while (FUNC_3 (VAR_9) == VAR_1)
       VAR_9 = FUNC_4 (VAR_9, 0);

     if (FUNC_3 (VAR_9) == VAR_0)
       VAR_9 = FUNC_4 (VAR_9, 0);

     if (FUNC_3 (FUNC_5 (VAR_9)) != VAR_2)
       {
  FUNC_27 (VAR_3, VAR_9);
  FUNC_15 (VAR_3);
       }
     else
       {
  FUNC_27 (VAR_3, VAR_9);
  FUNC_11 (VAR_3);
       }
     VAR_7 = FUNC_2 (VAR_7);
     VAR_3->enclosing_scope = FUNC_26 (FUNC_5 (VAR_9));
   }

 FUNC_27 (VAR_3, VAR_6);
 VAR_3->enclosing_scope = VAR_8;
 FUNC_13 (VAR_3, VAR_7);
      }
      if (VAR_5 == 146 && FUNC_0 (VAR_4))
 {
   FUNC_21 (VAR_3, ',');
   FUNC_27 (VAR_3, FUNC_4 (VAR_4, 2));
 }
      break;

    case 144:
    case 128:
    case 135:
    case 138:
    case 137:
    case 136:
    case 141:
    case 130:
    case 132:
      FUNC_19 (VAR_3, VAR_4);
      break;

    case 140:
    case 131:
    case 133:
    case 142:
      if (VAR_5 == 140)
 FUNC_18 (VAR_3, "dynamic_cast");
      else if (VAR_5 == 131)
 FUNC_18 (VAR_3, "static_cast");
      else if (VAR_5 == 133)
 FUNC_18 (VAR_3, "reinterpret_cast");
      else
 FUNC_18 (VAR_3, "const_cast");
      FUNC_12 (VAR_3);
      FUNC_22 (VAR_3, FUNC_5 (VAR_4));
      FUNC_16 (VAR_3);
      FUNC_24 (VAR_3);
      FUNC_17 (VAR_3, FUNC_4 (VAR_4, 0));
      FUNC_25 (VAR_3);
      break;

    case 139:
      FUNC_22 (VAR_3, FUNC_5 (VAR_4));
      FUNC_24 (VAR_3);
      FUNC_25 (VAR_3);
      break;

    case 129:
      VAR_4 = FUNC_4 (VAR_4, 0);
      FUNC_18 (VAR_3, "typeid");
      FUNC_24 (VAR_3);
      if (FUNC_7 (VAR_4))
 FUNC_22 (VAR_3, VAR_4);
      else
 FUNC_17 (VAR_3, VAR_4);
      FUNC_25 (VAR_3);
      break;

    case 134:
      FUNC_27 (VAR_3, FUNC_4 (VAR_4, 0));
      FUNC_15 (VAR_3);
      FUNC_20 (VAR_3, FUNC_4 (VAR_4, 1));
      FUNC_14 (VAR_3);
      FUNC_10 (VAR_3);
      FUNC_23 (VAR_3, FUNC_4 (VAR_4, 2));
      break;

    case 145:
      FUNC_27 (VAR_3, FUNC_4 (VAR_4, 0));
      FUNC_11 (VAR_3);
      break;

    default:
      FUNC_9 (FUNC_8 (VAR_3), VAR_4);
      break;
    }
}
