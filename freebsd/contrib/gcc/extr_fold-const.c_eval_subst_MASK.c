
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
typedef enum tree_code_class { ____Placeholder_tree_code_class } tree_code_class ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;





 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*,int) ;
 void* FUNC_3 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_4 (int,void*,void*) ;
 void* FUNC_5 (int,void*,void*,void*) ;
 void* FUNC_6 (int,void*,void*,void*,void*) ;
 int FUNC_7 (void*,void*,int ) ;





__attribute__((used)) static tree
FUNC_8 (tree VAR_3, tree VAR_4, tree VAR_5, tree VAR_6, tree VAR_7)
{
  tree VAR_8 = FUNC_3 (VAR_3);
  enum tree_code VAR_9 = FUNC_0 (VAR_3);
  enum tree_code_class VAR_10 = FUNC_1 (VAR_9);


  if (VAR_10 == 129 && VAR_9 == VAR_1)
    VAR_10 = 128;
  else if (VAR_10 == 129
    && (VAR_9 == VAR_0 || VAR_9 == VAR_2))
    VAR_10 = 131;

  switch (VAR_10)
    {
    case 128:
      return FUNC_4 (VAR_9, VAR_8,
     FUNC_8 (FUNC_2 (VAR_3, 0),
          VAR_4, VAR_5, VAR_6, VAR_7));

    case 131:
      return FUNC_5 (VAR_9, VAR_8,
     FUNC_8 (FUNC_2 (VAR_3, 0),
          VAR_4, VAR_5, VAR_6, VAR_7),
     FUNC_8 (FUNC_2 (VAR_3, 1),
          VAR_4, VAR_5, VAR_6, VAR_7));

    case 129:
      switch (VAR_9)
 {
 case 132:
   return FUNC_8 (FUNC_2 (VAR_3, 0), VAR_4, VAR_5, VAR_6, VAR_7);

 case 134:
   return FUNC_8 (FUNC_2 (VAR_3, 1), VAR_4, VAR_5, VAR_6, VAR_7);

 case 133:
   return FUNC_6 (VAR_9, VAR_8,
         FUNC_8 (FUNC_2 (VAR_3, 0),
       VAR_4, VAR_5, VAR_6, VAR_7),
         FUNC_8 (FUNC_2 (VAR_3, 1),
       VAR_4, VAR_5, VAR_6, VAR_7),
         FUNC_8 (FUNC_2 (VAR_3, 2),
       VAR_4, VAR_5, VAR_6, VAR_7));
 default:
   break;
 }


    case 130:
      {
 tree VAR_11 = FUNC_2 (VAR_3, 0);
 tree VAR_12 = FUNC_2 (VAR_3, 1);





 if (VAR_11 == VAR_4 || FUNC_7 (VAR_11, VAR_4, 0))
   VAR_11 = VAR_5;
 else if (VAR_11 == VAR_6 || FUNC_7 (VAR_11, VAR_6, 0))
   VAR_11 = VAR_7;

 if (VAR_12 == VAR_4 || FUNC_7 (VAR_12, VAR_4, 0))
   VAR_12 = VAR_5;
 else if (VAR_12 == VAR_6 || FUNC_7 (VAR_12, VAR_6, 0))
   VAR_12 = VAR_7;

 return FUNC_5 (VAR_9, VAR_8, VAR_11, VAR_12);
      }

    default:
      return VAR_3;
    }
}
