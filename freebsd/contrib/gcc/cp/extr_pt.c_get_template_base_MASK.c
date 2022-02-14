
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_1, tree VAR_2, tree VAR_3, tree VAR_4)
{
  tree VAR_5 = VAR_0;
  tree VAR_6;

  FUNC_6 (FUNC_1 (FUNC_3 (VAR_4)));

  VAR_6 = FUNC_4 (FUNC_5 (VAR_4));
  if (!VAR_6)

    return VAR_0;



  for (VAR_6 = FUNC_2 (VAR_6); VAR_6; VAR_6 = FUNC_2 (VAR_6))
    {
      tree VAR_7 = FUNC_8 (VAR_1, VAR_2, VAR_3, FUNC_0 (VAR_6));

      if (VAR_7)
 {
   if (VAR_5 && !FUNC_7 (VAR_7, VAR_5))
     return VAR_0;

   VAR_5 = VAR_7;
 }
    }

  return VAR_5;
}
