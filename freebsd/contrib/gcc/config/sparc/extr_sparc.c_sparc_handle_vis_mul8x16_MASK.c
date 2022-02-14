
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_8 (int VAR_1, tree VAR_2, tree VAR_3, tree VAR_4)
{
  tree VAR_5 = VAR_0;
  int VAR_6;

  switch (VAR_1)
    {
    case 130:
      for (; VAR_3 && VAR_4;
    VAR_3 = FUNC_0 (VAR_3), VAR_4 = FUNC_0 (VAR_4))
 {
   int VAR_7
     = FUNC_6 (FUNC_1 (FUNC_2 (VAR_3)),
     FUNC_1 (FUNC_2 (VAR_4)));
   VAR_5 = FUNC_7 (VAR_0,
         FUNC_3 (VAR_2, VAR_7),
         VAR_5);
 }
      break;

    case 128:
      VAR_6 = FUNC_1 (FUNC_2 (VAR_4));

      for (; VAR_3; VAR_3 = FUNC_0 (VAR_3))
 {
   int VAR_8
     = FUNC_6 (FUNC_1 (FUNC_2 (VAR_3)),
     VAR_6);
   VAR_5 = FUNC_7 (VAR_0,
         FUNC_3 (VAR_2, VAR_8),
         VAR_5);
 }
      break;

    case 129:
      VAR_6 = FUNC_1 (FUNC_2 (FUNC_0 (VAR_4)));

      for (; VAR_3; VAR_3 = FUNC_0 (VAR_3))
 {
   int VAR_9
     = FUNC_6 (FUNC_1 (FUNC_2 (VAR_3)),
     VAR_6);
   VAR_5 = FUNC_7 (VAR_0,
         FUNC_3 (VAR_2, VAR_9),
         VAR_5);
 }
      break;

    default:
      FUNC_4 ();
    }

  return FUNC_5 (VAR_5);

}
