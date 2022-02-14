
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int bitmap ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_0, bitmap VAR_1)
{
  tree VAR_2 = FUNC_2 (VAR_0);
  tree VAR_3;
  int VAR_4 = FUNC_0 (VAR_2);






  if (FUNC_4 (VAR_2))
    {
      FUNC_1 (VAR_1, VAR_4);
      FUNC_6 (VAR_0);
      return;
    }



  VAR_3 = FUNC_3 (VAR_0);
  if (!VAR_3)
    {
      FUNC_1 (VAR_1, VAR_4);
      return;
    }

  FUNC_5 (VAR_0, VAR_2, VAR_3, VAR_1);




  FUNC_1 (VAR_1, VAR_4);
}
