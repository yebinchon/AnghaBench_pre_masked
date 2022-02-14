
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_2 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_16 (int,int ,int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int*) ;

__attribute__((used)) static tree
FUNC_19 (enum tree_code VAR_4, tree VAR_5,
     tree VAR_6, tree VAR_7)
{
  if (FUNC_6 (VAR_6)
      || FUNC_6 (VAR_7))
    return FUNC_11 (VAR_6, VAR_7);

  switch (FUNC_5 (VAR_6))
    {
    case 128:
      switch (FUNC_5 (VAR_7))
 {
 case 128:
   return FUNC_15 (VAR_4, VAR_5, VAR_6, VAR_7);

 default:
   if (VAR_4 == VAR_1)
     return FUNC_9
       (FUNC_2 (VAR_6),
        FUNC_14 (VAR_5, FUNC_0 (VAR_6), VAR_7),
        FUNC_1 (VAR_6));
   else
     return FUNC_9
       (FUNC_2 (VAR_6),
        FUNC_12 (VAR_5, FUNC_0 (VAR_6), VAR_7),
        FUNC_1 (VAR_6));
 }

    default:
      switch (FUNC_5 (VAR_7))
 {
 case 128:
   if (VAR_4 == VAR_1)
     return FUNC_9
       (FUNC_2 (VAR_7),
        FUNC_14 (VAR_5, VAR_6, FUNC_0 (VAR_7)),
        FUNC_1 (VAR_7));
   else
     return FUNC_9
       (FUNC_2 (VAR_7),
        FUNC_12 (VAR_5, VAR_6, FUNC_0 (VAR_7)),
        FUNC_13 (VAR_5, FUNC_1 (VAR_7),
        FUNC_4 (VAR_5)
        ? FUNC_10 (VAR_5, VAR_3)
        : FUNC_8 (VAR_5, -1)));

 default:
   {
     int VAR_8 = 0;
     if ((FUNC_18 (VAR_6, &VAR_8)
   || FUNC_18 (VAR_7, &VAR_8))
  && VAR_8 < FUNC_3 (VAR_0))
       return FUNC_7 (VAR_4, VAR_5, VAR_6, VAR_7);
     else if (VAR_8 < FUNC_3 (VAR_0))
       return FUNC_16 (VAR_4, VAR_5,
      FUNC_17 (VAR_5, VAR_6),
      FUNC_17 (VAR_5, VAR_7));
     else
       return VAR_2;
   }
 }
    }
}
