
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_6 (tree VAR_2,
          tree VAR_3)
{
  tree VAR_4;
  tree VAR_5;
  tree VAR_6;
  tree VAR_7;

  VAR_4 = FUNC_2 (VAR_2);
  VAR_6 = FUNC_3 (VAR_4);
  VAR_5 = FUNC_2 (VAR_3);
  VAR_7 = FUNC_3 (VAR_5);







  if ((VAR_1 || ! FUNC_0 (VAR_3))
      && ! FUNC_1 (VAR_3)
      && VAR_0
      && !FUNC_4 (VAR_6, VAR_7,
                  1))
    {
      FUNC_5 ("declaration of %qF throws different exceptions", VAR_2);
      FUNC_5 ("from previous declaration %q+F", VAR_3);
    }
}
