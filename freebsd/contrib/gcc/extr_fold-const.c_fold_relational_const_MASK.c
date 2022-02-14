
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;




 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;






 int FUNC_8 (int,int ) ;
 int VAR_6 ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int const*,int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static tree
FUNC_16 (enum tree_code VAR_7, tree VAR_8, tree VAR_9, tree VAR_10)
{
  int VAR_11, VAR_12;




  if (FUNC_2 (VAR_9) == VAR_3 && FUNC_2 (VAR_10) == VAR_3)
    {
      const REAL_VALUE_TYPE *VAR_13 = FUNC_5 (VAR_9);
      const REAL_VALUE_TYPE *VAR_14 = FUNC_5 (VAR_10);


      if (FUNC_13 (VAR_13) || FUNC_13 (VAR_14))
 {
   switch (VAR_7)
     {
     case 141:
     case 134:
       VAR_11 = 0;
       break;

     case 135:
     case 128:
     case 129:
     case 130:
     case 131:
     case 132:
     case 133:
              VAR_11 = 1;
       break;

     case 136:
     case 138:
     case 139:
     case 140:
     case 137:
       if (VAR_6)
  return VAR_2;
       VAR_11 = 0;
       break;

     default:
       FUNC_10 ();
     }

   return FUNC_8 (VAR_11, VAR_8);
 }

      return FUNC_8 (FUNC_12 (VAR_7, VAR_13, VAR_14), VAR_8);
    }


  if (FUNC_2 (VAR_9) == VAR_0 && FUNC_2 (VAR_10) == VAR_0)
    {
      tree VAR_15 = FUNC_16 (VAR_7, VAR_8,
       FUNC_4 (VAR_9),
       FUNC_4 (VAR_10));
      tree VAR_16 = FUNC_16 (VAR_7, VAR_8,
       FUNC_3 (VAR_9),
       FUNC_3 (VAR_10));
      if (VAR_7 == 141)
 return FUNC_9 (VAR_4, VAR_8, VAR_15, VAR_16);
      else if (VAR_7 == 135)
 return FUNC_9 (VAR_5, VAR_8, VAR_15, VAR_16);
      else
 return VAR_2;
    }
  if (VAR_7 == 138 || VAR_7 == 139)
    {
      tree VAR_17 = VAR_9;
      VAR_9 = VAR_10;
      VAR_10 = VAR_17;
      VAR_7 = FUNC_14 (VAR_7);
    }




  VAR_12 = 0;
  if (VAR_7 == 135 || VAR_7 == 140)
    {
      VAR_12 = 1;
      VAR_7 = FUNC_11 (VAR_7, 0);
    }



  if (FUNC_2 (VAR_9) == VAR_1 && FUNC_2 (VAR_10) == VAR_1)
    {
      if (VAR_7 == 141)
 VAR_11 = FUNC_15 (VAR_9, VAR_10);
      else if (FUNC_7 (FUNC_6 (VAR_9)))
 VAR_11 = FUNC_1 (VAR_9, VAR_10);
      else
 VAR_11 = FUNC_0 (VAR_9, VAR_10);
    }
  else
    return VAR_2;

  if (VAR_12)
    VAR_11 ^= 1;
  return FUNC_8 (VAR_11, VAR_8);
}
