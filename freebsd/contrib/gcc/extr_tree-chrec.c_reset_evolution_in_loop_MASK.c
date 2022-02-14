
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (unsigned int,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;

tree
FUNC_10 (unsigned VAR_2,
    tree VAR_3,
    tree VAR_4)
{
  FUNC_9 (FUNC_8 (VAR_3) == FUNC_8 (VAR_4));

  if (FUNC_3 (VAR_3) == VAR_1
      && FUNC_2 (VAR_3) > VAR_2)
    {
      tree VAR_5 = FUNC_10 (VAR_2, FUNC_0 (VAR_3),
        VAR_4);
      tree VAR_6 = FUNC_10 (VAR_2, FUNC_1 (VAR_3),
         VAR_4);
      return FUNC_5 (VAR_1, FUNC_4 (VAR_5),
       FUNC_6 (VAR_0, FUNC_2 (VAR_3)),
       VAR_5, VAR_6);
    }

  while (FUNC_3 (VAR_3) == VAR_1
  && FUNC_2 (VAR_3) == VAR_2)
    VAR_3 = FUNC_0 (VAR_3);

  return FUNC_7 (VAR_2, VAR_3, VAR_4);
}
