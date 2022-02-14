
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_pretty_printer ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;

void
FUNC_10 (c_pretty_printer *VAR_1, tree VAR_2)
{
  const enum tree_code VAR_3 = FUNC_0 (VAR_2);

  if (FUNC_0 (VAR_2) != 130)
    FUNC_5 (VAR_1, VAR_2);
  switch (VAR_3)
    {
    case 129:
    case 130:

    case 133:
      {

 tree VAR_4 = FUNC_9 (FUNC_1 (VAR_2));
 FUNC_10 (VAR_1, VAR_4);
 if (FUNC_0 (VAR_4) == 134
     || FUNC_0 (VAR_4) == 131)
   {
     FUNC_6 (VAR_1);
     FUNC_4 (VAR_1);
   }
 else if (!FUNC_2 ())
   FUNC_6 (VAR_1);
 FUNC_7 (VAR_1, VAR_2);
      }
      break;

    case 131:
    case 134:
      FUNC_10 (VAR_1, FUNC_1 (VAR_2));
      break;

    case 128:
    case 132:
      FUNC_10 (VAR_1, FUNC_1 (VAR_2));
      if (VAR_3 == 132)
 FUNC_3 (VAR_1, VAR_0 ? "_Complex" : "__complex__");
      else if (VAR_3 == 128)
 FUNC_3 (VAR_1, "__vector__");
      break;

    default:
      FUNC_8 (VAR_1, VAR_2);
      break;
    }
}
