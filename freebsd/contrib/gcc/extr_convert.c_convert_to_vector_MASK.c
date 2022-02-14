
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

tree
FUNC_6 (tree VAR_2, tree VAR_3)
{
  switch (FUNC_0 (FUNC_1 (VAR_3)))
    {
    case 129:
    case 128:
      if (!FUNC_5 (FUNC_2 (VAR_2), FUNC_2 (FUNC_1 (VAR_3))))
 {
   FUNC_4 ("can't convert between vector values of different size");
   return VAR_1;
 }
      return FUNC_3 (VAR_0, VAR_2, VAR_3);

    default:
      FUNC_4 ("can't convert value to a vector");
      return VAR_1;
    }
}
