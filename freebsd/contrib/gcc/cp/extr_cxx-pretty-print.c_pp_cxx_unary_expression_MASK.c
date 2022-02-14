
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int cxx_pretty_printer ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;



 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static void
FUNC_15 (cxx_pretty_printer *VAR_0, tree VAR_1)
{
  enum tree_code VAR_2 = FUNC_0 (VAR_1);
  switch (VAR_2)
    {
    case 132:
    case 128:
      FUNC_9 (VAR_0, VAR_1);
      break;

    case 133:
    case 129:
      FUNC_6 (VAR_0, VAR_1);
      break;

    case 131:
    case 134:
      FUNC_7 (VAR_0, VAR_2 == 131 ? "sizeof" : "__alignof__");
      FUNC_12 (VAR_0);
      if (FUNC_2 (FUNC_1 (VAR_1, 0)))
 {
   FUNC_8 (VAR_0);
   FUNC_11 (VAR_0, FUNC_1 (VAR_1, 0));
   FUNC_10 (VAR_0);
 }
      else
 FUNC_14 (VAR_0, FUNC_1 (VAR_1, 0));
      break;

    case 130:
      FUNC_13 (VAR_0);
      FUNC_5 (VAR_0, FUNC_1 (VAR_1, 0));
      break;

    default:
      FUNC_4 (FUNC_3 (VAR_0), VAR_1);
      break;
    }
}
