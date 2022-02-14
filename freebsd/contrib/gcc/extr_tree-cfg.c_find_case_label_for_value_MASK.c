
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static tree
FUNC_6 (tree VAR_0, tree VAR_1)
{
  tree VAR_2 = FUNC_2 (VAR_0);
  size_t VAR_3, VAR_4, VAR_5 = FUNC_4 (VAR_2);
  tree VAR_6 = FUNC_3 (VAR_2, VAR_5 - 1);

  for (VAR_3 = -1, VAR_4 = VAR_5 - 1; VAR_4 - VAR_3 > 1; )
    {
      size_t VAR_7 = (VAR_4 + VAR_3) / 2;
      tree VAR_8 = FUNC_3 (VAR_2, VAR_7);
      int VAR_9;


      VAR_9 = FUNC_5 (FUNC_1 (VAR_8), VAR_1);

      if (VAR_9 > 0)
 VAR_4 = VAR_7;
      else
 VAR_3 = VAR_7;

      if (FUNC_0 (VAR_8) == ((void*)0))
 {

   if (VAR_9 == 0)
     return VAR_8;
 }
      else
 {

   if (VAR_9 <= 0 && FUNC_5 (FUNC_0 (VAR_8), VAR_1) >= 0)
     return VAR_8;
 }
    }

  return VAR_6;
}
