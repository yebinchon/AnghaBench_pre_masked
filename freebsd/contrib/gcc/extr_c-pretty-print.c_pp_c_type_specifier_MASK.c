
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_pretty_printer ;



 int FUNC_0 (int ) ;






 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;


 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int ) ;

void
FUNC_14 (c_pretty_printer *VAR_0, tree VAR_1)
{
  const enum tree_code VAR_2 = FUNC_1 (VAR_1);
  switch (VAR_2)
    {
    case 135:
      FUNC_8 (VAR_0, "<type-error>");
      break;

    case 134:
      FUNC_9 (VAR_0, VAR_1);
      break;

    case 128:
    case 137:
    case 133:
    case 132:
      if (FUNC_3 (VAR_1))
 {
   VAR_1 = FUNC_3 (VAR_1);
   FUNC_14 (VAR_0, VAR_1);
 }
      else
 {
   int VAR_3 = FUNC_4 (VAR_1);
   VAR_1 = FUNC_6 (FUNC_2 (VAR_1), FUNC_5 (VAR_1));
   if (FUNC_3 (VAR_1))
     {
       FUNC_14 (VAR_0, VAR_1);
       if (FUNC_4 (VAR_1) != VAR_3)
  {
    FUNC_12 (VAR_0, ":");
    FUNC_10 (VAR_0, VAR_3);
  }
     }
   else
     {
       switch (VAR_2)
  {
  case 133:
    FUNC_12 (VAR_0, (FUNC_5 (VAR_1)
      ? "<unnamed-unsigned:"
      : "<unnamed-signed:"));
    break;
  case 132:
    FUNC_12 (VAR_0, "<unnamed-float:");
    break;
  default:
    FUNC_7 ();
  }
       FUNC_10 (VAR_0, VAR_3);
       FUNC_12 (VAR_0, ">");
     }
 }
      break;

    case 130:
      if (FUNC_0 (VAR_1))
 FUNC_11 (VAR_0, VAR_1);
      else
 FUNC_8 (VAR_0, "<typedef-error>");
      break;

    case 129:
    case 131:
    case 136:
      if (VAR_2 == 129)
 FUNC_8 (VAR_0, "union");
      else if (VAR_2 == 131)
 FUNC_8 (VAR_0, "struct");
      else if (VAR_2 == 136)
 FUNC_8 (VAR_0, "enum");
      else
 FUNC_8 (VAR_0, "<tag-error>");

      if (FUNC_3 (VAR_1))
 FUNC_11 (VAR_0, FUNC_3 (VAR_1));
      else
 FUNC_8 (VAR_0, "<anonymous>");
      break;

    default:
      FUNC_13 (VAR_0, VAR_1);
      break;
    }
}
