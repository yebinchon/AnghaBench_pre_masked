
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int cxx_pretty_printer ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_14 (cxx_pretty_printer *VAR_2, tree VAR_3)
{
  enum tree_code VAR_4 = FUNC_1 (VAR_3);
  switch (VAR_4)
    {
    case 129:
    case 128:
      if (FUNC_0 (VAR_3))
 FUNC_6 (VAR_2);
      FUNC_8 (VAR_2, "new");
      if (FUNC_2 (VAR_3, 0))
 {
   FUNC_5 (VAR_2, FUNC_2 (VAR_3, 0));
   FUNC_12 (VAR_2);
 }

      FUNC_9 (VAR_2, FUNC_2 (VAR_3, 1));
      if (FUNC_2 (VAR_3, 2))
 {
   FUNC_10 (VAR_2);
   VAR_3 = FUNC_2 (VAR_3, 2);
   if (FUNC_1 (VAR_3) == VAR_0)
     FUNC_4 (FUNC_3 (VAR_2), VAR_3);
   else if (VAR_3 == VAR_1)
     ;
   else
     FUNC_7 (VAR_2, VAR_3);
   FUNC_11 (VAR_2);
 }
      break;

    default:
      FUNC_13 (VAR_2, VAR_3);
    }
}
