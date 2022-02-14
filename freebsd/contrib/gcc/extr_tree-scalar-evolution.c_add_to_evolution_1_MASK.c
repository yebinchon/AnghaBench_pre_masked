
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (unsigned int,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_1 ;

__attribute__((used)) static tree
FUNC_11 (unsigned VAR_2, tree VAR_3, tree VAR_4,
      tree VAR_5)
{
  tree VAR_6, VAR_7, VAR_8;

  switch (FUNC_4 (VAR_3))
    {
    case 128:
      if (FUNC_2 (VAR_3) <= VAR_2)
 {
   unsigned VAR_9;

   VAR_6 = FUNC_10 (VAR_3);


   if (FUNC_2 (VAR_3) < VAR_2)
     {
       VAR_9 = VAR_2;
       VAR_7 = VAR_3;
       VAR_8 = FUNC_3 (VAR_6)
  ? FUNC_7 (VAR_6, VAR_1)
  : FUNC_5 (VAR_6, 0);
     }
   else
     {
       VAR_9 = FUNC_2 (VAR_3);
       VAR_7 = FUNC_0 (VAR_3);
       VAR_8 = FUNC_1 (VAR_3);
     }

   VAR_4 = FUNC_8 (VAR_6, VAR_4, VAR_5);
   VAR_8 = FUNC_8 (VAR_6, VAR_8, VAR_5);
   VAR_8 = FUNC_9 (VAR_6, VAR_8, VAR_4);
   return FUNC_6 (VAR_9, VAR_7, VAR_8);
 }
      else
 {

   VAR_7 = FUNC_11 (VAR_2, FUNC_0 (VAR_3),
         VAR_4, VAR_5);
   VAR_8 = FUNC_1 (VAR_3);
   VAR_8 = FUNC_8 (FUNC_10 (VAR_7), VAR_8, VAR_5);
   return FUNC_6 (FUNC_2 (VAR_3),
      VAR_7, VAR_8);
 }

    default:

      if (VAR_3 == VAR_0)
 return VAR_0;

      VAR_7 = VAR_3;
      VAR_8 = FUNC_8 (FUNC_10 (VAR_7), VAR_4, VAR_5);
      return FUNC_6 (VAR_2, VAR_7, VAR_8);
    }
}
