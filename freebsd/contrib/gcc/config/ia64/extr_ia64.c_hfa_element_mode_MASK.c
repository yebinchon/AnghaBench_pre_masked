
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;






 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int) ;



 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;


 int VAR_5 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static enum machine_mode
FUNC_9 (tree VAR_6, bool VAR_7)
{
  enum machine_mode VAR_8 = VAR_5;
  enum machine_mode VAR_9;
  enum tree_code VAR_10 = FUNC_3 (VAR_6);
  int VAR_11 = 0;
  tree VAR_12;

  if (!VAR_7 && (!FUNC_7 (VAR_6) || FUNC_8 (FUNC_7 (VAR_6))))
    return VAR_5;

  switch (VAR_10)
    {
    case 128: case 138: case 140:
    case 142: case 134:
    case 135: case 130: case 136:
    case 137: case 139:
      return VAR_5;




    case 141:
      if (FUNC_0 (FUNC_6 (VAR_6)) == VAR_1
   && FUNC_6 (VAR_6) != VAR_3)
 return FUNC_1 (FUNC_6 (VAR_6));
      else
 return VAR_5;

    case 132:


      if (VAR_7 && FUNC_6 (VAR_6) != VAR_4)
 return FUNC_6 (VAR_6);
      else
 return VAR_5;

    case 143:
      return FUNC_9 (FUNC_4 (VAR_6), 1);

    case 131:
    case 129:
    case 133:
      for (VAR_12 = FUNC_5 (VAR_6); VAR_12; VAR_12 = FUNC_2 (VAR_12))
 {
   if (FUNC_3 (VAR_12) != VAR_0)
     continue;

   VAR_9 = FUNC_9 (FUNC_4 (VAR_12), 1);
   if (VAR_11)
     {
       if (VAR_9 != VAR_8)
  return VAR_5;
     }
   else if (FUNC_0 (VAR_9) != VAR_2)
     return VAR_5;
   else
     {
       VAR_11 = 1;
       VAR_8 = VAR_9;
     }
 }
      return VAR_8;

    default:




      return VAR_5;
    }

  return VAR_5;
}
