
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_0 ;

 int const FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int ,int ) ;

__attribute__((used)) static tree
FUNC_6 (tree VAR_1,
        unsigned VAR_2,
        bool VAR_3)
{
  tree VAR_4;

  if (FUNC_4 (VAR_1))
    return VAR_1;

  switch (FUNC_3 (VAR_1))
    {
    case 128:
      if (FUNC_2 (VAR_1) == VAR_2)
 {
   if (VAR_3)
     VAR_4 = FUNC_1 (VAR_1);
   else
     VAR_4 = FUNC_0 (VAR_1);

   if (FUNC_3 (FUNC_0 (VAR_1)) != 128
       || FUNC_2 (FUNC_0 (VAR_1)) != FUNC_2 (VAR_1))
     return VAR_4;

   else
     return FUNC_5
       (VAR_2,
        FUNC_6 (FUNC_0 (VAR_1),
         VAR_2,
         VAR_3),
        VAR_4);
 }

      else if (FUNC_2 (VAR_1) < VAR_2)

 return VAR_0;

      else
 return FUNC_6 (FUNC_0 (VAR_1),
         VAR_2,
         VAR_3);

     default:
      if (VAR_3)
 return VAR_0;
      else
 return VAR_1;
    }
}
