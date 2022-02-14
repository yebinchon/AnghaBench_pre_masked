
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int cxx_pretty_printer ;



 int * FUNC_0 (int *) ;

 int * FUNC_1 (int *) ;




 int FUNC_2 (int *) ;



 int * FUNC_3 (int *) ;





 int * FUNC_4 (int *) ;



 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;




 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;

__attribute__((used)) static void
FUNC_18 (cxx_pretty_printer *VAR_0, tree VAR_1)
{
  enum tree_code VAR_2 = FUNC_5 (VAR_1);
  switch (VAR_2)
    {
    case 138:
      FUNC_14 (VAR_0, "<return-value>");
      break;

    case 141:
      VAR_1 = FUNC_3 (VAR_1);
    case 128:
    case 140:
    case 148:
    case 132:
    case 145:
    case 142:
    case 146:
    case 143:
    case 129:
    case 137:
      VAR_1 = FUNC_1 (VAR_1);

    case 144:
      if (VAR_1 == ((void*)0))
 FUNC_14 (VAR_0, "<unnamed>");
      else if (FUNC_2 (VAR_1))
 FUNC_13 (VAR_0, VAR_1);
      else
 {
   if (FUNC_10 (VAR_1))
     {
       FUNC_11 (VAR_0);

       if (FUNC_6 (VAR_1))
  VAR_1 = FUNC_9 (FUNC_6 (VAR_1));
     }
   FUNC_16 (VAR_0, VAR_1);
 }
      break;

    case 136:
      FUNC_15 (VAR_0, VAR_1);
      break;

    case 149:
      FUNC_18 (VAR_0, FUNC_0 (VAR_1));
      break;

    case 139:
    case 130:
    case 147:
      FUNC_18 (VAR_0, FUNC_8 (VAR_1));
      break;

    case 133:
    case 134:
      if (FUNC_7 (VAR_1))
 FUNC_18 (VAR_0, FUNC_7 (VAR_1));
      else
 FUNC_12 (VAR_0, VAR_1);
      break;

    case 135:
      FUNC_18 (VAR_0, FUNC_4 (VAR_1));
      break;

    case 131:
      FUNC_18 (VAR_0, FUNC_8 (VAR_1));
      break;

    default:
      FUNC_17 (VAR_0, VAR_1);
      break;
    }
}
