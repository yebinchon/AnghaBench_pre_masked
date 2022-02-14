
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,int ,int ) ;

int
FUNC_6 (tree VAR_2, tree VAR_3)
{






  if (!FUNC_0 (VAR_3) && FUNC_3 (VAR_3) != VAR_0)
    {
      FUNC_4 ("invalid in-class initialization of static data member "
      "of non-integral type %qT",
      VAR_3);




      return 1;
    }
  else if (!FUNC_1 (VAR_3))
    FUNC_4 ("ISO C++ forbids in-class initialization of non-const "
    "static member %qD",
    VAR_2);
  else if (VAR_1 && !FUNC_2 (VAR_3))
    FUNC_5 ("ISO C++ forbids initialization of member constant "
      "%qD of non-integral type %qT", VAR_2, VAR_3);

  return 0;
}
