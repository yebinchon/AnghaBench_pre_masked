
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static bool
FUNC_3 (tree VAR_1)
{
  tree VAR_2 = FUNC_0 (VAR_1);
  if (FUNC_1 (VAR_0, VAR_2))

    return 1;
  else
    {
      FUNC_2 ("specialization of %qD in different namespace", VAR_1);
      FUNC_2 ("  from definition of %q+#D", VAR_1);
      return 0;
    }
}
